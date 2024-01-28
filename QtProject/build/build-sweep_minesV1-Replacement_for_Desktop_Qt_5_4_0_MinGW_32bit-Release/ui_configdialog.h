/********************************************************************************
** Form generated from reading UI file 'configdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGDIALOG_H
#define UI_CONFIGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_configDialog
{
public:
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *labelWidth;
    QLabel *labelHeight;
    QLabel *labelMines;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEditWidth;
    QLineEdit *lineEditHeight;
    QLineEdit *lineEditMines;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *configDialog)
    {
        if (configDialog->objectName().isEmpty())
            configDialog->setObjectName("configDialog");
        configDialog->resize(362, 188);
        groupBox = new QGroupBox(configDialog);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 10, 341, 161));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 20, 301, 141));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        labelWidth = new QLabel(layoutWidget);
        labelWidth->setObjectName("labelWidth");

        verticalLayout->addWidget(labelWidth);

        labelHeight = new QLabel(layoutWidget);
        labelHeight->setObjectName("labelHeight");

        verticalLayout->addWidget(labelHeight);

        labelMines = new QLabel(layoutWidget);
        labelMines->setObjectName("labelMines");

        verticalLayout->addWidget(labelMines);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName("verticalLayout_2");
        lineEditWidth = new QLineEdit(layoutWidget);
        lineEditWidth->setObjectName("lineEditWidth");

        verticalLayout_2->addWidget(lineEditWidth);

        lineEditHeight = new QLineEdit(layoutWidget);
        lineEditHeight->setObjectName("lineEditHeight");

        verticalLayout_2->addWidget(lineEditHeight);

        lineEditMines = new QLineEdit(layoutWidget);
        lineEditMines->setObjectName("lineEditMines");

        verticalLayout_2->addWidget(lineEditMines);


        horizontalLayout->addLayout(verticalLayout_2);


        horizontalLayout_2->addLayout(horizontalLayout);

        horizontalSpacer = new QSpacerItem(80, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        radioButton = new QRadioButton(layoutWidget);
        radioButton->setObjectName("radioButton");

        verticalLayout_3->addWidget(radioButton);

        radioButton_2 = new QRadioButton(layoutWidget);
        radioButton_2->setObjectName("radioButton_2");

        verticalLayout_3->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(layoutWidget);
        radioButton_3->setObjectName("radioButton_3");

        verticalLayout_3->addWidget(radioButton_3);


        horizontalLayout_2->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout_2);

        buttonBox = new QDialogButtonBox(layoutWidget);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setAcceptDrops(false);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_4->addWidget(buttonBox);


        retranslateUi(configDialog);

        QMetaObject::connectSlotsByName(configDialog);
    } // setupUi

    void retranslateUi(QDialog *configDialog)
    {
        configDialog->setWindowTitle(QCoreApplication::translate("configDialog", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("configDialog", "configuration", nullptr));
        labelWidth->setText(QCoreApplication::translate("configDialog", "width", nullptr));
        labelHeight->setText(QCoreApplication::translate("configDialog", "height", nullptr));
        labelMines->setText(QCoreApplication::translate("configDialog", "mines's nums", nullptr));
        radioButton->setText(QCoreApplication::translate("configDialog", "easy", nullptr));
        radioButton_2->setText(QCoreApplication::translate("configDialog", "medium", nullptr));
        radioButton_3->setText(QCoreApplication::translate("configDialog", "hard", nullptr));
    } // retranslateUi

};

namespace Ui {
    class configDialog: public Ui_configDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGDIALOG_H
