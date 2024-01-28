/********************************************************************************
** Form generated from reading UI file 'Success.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUCCESS_H
#define UI_SUCCESS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SuccessDialog
{
public:
    QLabel *pTitleLabel;
    QLabel *pNameLabel;
    QLineEdit *pNameLineEdit;
    QPushButton *pDoneButton;

    void setupUi(QDialog *SuccessDialog)
    {
        if (SuccessDialog->objectName().isEmpty())
            SuccessDialog->setObjectName("SuccessDialog");
        SuccessDialog->resize(240, 160);
        SuccessDialog->setMinimumSize(QSize(240, 160));
        SuccessDialog->setMaximumSize(QSize(240, 160));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        SuccessDialog->setFont(font);
        pTitleLabel = new QLabel(SuccessDialog);
        pTitleLabel->setObjectName("pTitleLabel");
        pTitleLabel->setGeometry(QRect(0, 16, 240, 32));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font1.setPointSize(12);
        font1.setBold(false);
        pTitleLabel->setFont(font1);
        pTitleLabel->setAlignment(Qt::AlignCenter);
        pNameLabel = new QLabel(SuccessDialog);
        pNameLabel->setObjectName("pNameLabel");
        pNameLabel->setGeometry(QRect(20, 72, 96, 16));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font2.setPointSize(9);
        pNameLabel->setFont(font2);
        pNameLineEdit = new QLineEdit(SuccessDialog);
        pNameLineEdit->setObjectName("pNameLineEdit");
        pNameLineEdit->setGeometry(QRect(124, 71, 88, 22));
        pNameLineEdit->setMaxLength(10);
        pDoneButton = new QPushButton(SuccessDialog);
        pDoneButton->setObjectName("pDoneButton");
        pDoneButton->setGeometry(QRect(160, 121, 64, 22));

        retranslateUi(SuccessDialog);

        QMetaObject::connectSlotsByName(SuccessDialog);
    } // setupUi

    void retranslateUi(QDialog *SuccessDialog)
    {
        SuccessDialog->setWindowTitle(QCoreApplication::translate("SuccessDialog", "\350\216\267\350\203\234 Mine Sweeper", nullptr));
        pTitleLabel->setText(QCoreApplication::translate("SuccessDialog", "\346\201\255\345\226\234\357\274\201\346\202\250\350\216\267\350\203\234\344\272\206", nullptr));
        pNameLabel->setText(QCoreApplication::translate("SuccessDialog", "\350\257\267\350\276\223\345\205\245\346\202\250\347\232\204\345\247\223\345\220\215:", nullptr));
        pNameLineEdit->setText(QCoreApplication::translate("SuccessDialog", "Guest", nullptr));
        pDoneButton->setText(QCoreApplication::translate("SuccessDialog", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SuccessDialog: public Ui_SuccessDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUCCESS_H
