#include "configdialog.h"
#include "ui_configdialog.h"
#include <QIntValidator>
//#include <qDebug>

configDialog::configDialog(int cw, int ch, int cm, QWidget *parent) :

    QDialog(parent),

    _width(cw),
    _height(ch),
    _mines(cm),

    ui(new Ui::configDialog)
{
    ui->setupUi(this);

    QIntValidator * vaildW = new QIntValidator(1, 30, this);//�������
    QIntValidator * vaildH = new QIntValidator(1, 19, this);//�߶�����
    QIntValidator * vaildM = new QIntValidator(0, 570, this);//������������(���滹�и������)

    ui->lineEditWidth->setValidator(vaildW);
    ui->lineEditHeight->setValidator(vaildH);
    ui->lineEditMines->setValidator(vaildM);

    ui->lineEditWidth->setText(QString::number(_width));
    ui->lineEditHeight->setText(QString::number(_height));
    ui->lineEditMines->setText(QString::number(_mines));

    connect(ui->buttonBox,SIGNAL(accepted()),this,SLOT(accept()));
}

//�Զ���accept�ۣ�����Ҫ���ø���Ĳۣ����ڵ����Լ��ģ�����Ժ���Ҫ��ʾ���ø���ۣ�
void configDialog::accept(){

    _width=ui->lineEditWidth->text().toInt();
    _height=ui->lineEditHeight->text().toInt();
    _mines=ui->lineEditMines->text().toInt();

    QDialog::accept();//�Լ���ʵ���Ժ�����ʾ���ø����accept��
}

configDialog::~configDialog() {
    delete ui;
}
