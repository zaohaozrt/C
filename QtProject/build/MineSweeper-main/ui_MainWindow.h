/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Graphics.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *pActionEasyLevel;
    QAction *pActionNormalLevel;
    QAction *pActionHighLevel;
    QAction *pActionRestart;
    QAction *pActionAbout;
    QAction *pActionCustomLevel;
    QAction *pActionRecord;
    QAction *pActionPause;
    QWidget *pCentralWidget;
    QVBoxLayout *pMainLayout;
    QHBoxLayout *pGameInfoLayout;
    QLabel *pTimeLabel;
    QLabel *pMineLabel;
    GraphicsWidget *pGraphicsWidget;
    QMenuBar *pMenuBar;
    QMenu *pMenuStart;
    QMenu *pMenuHelp;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(280, 348);
        MainWindow->setMaximumSize(QSize(65536, 65536));
        QFont font;
        font.setFamilies({QString::fromUtf8("Consolas")});
        font.setPointSize(11);
        font.setBold(true);
        MainWindow->setFont(font);
        MainWindow->setAcceptDrops(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Images/icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        pActionEasyLevel = new QAction(MainWindow);
        pActionEasyLevel->setObjectName("pActionEasyLevel");
        pActionNormalLevel = new QAction(MainWindow);
        pActionNormalLevel->setObjectName("pActionNormalLevel");
        pActionHighLevel = new QAction(MainWindow);
        pActionHighLevel->setObjectName("pActionHighLevel");
        pActionRestart = new QAction(MainWindow);
        pActionRestart->setObjectName("pActionRestart");
        pActionAbout = new QAction(MainWindow);
        pActionAbout->setObjectName("pActionAbout");
        pActionCustomLevel = new QAction(MainWindow);
        pActionCustomLevel->setObjectName("pActionCustomLevel");
        pActionRecord = new QAction(MainWindow);
        pActionRecord->setObjectName("pActionRecord");
        pActionPause = new QAction(MainWindow);
        pActionPause->setObjectName("pActionPause");
        pCentralWidget = new QWidget(MainWindow);
        pCentralWidget->setObjectName("pCentralWidget");
        pCentralWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        pMainLayout = new QVBoxLayout(pCentralWidget);
        pMainLayout->setSpacing(0);
        pMainLayout->setObjectName("pMainLayout");
        pMainLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        pMainLayout->setContentsMargins(0, 0, 0, 0);
        pGameInfoLayout = new QHBoxLayout();
        pGameInfoLayout->setSpacing(0);
        pGameInfoLayout->setObjectName("pGameInfoLayout");
        pGameInfoLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        pGameInfoLayout->setContentsMargins(12, -1, 12, -1);
        pTimeLabel = new QLabel(pCentralWidget);
        pTimeLabel->setObjectName("pTimeLabel");
        pTimeLabel->setMinimumSize(QSize(140, 42));
        pTimeLabel->setMaximumSize(QSize(16777215, 42));
        pTimeLabel->setBaseSize(QSize(0, 42));
        pTimeLabel->setFont(font);
        pTimeLabel->setLayoutDirection(Qt::LeftToRight);

        pGameInfoLayout->addWidget(pTimeLabel);

        pMineLabel = new QLabel(pCentralWidget);
        pMineLabel->setObjectName("pMineLabel");
        pMineLabel->setMinimumSize(QSize(100, 42));
        pMineLabel->setMaximumSize(QSize(100, 42));
        pMineLabel->setBaseSize(QSize(0, 42));
        pMineLabel->setFont(font);

        pGameInfoLayout->addWidget(pMineLabel);


        pMainLayout->addLayout(pGameInfoLayout);

        pGraphicsWidget = new GraphicsWidget(pCentralWidget);
        pGraphicsWidget->setObjectName("pGraphicsWidget");
        pGraphicsWidget->setMinimumSize(QSize(280, 280));

        pMainLayout->addWidget(pGraphicsWidget);

        MainWindow->setCentralWidget(pCentralWidget);
        pMenuBar = new QMenuBar(MainWindow);
        pMenuBar->setObjectName("pMenuBar");
        pMenuBar->setGeometry(QRect(0, 0, 280, 24));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Microsoft YaHei UI")});
        font1.setPointSize(9);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setStrikeOut(false);
        pMenuBar->setFont(font1);
        pMenuStart = new QMenu(pMenuBar);
        pMenuStart->setObjectName("pMenuStart");
        pMenuHelp = new QMenu(pMenuBar);
        pMenuHelp->setObjectName("pMenuHelp");
        MainWindow->setMenuBar(pMenuBar);

        pMenuBar->addAction(pMenuStart->menuAction());
        pMenuBar->addAction(pMenuHelp->menuAction());
        pMenuStart->addAction(pActionEasyLevel);
        pMenuStart->addAction(pActionNormalLevel);
        pMenuStart->addAction(pActionHighLevel);
        pMenuStart->addAction(pActionCustomLevel);
        pMenuStart->addSeparator();
        pMenuStart->addAction(pActionPause);
        pMenuStart->addAction(pActionRestart);
        pMenuHelp->addAction(pActionRecord);
        pMenuHelp->addSeparator();
        pMenuHelp->addAction(pActionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Mine Sweeper", nullptr));
        pActionEasyLevel->setText(QCoreApplication::translate("MainWindow", "\345\210\235\347\272\247(E)", nullptr));
        pActionNormalLevel->setText(QCoreApplication::translate("MainWindow", "\344\270\255\347\272\247(N)", nullptr));
        pActionHighLevel->setText(QCoreApplication::translate("MainWindow", "\351\253\230\347\272\247(H)", nullptr));
        pActionRestart->setText(QCoreApplication::translate("MainWindow", "\351\207\215\346\226\260\345\274\200\345\247\213(R)", nullptr));
        pActionAbout->setText(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216(A)", nullptr));
        pActionCustomLevel->setText(QCoreApplication::translate("MainWindow", "\350\207\252\345\256\232\344\271\211(C)", nullptr));
        pActionRecord->setText(QCoreApplication::translate("MainWindow", "\346\216\222\350\241\214\346\246\234(R)", nullptr));
        pActionPause->setText(QCoreApplication::translate("MainWindow", "\346\232\202\345\201\234(P)", nullptr));
        pTimeLabel->setText(QCoreApplication::translate("MainWindow", "TIME: 999", nullptr));
        pMineLabel->setText(QCoreApplication::translate("MainWindow", "MINES: 999", nullptr));
        pMenuStart->setTitle(QCoreApplication::translate("MainWindow", "\345\274\200\345\247\213(S)", nullptr));
        pMenuHelp->setTitle(QCoreApplication::translate("MainWindow", "\345\270\256\345\212\251(H)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
