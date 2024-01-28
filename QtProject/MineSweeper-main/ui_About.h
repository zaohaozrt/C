/********************************************************************************
** Form generated from reading UI file 'About.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QPushButton *pCloseButton;
    QLabel *pIntroductionLabel;
    QLabel *pTitleLabel;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName("AboutDialog");
        AboutDialog->setWindowModality(Qt::NonModal);
        AboutDialog->resize(320, 200);
        AboutDialog->setMinimumSize(QSize(320, 200));
        AboutDialog->setMaximumSize(QSize(320, 200));
        AboutDialog->setAutoFillBackground(false);
        AboutDialog->setSizeGripEnabled(false);
        pCloseButton = new QPushButton(AboutDialog);
        pCloseButton->setObjectName("pCloseButton");
        pCloseButton->setGeometry(QRect(224, 160, 80, 24));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        pCloseButton->setFont(font);
        pIntroductionLabel = new QLabel(AboutDialog);
        pIntroductionLabel->setObjectName("pIntroductionLabel");
        pIntroductionLabel->setGeometry(QRect(40, 105, 240, 16));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font1.setPointSize(10);
        pIntroductionLabel->setFont(font1);
        pIntroductionLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        pTitleLabel = new QLabel(AboutDialog);
        pTitleLabel->setObjectName("pTitleLabel");
        pTitleLabel->setGeometry(QRect(0, 35, 320, 48));
        pTitleLabel->setStyleSheet(QString::fromUtf8("image: url(:/Images/title.png);"));

        retranslateUi(AboutDialog);
        QObject::connect(pCloseButton, &QPushButton::clicked, AboutDialog, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QCoreApplication::translate("AboutDialog", "\345\205\263\344\272\216 Mine Sweeper", nullptr));
        pCloseButton->setText(QCoreApplication::translate("AboutDialog", "OK", nullptr));
        pIntroductionLabel->setText(QCoreApplication::translate("AboutDialog", "C++ Qt \350\257\276\347\250\213\350\256\276\350\256\241\351\241\271\347\233\256 \347\273\217\345\205\270\346\211\253\351\233\267\345\260\217\346\270\270\346\210\217", nullptr));
        pTitleLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
