/********************************************************************************
** Form generated from reading UI file 'Custom.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOM_H
#define UI_CUSTOM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_CustomDialog
{
public:
    QPushButton *pDoneButton;
    QLabel *pWidthLabel;
    QLabel *pHeightLabel;
    QLabel *pMineLabel;
    QSpinBox *pWidthSpinBox;
    QSpinBox *pHeightSpinBox;
    QSpinBox *pMineSpinBox;

    void setupUi(QDialog *CustomDialog)
    {
        if (CustomDialog->objectName().isEmpty())
            CustomDialog->setObjectName("CustomDialog");
        CustomDialog->resize(280, 160);
        CustomDialog->setMinimumSize(QSize(280, 160));
        CustomDialog->setMaximumSize(QSize(280, 160));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        CustomDialog->setFont(font);
        pDoneButton = new QPushButton(CustomDialog);
        pDoneButton->setObjectName("pDoneButton");
        pDoneButton->setGeometry(QRect(200, 121, 64, 22));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font1.setPointSize(9);
        pDoneButton->setFont(font1);
        pWidthLabel = new QLabel(CustomDialog);
        pWidthLabel->setObjectName("pWidthLabel");
        pWidthLabel->setGeometry(QRect(24, 24, 160, 16));
        pWidthLabel->setFont(font);
        pHeightLabel = new QLabel(CustomDialog);
        pHeightLabel->setObjectName("pHeightLabel");
        pHeightLabel->setGeometry(QRect(24, 48, 160, 16));
        pHeightLabel->setFont(font);
        pMineLabel = new QLabel(CustomDialog);
        pMineLabel->setObjectName("pMineLabel");
        pMineLabel->setGeometry(QRect(24, 72, 160, 16));
        pMineLabel->setFont(font);
        pWidthSpinBox = new QSpinBox(CustomDialog);
        pWidthSpinBox->setObjectName("pWidthSpinBox");
        pWidthSpinBox->setGeometry(QRect(192, 22, 64, 20));
        pWidthSpinBox->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        pWidthSpinBox->setMinimum(10);
        pWidthSpinBox->setMaximum(40);
        pWidthSpinBox->setValue(15);
        pHeightSpinBox = new QSpinBox(CustomDialog);
        pHeightSpinBox->setObjectName("pHeightSpinBox");
        pHeightSpinBox->setGeometry(QRect(192, 46, 64, 20));
        pHeightSpinBox->setMinimum(10);
        pHeightSpinBox->setMaximum(25);
        pHeightSpinBox->setValue(15);
        pMineSpinBox = new QSpinBox(CustomDialog);
        pMineSpinBox->setObjectName("pMineSpinBox");
        pMineSpinBox->setGeometry(QRect(192, 70, 64, 20));
        pMineSpinBox->setMinimum(1);
        pMineSpinBox->setMaximum(1000);
        pMineSpinBox->setValue(10);

        retranslateUi(CustomDialog);

        QMetaObject::connectSlotsByName(CustomDialog);
    } // setupUi

    void retranslateUi(QDialog *CustomDialog)
    {
        CustomDialog->setWindowTitle(QCoreApplication::translate("CustomDialog", "\350\207\252\345\256\232\344\271\211 Mine Sweeper", nullptr));
        pDoneButton->setText(QCoreApplication::translate("CustomDialog", "OK", nullptr));
        pWidthLabel->setText(QCoreApplication::translate("CustomDialog", "\350\257\267\350\276\223\345\205\245\347\225\214\351\235\242\345\256\275\345\272\246\357\274\21010~40\357\274\211", nullptr));
        pHeightLabel->setText(QCoreApplication::translate("CustomDialog", "\350\257\267\350\276\223\345\205\245\347\225\214\351\235\242\351\253\230\345\272\246\357\274\21010~25\357\274\211", nullptr));
        pMineLabel->setText(QCoreApplication::translate("CustomDialog", "\350\257\267\350\276\223\345\205\245\345\234\260\351\233\267\346\225\260\351\207\217\357\274\2101~999\357\274\211", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CustomDialog: public Ui_CustomDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOM_H
