#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsView>
#include "minesweepscene.h"
#include <QMouseEvent>
#include "cellitem.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void deleteOldScene();//ɾ���ɳ���
    void addNewScene();//�����³���
    void adjustWindowsWH();//���������ڴ�С
    void block_blank(double px, double py, int x, int y);//һ����Ϊ�գ�ȫ����������ֱ����ԵΪ���ֻ������߽�

    bool JudgeIsWin();//��Ӯ

protected:
    void mousePressEvent(QMouseEvent *event);

private slots:
    void on_actionNew_game_triggered();
    void on_actionConfig_triggered();
    void on_actionQuit_triggered();
    void on_actionAbout_triggered();

private:
    Ui::MainWindow *ui;
    QGraphicsView *_view;
    mineSweepScene *_scene;

    cellItem *_cItem;

};

#endif // MAINWINDOW_H
