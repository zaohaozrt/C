#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "configdialog.h"
#include "fielddata.h"
#include "minesweepscene.h"
//#include <QDebug>
#include <queue>
//using namespace std;

double factor_Scale=0.9;//��������(�Զ���),��ʵ�������30*19�ˣ��������������14��������Ļ�����õ���
bool IsScale=false;//�Ƿ�����(�����˵Ļ��������ҲҪ����)

//��Ӯ����:����ȫ�����&&����ȫ������(��״̬Ϊ��ʼ���ĸ���Ϊ������)
int remain_mines=Field->getMines();//ʣ����ҪѰ�ҵĵ�������
int remain_INITIAL=Field->getWidth()*Field->getHeight();//״̬���ǳ�ʼ���ķ������

struct Point_Px
{
    double px;
    double py;
};

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    FieldData::getInstance();

    _view = new QGraphicsView;
    this->setCentralWidget(_view);

    _scene=new mineSweepScene;
    _view->setScene(_scene);

    //qDebug()<<"0--------"<<this->width()<<_view->width()<<_scene->width();
    //���ô��ڴ�С���ʣ����ð���_view����
    this->showMaximized();//��󻯴���
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::deleteOldScene(){
    //������ԭ
    this->showMaximized();//��󻯴���
    //thisH=this->width();
    if(_scene->width()>this->width()){
        _view->scale(_scene->width()/this->width()/factor_Scale,_scene->width()/this->width()/factor_Scale);
        IsScale=false;
    }
    //ɾ���ɳ���
    if(_scene!=nullptr){
        delete _scene;
        _scene = nullptr;
    }
}

void MainWindow::addNewScene(){
    //�����³���
    _scene = new mineSweepScene;
    _view->setScene(_scene);

    //Ԫ������(ע��ֻ���ݿ�����ţ���Ϊ���¹�����ƽ���������ҹ���������)
    //����Ԫ�ش�С(Ԫ�ع���ʱ_scene->width()�ܴ���Ҫ����)��ע�����ź��´β��ó�������Ҫ��ԭ
    this->showMaximized();//��󻯴���
    if(_scene->width()>this->width()){
        IsScale=true;
        _view->scale(this->width()/_scene->width()*factor_Scale,this->width()/_scene->width()*factor_Scale);//���ñ��δ��ڴ�С
    }
    else{
        IsScale=false;
    }

    remain_mines=Field->getMines();//ʣ����ҪѰ�ҵĵ�������
    remain_INITIAL=Field->getWidth()*Field->getHeight();//״̬���ǳ�ʼ���ķ������
}

void MainWindow::on_actionNew_game_triggered()
{
    deleteOldScene();
    //��ʼ����Ϸ����Ҫ����������̫����������Ϊ����һ���������Ŀ��ͬ��ֻ��λ�ñ���
    Field->customizeWHM(Field->getWidth(),Field->getHeight(),Field->getMines());
    Field->reset();
    addNewScene();
}

void MainWindow::on_actionConfig_triggered()
{
    configDialog config(Field->getWidth(),Field->getHeight(),Field->getMines());
    if(config.exec()==QDialog::Accepted){
        //��������������䲻��̫��
        if(config._mines<config._width*config._height*0.5){
            deleteOldScene();
            Field->customizeWHM(config._width,config._height,config._mines);
            Field->reset();
            addNewScene();
        }
        else{
            QMessageBox::warning(this,"Warning","mines too many!");
        }
    }
}

void MainWindow::on_actionQuit_triggered()
{
    close();
}

void MainWindow::on_actionAbout_triggered()
{
    QMessageBox::information(this,"about","version 1.0");
}


void MainWindow::mousePressEvent(QMouseEvent *event){
    double px=event->localPos().x();
    double py=event->localPos().y();//�������ϱ�ռ����35px,���Ҫ��ȥ���ƫ����

    QGraphicsItem *item =_view->itemAt(px, py-35);
    _cItem=dynamic_cast<cellItem*>(item);//�� _cItem=(cellItem*)item;

    if(item!=nullptr){//����ڵ�ͼ��Χ֮�ⲻ����Ӧ

        static double cw = IsScale ?  item->boundingRect().width()*this->width()/_scene->width()*factor_Scale : item->boundingRect().width();
        static double ch = IsScale ?  item->boundingRect().height()*this->width()/_scene->width()*factor_Scale : item->boundingRect().height();

        switch(event->button())
        {
        case Qt::LeftButton:
            //ֻ�г�ʼ�����ʺ�״̬����ſ��Ե������ɨ��
            if(INITIAL==_cItem->getStatus() || QUESTION==_cItem->getStatus()){
                switch(Field->_cells[item->pos().x()/cw][item->pos().y()/ch]){//��ȡ�������Ӧ����
                //Field->_visited[item->pos().x()/cw][item->pos().y()/ch]=1;
                case -1:
                    --remain_INITIAL;
                    _cItem->setStatus(EXPLODE);
                    QMessageBox::information(this,"Result","You lost! New game will start...");
                    on_actionNew_game_triggered();
                    break;
                case 0:
                    _cItem->setStatus(BLANK);
                    --remain_INITIAL;JudgeIsWin();

                    block_blank(px,py,item->pos().x()/cw,item->pos().y()/ch);
                    //cout<<"My surrounding have no mines."<<endl;
                    break;
                case 1:
                    _cItem->setStatus(DIGIT,1);
                    --remain_INITIAL;JudgeIsWin();
                    //cout<<"My surrounding has 1 mine."<<endl;
                    break;
                case 2:
                    _cItem->setStatus(DIGIT,2);
                    --remain_INITIAL;JudgeIsWin();
                    //cout<<"My surrounding have 2 mines."<<endl;
                    break;
                case 3:
                    _cItem->setStatus(DIGIT,3);
                     --remain_INITIAL;JudgeIsWin();
                    //cout<<"My surrounding have 3 mines."<<endl;
                    break;
                case 4:
                    _cItem->setStatus(DIGIT,4);
                     --remain_INITIAL;JudgeIsWin();
                    //cout<<"My surrounding have 4 mines."<<endl;
                    break;
                case 5:
                    _cItem->setStatus(DIGIT,5);
                    --remain_INITIAL;JudgeIsWin();
                    //cout<<"My surrounding have 5 mines."<<endl;
                    break;
                case 6:
                    _cItem->setStatus(DIGIT,6);
                    --remain_INITIAL;JudgeIsWin();
                    //cout<<"My surrounding have 6 mines."<<endl;
                    break;
                case 7:
                    _cItem->setStatus(DIGIT,7);
                    --remain_INITIAL;JudgeIsWin();
                    //cout<<"My surrounding have 7 mines."<<endl;
                    break;
                case 8:
                    _cItem->setStatus(DIGIT,8);
                    --remain_INITIAL;JudgeIsWin();
                    //cout<<"My surrounding have 8 mines."<<endl;
                    break;
                default:
                    break;
                }
            }
            else if(FLAG==_cItem->getStatus()){//����λ��ֻ��ͨ���Ҽ�����
                ;
            }
            break;
        case Qt::RightButton:
            if(INITIAL==_cItem->getStatus()){
                _cItem->setStatus(FLAG);
                if(-1==Field->_cells[item->pos().x()/cw][item->pos().y()/ch]){
                    --remain_mines;JudgeIsWin();

                }
            }
            else if(FLAG==_cItem->getStatus()){
                _cItem->setStatus(QUESTION);
                if(-1==Field->_cells[item->pos().x()/cw][item->pos().y()/ch]){
                    ++remain_mines;
                }

            }
            else if(QUESTION==_cItem->getStatus()){
                _cItem->setStatus(INITIAL);
            }
            break;
        default:
            break;
        }
    }
}

//px��pyΪ���ָ�����꣬x��yΪ���ݾ��������(���ǵ�ͼ��Ԫ�ؿ��ܻ����ţ����������궨��Ϊdouble,�������־����£���Ȼ���ܷ�̫��Ԫ�أ������Զ�Ѱ��ʱ�����Խ�������������޶�Ԫ������)
void MainWindow::block_blank(double px,double py,int x,int y){
    Field->initVisited();

    QGraphicsItem *item =_view->itemAt(px, py-35);

    static double cw = IsScale ?  item->boundingRect().width()*this->width()/_scene->width()*factor_Scale : item->boundingRect().width();
    static double ch = IsScale ?  item->boundingRect().height()*this->width()/_scene->width()*factor_Scale : item->boundingRect().height();

    const int dir[8][2]={{0, 1}, {1, 0}, {0, -1}, {-1, 0},//��,��,��,��
                         {1, 1}, {1, -1}, {-1, -1}, {-1, 1}//����,����,����,����
                        };//�˸����������չ

    queue<pair<Point_Px,int>> que;//���������������ݾ�������
    que.push(pair<Point_Px,int>({px,py},x*Field->getHeight()+y));
    Field->_visited[x][y]=1;
    while(!que.empty()){
        pair<Point_Px,int> fr=que.front();
        que.pop();
        px=fr.first.px;
        py=fr.first.py;
        x=fr.second/Field->getHeight();
        y=fr.second%Field->getHeight();

        for(int i=0;i<8;++i){//8��������չ
            double npx=px+cw*dir[i][0];
            double npy=py+ch*dir[i][1];
            int nx=x+dir[i][0];
            int ny=y+dir[i][1];
            //�����߽��ж�
            //qDebug()<<npx<<npy<<nx<<ny;
            if(nx<0 || nx>=Field->getWidth() || ny<0 || ny>=Field->getHeight()
                    || 1==Field->_visited[nx][ny]){
                //qDebug()<<"miaomiao-continue";
                continue;
            }

            item =_view->itemAt(npx, npy-35);
            _cItem=dynamic_cast<cellItem*>(item);

            //����Ĳ���Ѱ·
            if(FLAG==_cItem->getStatus())
                continue;

            //�������Ϊ0����ʾ��Χû���ף������������н�����ȥ
            if(0==Field->_cells[nx][ny]){
                --remain_INITIAL;JudgeIsWin();
                que.push(pair<Point_Px,int>({npx,npy},nx*Field->getHeight()+ny));
                Field->_visited[nx][ny]=1;
                _cItem->setStatus(BLANK);
            }
            else{
                switch (Field->_cells[nx][ny]) {
                case 1:
                    if(_cItem->getStatus()!=DIGIT){//ע����Ҫ����״̬�жϣ���Ȼ���ٴ�������ͬ״̬���˷���Դ���Ұ�״̬������ȥ1����ɼ������
                        _cItem->setStatus(DIGIT,1);
                        --remain_INITIAL;JudgeIsWin();
                    }
                    //cout<<"My surrounding has 1 mine."<<endl;
                    break;
                case 2:
                    if(_cItem->getStatus()!=DIGIT){
                        _cItem->setStatus(DIGIT,2);
                        --remain_INITIAL;JudgeIsWin();
                    }
                    //cout<<"My surrounding have 2 mines."<<endl;
                    break;
                case 3:
                    if(_cItem->getStatus()!=DIGIT){
                        _cItem->setStatus(DIGIT,3);
                        --remain_INITIAL;JudgeIsWin();
                    }
                    //cout<<"My surrounding have 3 mines."<<endl;
                    break;
                case 4:
                    if(_cItem->getStatus()!=DIGIT){
                        _cItem->setStatus(DIGIT,4);
                        --remain_INITIAL;JudgeIsWin();
                    }
                    //cout<<"My surrounding have 4 mines."<<endl;
                    break;
                case 5:
                    if(_cItem->getStatus()!=DIGIT){
                        _cItem->setStatus(DIGIT,5);
                        --remain_INITIAL;JudgeIsWin();
                    }
                    //cout<<"My surrounding have 5 mines."<<endl;
                    break;
                case 6:
                    if(_cItem->getStatus()!=DIGIT){
                        _cItem->setStatus(DIGIT,6);
                        --remain_INITIAL;JudgeIsWin();
                    }
                    //cout<<"My surrounding have 6 mines."<<endl;
                    break;
                case 7:
                    if(_cItem->getStatus()!=DIGIT){
                        _cItem->setStatus(DIGIT,7);
                        --remain_INITIAL;JudgeIsWin();
                    }
                    //cout<<"My surrounding have 7 mines."<<endl;
                    break;
                case 8:
                    if(_cItem->getStatus()!=DIGIT){
                        _cItem->setStatus(DIGIT,8);
                        --remain_INITIAL;JudgeIsWin();
                    }
                    //cout<<"My surrounding have 8 mines."<<endl;
                    break;
                default:
                    break;
                }
            }
        }
    }
}

bool MainWindow::JudgeIsWin(){
    //qDebug()<<"remain_mines:"<<remain_mines;
    //qDebug()<<"remain_INITIAL:"<<remain_INITIAL;
    if(0==remain_mines && Field->getMines()==remain_INITIAL){
        QMessageBox::information(this,"Result","You win! New game will start...");
        on_actionNew_game_triggered();
        return true;
    }
    return false;
}
