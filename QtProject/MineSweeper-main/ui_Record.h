/********************************************************************************
** Form generated from reading UI file 'Record.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECORD_H
#define UI_RECORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_RecordDialog
{
public:
    QLabel *pNormalTitleLabel;
    QLabel *pEasyTitleLabel;
    QLabel *pHighTitleLabel;
    QLabel *pEasyLabelNo1;
    QLabel *pNormalLabelNo1;
    QLabel *pHighLabelNo1;
    QLabel *pEasyLabelNo2;
    QLabel *pEasyLabelNo3;
    QLabel *pNormalLabelNo2;
    QLabel *pHighLabelNo2;
    QLabel *pNormalLabelNo3;
    QLabel *pHighLabelNo3;
    QPushButton *pCloseButton;

    void setupUi(QDialog *RecordDialog)
    {
        if (RecordDialog->objectName().isEmpty())
            RecordDialog->setObjectName("RecordDialog");
        RecordDialog->resize(512, 240);
        RecordDialog->setMinimumSize(QSize(512, 240));
        RecordDialog->setMaximumSize(QSize(512, 240));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        RecordDialog->setFont(font);
        pNormalTitleLabel = new QLabel(RecordDialog);
        pNormalTitleLabel->setObjectName("pNormalTitleLabel");
        pNormalTitleLabel->setGeometry(QRect(224, 32, 64, 24));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font1.setPointSize(10);
        font1.setBold(true);
        pNormalTitleLabel->setFont(font1);
        pNormalTitleLabel->setFrameShape(QFrame::NoFrame);
        pNormalTitleLabel->setAlignment(Qt::AlignCenter);
        pEasyTitleLabel = new QLabel(RecordDialog);
        pEasyTitleLabel->setObjectName("pEasyTitleLabel");
        pEasyTitleLabel->setGeometry(QRect(64, 32, 64, 24));
        pEasyTitleLabel->setFont(font1);
        pEasyTitleLabel->setFrameShape(QFrame::NoFrame);
        pEasyTitleLabel->setAlignment(Qt::AlignCenter);
        pHighTitleLabel = new QLabel(RecordDialog);
        pHighTitleLabel->setObjectName("pHighTitleLabel");
        pHighTitleLabel->setGeometry(QRect(384, 32, 64, 24));
        pHighTitleLabel->setFont(font1);
        pHighTitleLabel->setFrameShape(QFrame::NoFrame);
        pHighTitleLabel->setAlignment(Qt::AlignCenter);
        pEasyLabelNo1 = new QLabel(RecordDialog);
        pEasyLabelNo1->setObjectName("pEasyLabelNo1");
        pEasyLabelNo1->setGeometry(QRect(16, 72, 16, 16));
        pEasyLabelNo1->setFont(font);
        pNormalLabelNo1 = new QLabel(RecordDialog);
        pNormalLabelNo1->setObjectName("pNormalLabelNo1");
        pNormalLabelNo1->setGeometry(QRect(176, 72, 16, 16));
        pNormalLabelNo1->setFont(font);
        pHighLabelNo1 = new QLabel(RecordDialog);
        pHighLabelNo1->setObjectName("pHighLabelNo1");
        pHighLabelNo1->setGeometry(QRect(336, 72, 16, 16));
        pHighLabelNo1->setFont(font);
        pEasyLabelNo2 = new QLabel(RecordDialog);
        pEasyLabelNo2->setObjectName("pEasyLabelNo2");
        pEasyLabelNo2->setGeometry(QRect(16, 108, 16, 16));
        pEasyLabelNo2->setFont(font);
        pEasyLabelNo3 = new QLabel(RecordDialog);
        pEasyLabelNo3->setObjectName("pEasyLabelNo3");
        pEasyLabelNo3->setGeometry(QRect(16, 144, 16, 16));
        pEasyLabelNo3->setFont(font);
        pNormalLabelNo2 = new QLabel(RecordDialog);
        pNormalLabelNo2->setObjectName("pNormalLabelNo2");
        pNormalLabelNo2->setGeometry(QRect(176, 108, 16, 16));
        pNormalLabelNo2->setFont(font);
        pHighLabelNo2 = new QLabel(RecordDialog);
        pHighLabelNo2->setObjectName("pHighLabelNo2");
        pHighLabelNo2->setGeometry(QRect(336, 108, 16, 16));
        pHighLabelNo2->setFont(font);
        pNormalLabelNo3 = new QLabel(RecordDialog);
        pNormalLabelNo3->setObjectName("pNormalLabelNo3");
        pNormalLabelNo3->setGeometry(QRect(176, 144, 16, 16));
        pNormalLabelNo3->setFont(font);
        pHighLabelNo3 = new QLabel(RecordDialog);
        pHighLabelNo3->setObjectName("pHighLabelNo3");
        pHighLabelNo3->setGeometry(QRect(336, 144, 16, 16));
        pHighLabelNo3->setFont(font);
        pCloseButton = new QPushButton(RecordDialog);
        pCloseButton->setObjectName("pCloseButton");
        pCloseButton->setGeometry(QRect(424, 201, 72, 22));
        pCloseButton->setFont(font);

        retranslateUi(RecordDialog);
        QObject::connect(pCloseButton, &QPushButton::clicked, RecordDialog, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(RecordDialog);
    } // setupUi

    void retranslateUi(QDialog *RecordDialog)
    {
        RecordDialog->setWindowTitle(QCoreApplication::translate("RecordDialog", "\346\216\222\350\241\214\346\246\234 Mine Sweeper", nullptr));
        pNormalTitleLabel->setText(QCoreApplication::translate("RecordDialog", "\344\270\255\347\272\247\346\246\234", nullptr));
        pEasyTitleLabel->setText(QCoreApplication::translate("RecordDialog", "\345\210\235\347\272\247\346\246\234", nullptr));
        pHighTitleLabel->setText(QCoreApplication::translate("RecordDialog", "\351\253\230\347\272\247\346\246\234", nullptr));
        pEasyLabelNo1->setText(QCoreApplication::translate("RecordDialog", "1.", nullptr));
        pNormalLabelNo1->setText(QCoreApplication::translate("RecordDialog", "1.", nullptr));
        pHighLabelNo1->setText(QCoreApplication::translate("RecordDialog", "1.", nullptr));
        pEasyLabelNo2->setText(QCoreApplication::translate("RecordDialog", "2.", nullptr));
        pEasyLabelNo3->setText(QCoreApplication::translate("RecordDialog", "3.", nullptr));
        pNormalLabelNo2->setText(QCoreApplication::translate("RecordDialog", "2.", nullptr));
        pHighLabelNo2->setText(QCoreApplication::translate("RecordDialog", "2.", nullptr));
        pNormalLabelNo3->setText(QCoreApplication::translate("RecordDialog", "3.", nullptr));
        pHighLabelNo3->setText(QCoreApplication::translate("RecordDialog", "3.", nullptr));
        pCloseButton->setText(QCoreApplication::translate("RecordDialog", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RecordDialog: public Ui_RecordDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECORD_H
