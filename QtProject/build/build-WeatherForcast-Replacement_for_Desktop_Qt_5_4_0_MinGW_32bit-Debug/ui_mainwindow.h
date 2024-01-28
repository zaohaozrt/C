/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <citylineedit.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QWidget *title;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer_2;
    CityLineEdit *le_city;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_18;
    QSpacerItem *verticalSpacer_4;
    QPushButton *pb_search;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *horizontalSpacer;
    QLabel *ll_date;
    QWidget *content;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *ll_state_pic;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *ll_tempture;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *vl_city;
    QLabel *ll_city;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *ll_type;
    QLabel *ll_tempture_range;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer;
    QLabel *ll_ganmao;
    QWidget *widget_5;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_8;
    QLabel *ll_wet_icon;
    QVBoxLayout *verticalLayout_9;
    QLabel *ll_wet;
    QLabel *ll_wet_value;
    QHBoxLayout *horizontalLayout_10;
    QLabel *ll_pm25_icon;
    QVBoxLayout *verticalLayout_8;
    QLabel *ll_pm25;
    QLabel *ll_pm25_value;
    QHBoxLayout *horizontalLayout_11;
    QLabel *ll_wind_icon;
    QVBoxLayout *verticalLayout_7;
    QLabel *ll_wind;
    QLabel *ll_wind_value;
    QHBoxLayout *horizontalLayout_7;
    QLabel *ll_air_icon;
    QVBoxLayout *verticalLayout_10;
    QLabel *ll_air_value;
    QLabel *ll_air_quality;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_11;
    QWidget *widget_6;
    QWidget *horizontalLayoutWidget_7;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_14;
    QLabel *ll_week_day2;
    QLabel *ll_week2;
    QVBoxLayout *verticalLayout_16;
    QLabel *ll_week_day3;
    QLabel *ll_week3;
    QVBoxLayout *verticalLayout_17;
    QLabel *ll_week_day4;
    QLabel *ll_week4;
    QVBoxLayout *verticalLayout_13;
    QLabel *ll_week_day5;
    QLabel *ll_week5;
    QVBoxLayout *verticalLayout_12;
    QLabel *ll_week_day6;
    QLabel *ll_week6;
    QVBoxLayout *verticalLayout_15;
    QLabel *ll_week_day1;
    QLabel *ll_week1;
    QWidget *horizontalWidget_8;
    QHBoxLayout *hl_weather_2;
    QVBoxLayout *verticalLayout_26;
    QLabel *ll_type_icon1;
    QLabel *ll_type1;
    QVBoxLayout *verticalLayout_25;
    QLabel *ll_type_icon2;
    QLabel *ll_type2;
    QVBoxLayout *verticalLayout_24;
    QLabel *ll_type_icon3;
    QLabel *ll_type3;
    QVBoxLayout *verticalLayout_19;
    QLabel *ll_type_icon4;
    QLabel *ll_type4;
    QVBoxLayout *verticalLayout_23;
    QLabel *ll_type_icon5;
    QLabel *ll_type5;
    QVBoxLayout *verticalLayout_22;
    QLabel *ll_type_icon6;
    QLabel *ll_type6;
    QWidget *horizontalWidget_9;
    QHBoxLayout *hl_air_quality;
    QLabel *ll_air1;
    QLabel *ll_air2;
    QLabel *ll_air3;
    QLabel *ll_air4;
    QLabel *ll_air5;
    QLabel *ll_air6;
    QWidget *qw_curve;
    QVBoxLayout *vl_curve;
    QLabel *ll_high_curve;
    QLabel *ll_low_curve;
    QWidget *horizontalWidget_10;
    QHBoxLayout *hl_wind;
    QWidget *widget_15;
    QVBoxLayout *verticalLayout_36;
    QLabel *ll_wind_name1;
    QLabel *ll_wind1;
    QWidget *widget_14;
    QVBoxLayout *verticalLayout_35;
    QLabel *ll_wind_name2;
    QLabel *ll_wind2;
    QWidget *widget_13;
    QVBoxLayout *verticalLayout_34;
    QLabel *ll_wind_name3;
    QLabel *ll_wind3;
    QWidget *widget_12;
    QVBoxLayout *verticalLayout_33;
    QLabel *ll_wind_name4;
    QLabel *ll_wind4;
    QWidget *widget_11;
    QVBoxLayout *verticalLayout_32;
    QLabel *ll_wind_name5;
    QLabel *ll_wind5;
    QWidget *widget_10;
    QVBoxLayout *verticalLayout_31;
    QLabel *ll_wind_name6;
    QLabel *ll_wind6;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(840, 578);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        centralwidget->setAutoFillBackground(false);
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget#centralwidget{\n"
"	border-image: url(://res/cat.jpeg);\n"
"}\n"
"\n"
"\n"
"QLabel {\n"
"	font: 25 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	border-radius: 4px;\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        title = new QWidget(centralwidget);
        title->setObjectName("title");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(title->sizePolicy().hasHeightForWidth());
        title->setSizePolicy(sizePolicy1);
        title->setMinimumSize(QSize(0, 60));
        title->setMaximumSize(QSize(16777215, 60));
        title->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 170, 255,0);"));
        horizontalLayout = new QHBoxLayout(title);
        horizontalLayout->setSpacing(20);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(-1, 0, 12, 0);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);

        le_city = new CityLineEdit(title);
        le_city->setObjectName("le_city");
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(le_city->sizePolicy().hasHeightForWidth());
        le_city->setSizePolicy(sizePolicy2);
        le_city->setMinimumSize(QSize(250, 25));
        le_city->setMaximumSize(QSize(250, 25));
        QFont font;
        font.setFamilies({QString::fromUtf8("Microsoft YaHei UI")});
        font.setPointSize(14);
        font.setBold(false);
        font.setItalic(false);
        le_city->setFont(font);
        le_city->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft YaHei UI\";\n"
"background-color: rgb(255, 255, 255);\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 4px;\n"
"padding: 1px 5px"));

        verticalLayout_6->addWidget(le_city);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_3);


        horizontalLayout->addLayout(verticalLayout_6);

        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setObjectName("verticalLayout_18");
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_18->addItem(verticalSpacer_4);

        pb_search = new QPushButton(title);
        pb_search->setObjectName("pb_search");
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pb_search->sizePolicy().hasHeightForWidth());
        pb_search->setSizePolicy(sizePolicy3);
        pb_search->setMinimumSize(QSize(50, 25));
        pb_search->setMaximumSize(QSize(50, 25));
        pb_search->setAutoFillBackground(false);
        pb_search->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255);\n"
"border-radius: 4px;\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/res/search.png"), QSize(), QIcon::Normal, QIcon::On);
        pb_search->setIcon(icon);

        verticalLayout_18->addWidget(pb_search);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_18->addItem(verticalSpacer_5);


        horizontalLayout->addLayout(verticalLayout_18);

        horizontalSpacer = new QSpacerItem(40, 25, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        ll_date = new QLabel(title);
        ll_date->setObjectName("ll_date");
        sizePolicy.setHeightForWidth(ll_date->sizePolicy().hasHeightForWidth());
        ll_date->setSizePolicy(sizePolicy);
        ll_date->setMinimumSize(QSize(25, 25));
        ll_date->setMaximumSize(QSize(16777215, 25));
        ll_date->setBaseSize(QSize(0, 0));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(20);
        font1.setBold(false);
        font1.setItalic(false);
        ll_date->setFont(font1);
        ll_date->setStyleSheet(QString::fromUtf8("font: 20pt \"Arial\";\n"
"background-color: rgba(255, 255, 255,0);"));

        horizontalLayout->addWidget(ll_date);


        verticalLayout->addWidget(title, 0, Qt::AlignVCenter);

        content = new QWidget(centralwidget);
        content->setObjectName("content");
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(content->sizePolicy().hasHeightForWidth());
        content->setSizePolicy(sizePolicy4);
        horizontalLayout_2 = new QHBoxLayout(content);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        widget = new QWidget(content);
        widget->setObjectName("widget");
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        widget_3 = new QWidget(widget);
        widget_3->setObjectName("widget_3");
        widget_3->setMinimumSize(QSize(0, 120));
        widget_3->setMaximumSize(QSize(340, 120));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        ll_state_pic = new QLabel(widget_3);
        ll_state_pic->setObjectName("ll_state_pic");
        ll_state_pic->setMinimumSize(QSize(110, 110));
        ll_state_pic->setMaximumSize(QSize(110, 110));
        ll_state_pic->setAutoFillBackground(false);
        ll_state_pic->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        ll_state_pic->setPixmap(QPixmap(QString::fromUtf8(":/res/type/DuoYun.png")));
        ll_state_pic->setScaledContents(true);

        horizontalLayout_3->addWidget(ll_state_pic);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        ll_tempture = new QLabel(widget_3);
        ll_tempture->setObjectName("ll_tempture");
        ll_tempture->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 50pt \"Arial\";\n"
"background-color: rgba(0, 255, 255, 0);"));

        horizontalLayout_4->addWidget(ll_tempture);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        vl_city = new QVBoxLayout();
        vl_city->setObjectName("vl_city");
        ll_city = new QLabel(widget_3);
        ll_city->setObjectName("ll_city");
        sizePolicy.setHeightForWidth(ll_city->sizePolicy().hasHeightForWidth());
        ll_city->setSizePolicy(sizePolicy);
        ll_city->setMaximumSize(QSize(16777215, 16777215));
        ll_city->setStyleSheet(QString::fromUtf8("font: 12pt \"Microsoft YaHei UI\";\n"
"color: rgb(255, 255, 255);\n"
""));

        vl_city->addWidget(ll_city);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");

        vl_city->addLayout(verticalLayout_5);


        horizontalLayout_4->addLayout(vl_city);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        ll_type = new QLabel(widget_3);
        ll_type->setObjectName("ll_type");
        ll_type->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_6->addWidget(ll_type);

        ll_tempture_range = new QLabel(widget_3);
        ll_tempture_range->setObjectName("ll_tempture_range");
        ll_tempture_range->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_6->addWidget(ll_tempture_range);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout_6);


        horizontalLayout_3->addLayout(verticalLayout_3);


        verticalLayout_2->addWidget(widget_3);

        widget_4 = new QWidget(widget);
        widget_4->setObjectName("widget_4");
        widget_4->setMaximumSize(QSize(16777215, 16777213));
        widget_4->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_4 = new QVBoxLayout(widget_4);
        verticalLayout_4->setSpacing(14);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(11, -1, -1, -1);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        ll_ganmao = new QLabel(widget_4);
        ll_ganmao->setObjectName("ll_ganmao");
        ll_ganmao->setStyleSheet(QString::fromUtf8("background-color: rgba(60, 60, 60, 0);\n"
"padding-left: 5px;\n"
"padding-right: 5px;"));
        ll_ganmao->setWordWrap(true);

        verticalLayout_4->addWidget(ll_ganmao);

        widget_5 = new QWidget(widget_4);
        widget_5->setObjectName("widget_5");
        sizePolicy.setHeightForWidth(widget_5->sizePolicy().hasHeightForWidth());
        widget_5->setSizePolicy(sizePolicy);
        widget_5->setStyleSheet(QString::fromUtf8("background-color: rgb(157, 133, 255);\n"
"border-radius: 15px"));
        gridLayout = new QGridLayout(widget_5);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setHorizontalSpacing(80);
        gridLayout->setVerticalSpacing(20);
        gridLayout->setContentsMargins(40, 30, 40, 30);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        ll_wet_icon = new QLabel(widget_5);
        ll_wet_icon->setObjectName("ll_wet_icon");
        ll_wet_icon->setMinimumSize(QSize(40, 40));
        ll_wet_icon->setMaximumSize(QSize(40, 40));
        ll_wet_icon->setPixmap(QPixmap(QString::fromUtf8(":/res/humidity.png")));
        ll_wet_icon->setScaledContents(true);

        horizontalLayout_8->addWidget(ll_wet_icon);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName("verticalLayout_9");
        ll_wet = new QLabel(widget_5);
        ll_wet->setObjectName("ll_wet");
        ll_wet->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(ll_wet);

        ll_wet_value = new QLabel(widget_5);
        ll_wet_value->setObjectName("ll_wet_value");
        ll_wet_value->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(ll_wet_value);


        horizontalLayout_8->addLayout(verticalLayout_9);


        gridLayout->addLayout(horizontalLayout_8, 1, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(0);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        ll_pm25_icon = new QLabel(widget_5);
        ll_pm25_icon->setObjectName("ll_pm25_icon");
        ll_pm25_icon->setMinimumSize(QSize(40, 40));
        ll_pm25_icon->setMaximumSize(QSize(40, 40));
        ll_pm25_icon->setPixmap(QPixmap(QString::fromUtf8(":/res/pm25.png")));
        ll_pm25_icon->setScaledContents(true);

        horizontalLayout_10->addWidget(ll_pm25_icon);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        ll_pm25 = new QLabel(widget_5);
        ll_pm25->setObjectName("ll_pm25");
        ll_pm25->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(ll_pm25);

        ll_pm25_value = new QLabel(widget_5);
        ll_pm25_value->setObjectName("ll_pm25_value");
        ll_pm25_value->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(ll_pm25_value);


        horizontalLayout_10->addLayout(verticalLayout_8);


        gridLayout->addLayout(horizontalLayout_10, 0, 2, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(0);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        ll_wind_icon = new QLabel(widget_5);
        ll_wind_icon->setObjectName("ll_wind_icon");
        ll_wind_icon->setMinimumSize(QSize(40, 40));
        ll_wind_icon->setMaximumSize(QSize(40, 40));
        ll_wind_icon->setPixmap(QPixmap(QString::fromUtf8(":/res/wind.png")));
        ll_wind_icon->setScaledContents(true);

        horizontalLayout_11->addWidget(ll_wind_icon);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        ll_wind = new QLabel(widget_5);
        ll_wind->setObjectName("ll_wind");
        ll_wind->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(ll_wind);

        ll_wind_value = new QLabel(widget_5);
        ll_wind_value->setObjectName("ll_wind_value");
        ll_wind_value->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(ll_wind_value);


        horizontalLayout_11->addLayout(verticalLayout_7);


        gridLayout->addLayout(horizontalLayout_11, 0, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        ll_air_icon = new QLabel(widget_5);
        ll_air_icon->setObjectName("ll_air_icon");
        ll_air_icon->setMinimumSize(QSize(40, 40));
        ll_air_icon->setMaximumSize(QSize(40, 40));
        ll_air_icon->setPixmap(QPixmap(QString::fromUtf8(":/res/aqi.png")));
        ll_air_icon->setScaledContents(true);

        horizontalLayout_7->addWidget(ll_air_icon);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName("verticalLayout_10");
        ll_air_value = new QLabel(widget_5);
        ll_air_value->setObjectName("ll_air_value");
        ll_air_value->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(ll_air_value);

        ll_air_quality = new QLabel(widget_5);
        ll_air_quality->setObjectName("ll_air_quality");
        ll_air_quality->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(ll_air_quality);


        horizontalLayout_7->addLayout(verticalLayout_10);


        gridLayout->addLayout(horizontalLayout_7, 1, 2, 1, 1);


        verticalLayout_4->addWidget(widget_5);


        verticalLayout_2->addWidget(widget_4);


        horizontalLayout_2->addWidget(widget);

        widget_2 = new QWidget(content);
        widget_2->setObjectName("widget_2");
        verticalLayout_11 = new QVBoxLayout(widget_2);
        verticalLayout_11->setSpacing(8);
        verticalLayout_11->setObjectName("verticalLayout_11");
        verticalLayout_11->setContentsMargins(0, 0, 0, -1);
        widget_6 = new QWidget(widget_2);
        widget_6->setObjectName("widget_6");
        widget_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	background-color: rgba(0, 200, 200, 200);\n"
"	border-radius: 4px;\n"
"	alignment:AlginHCenter;\n"
"}\n"
"QVBoxLayout{\n"
"	layoutSpacing:0;\n"
"}"));
        horizontalLayoutWidget_7 = new QWidget(widget_6);
        horizontalLayoutWidget_7->setObjectName("horizontalLayoutWidget_7");
        horizontalLayoutWidget_7->setGeometry(QRect(0, 0, 411, 70));
        gridLayout_2 = new QGridLayout(horizontalLayoutWidget_7);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setHorizontalSpacing(6);
        gridLayout_2->setVerticalSpacing(0);
        gridLayout_2->setContentsMargins(0, 12, 0, 12);
        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setSpacing(0);
        verticalLayout_14->setObjectName("verticalLayout_14");
        ll_week_day2 = new QLabel(horizontalLayoutWidget_7);
        ll_week_day2->setObjectName("ll_week_day2");
        ll_week_day2->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        ll_week_day2->setAlignment(Qt::AlignCenter);

        verticalLayout_14->addWidget(ll_week_day2);

        ll_week2 = new QLabel(horizontalLayoutWidget_7);
        ll_week2->setObjectName("ll_week2");
        ll_week2->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        ll_week2->setAlignment(Qt::AlignCenter);

        verticalLayout_14->addWidget(ll_week2);


        gridLayout_2->addLayout(verticalLayout_14, 0, 1, 1, 1);

        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setSpacing(0);
        verticalLayout_16->setObjectName("verticalLayout_16");
        ll_week_day3 = new QLabel(horizontalLayoutWidget_7);
        ll_week_day3->setObjectName("ll_week_day3");
        ll_week_day3->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        ll_week_day3->setAlignment(Qt::AlignCenter);

        verticalLayout_16->addWidget(ll_week_day3);

        ll_week3 = new QLabel(horizontalLayoutWidget_7);
        ll_week3->setObjectName("ll_week3");
        ll_week3->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        ll_week3->setAlignment(Qt::AlignCenter);

        verticalLayout_16->addWidget(ll_week3);


        gridLayout_2->addLayout(verticalLayout_16, 0, 2, 1, 1);

        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setSpacing(0);
        verticalLayout_17->setObjectName("verticalLayout_17");
        ll_week_day4 = new QLabel(horizontalLayoutWidget_7);
        ll_week_day4->setObjectName("ll_week_day4");
        ll_week_day4->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        ll_week_day4->setAlignment(Qt::AlignCenter);

        verticalLayout_17->addWidget(ll_week_day4);

        ll_week4 = new QLabel(horizontalLayoutWidget_7);
        ll_week4->setObjectName("ll_week4");
        ll_week4->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        ll_week4->setAlignment(Qt::AlignCenter);

        verticalLayout_17->addWidget(ll_week4);


        gridLayout_2->addLayout(verticalLayout_17, 0, 3, 1, 1);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(0);
        verticalLayout_13->setObjectName("verticalLayout_13");
        ll_week_day5 = new QLabel(horizontalLayoutWidget_7);
        ll_week_day5->setObjectName("ll_week_day5");
        ll_week_day5->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        ll_week_day5->setAlignment(Qt::AlignCenter);

        verticalLayout_13->addWidget(ll_week_day5);

        ll_week5 = new QLabel(horizontalLayoutWidget_7);
        ll_week5->setObjectName("ll_week5");
        ll_week5->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        ll_week5->setAlignment(Qt::AlignCenter);

        verticalLayout_13->addWidget(ll_week5);


        gridLayout_2->addLayout(verticalLayout_13, 0, 4, 1, 1);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(0);
        verticalLayout_12->setObjectName("verticalLayout_12");
        ll_week_day6 = new QLabel(horizontalLayoutWidget_7);
        ll_week_day6->setObjectName("ll_week_day6");
        ll_week_day6->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        ll_week_day6->setAlignment(Qt::AlignCenter);

        verticalLayout_12->addWidget(ll_week_day6);

        ll_week6 = new QLabel(horizontalLayoutWidget_7);
        ll_week6->setObjectName("ll_week6");
        ll_week6->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        ll_week6->setAlignment(Qt::AlignCenter);

        verticalLayout_12->addWidget(ll_week6);


        gridLayout_2->addLayout(verticalLayout_12, 0, 5, 1, 1);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setSpacing(0);
        verticalLayout_15->setObjectName("verticalLayout_15");
        ll_week_day1 = new QLabel(horizontalLayoutWidget_7);
        ll_week_day1->setObjectName("ll_week_day1");
        ll_week_day1->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        ll_week_day1->setAlignment(Qt::AlignCenter);

        verticalLayout_15->addWidget(ll_week_day1);

        ll_week1 = new QLabel(horizontalLayoutWidget_7);
        ll_week1->setObjectName("ll_week1");
        ll_week1->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        ll_week1->setAlignment(Qt::AlignCenter);

        verticalLayout_15->addWidget(ll_week1);


        gridLayout_2->addLayout(verticalLayout_15, 0, 0, 1, 1);

        gridLayout_2->setColumnStretch(0, 1);
        gridLayout_2->setColumnStretch(1, 1);
        gridLayout_2->setColumnStretch(2, 1);
        gridLayout_2->setColumnStretch(3, 1);
        gridLayout_2->setColumnStretch(4, 1);
        gridLayout_2->setColumnStretch(5, 1);

        verticalLayout_11->addWidget(widget_6);

        horizontalWidget_8 = new QWidget(widget_2);
        horizontalWidget_8->setObjectName("horizontalWidget_8");
        horizontalWidget_8->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	background-color: rgba(60, 60, 60, 100);\n"
"	border-radius: 4px;\n"
"}"));
        hl_weather_2 = new QHBoxLayout(horizontalWidget_8);
        hl_weather_2->setSpacing(8);
        hl_weather_2->setObjectName("hl_weather_2");
        hl_weather_2->setContentsMargins(0, 6, 0, 6);
        verticalLayout_26 = new QVBoxLayout();
        verticalLayout_26->setSpacing(0);
        verticalLayout_26->setObjectName("verticalLayout_26");
        verticalLayout_26->setContentsMargins(2, 2, 2, 2);
        ll_type_icon1 = new QLabel(horizontalWidget_8);
        ll_type_icon1->setObjectName("ll_type_icon1");
        ll_type_icon1->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        ll_type_icon1->setPixmap(QPixmap(QString::fromUtf8(":/res/type/Qing.png")));
        ll_type_icon1->setScaledContents(false);
        ll_type_icon1->setAlignment(Qt::AlignCenter);

        verticalLayout_26->addWidget(ll_type_icon1);

        ll_type1 = new QLabel(horizontalWidget_8);
        ll_type1->setObjectName("ll_type1");
        ll_type1->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        ll_type1->setAlignment(Qt::AlignCenter);

        verticalLayout_26->addWidget(ll_type1);


        hl_weather_2->addLayout(verticalLayout_26);

        verticalLayout_25 = new QVBoxLayout();
        verticalLayout_25->setSpacing(0);
        verticalLayout_25->setObjectName("verticalLayout_25");
        verticalLayout_25->setContentsMargins(2, 2, 2, 2);
        ll_type_icon2 = new QLabel(horizontalWidget_8);
        ll_type_icon2->setObjectName("ll_type_icon2");
        ll_type_icon2->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        ll_type_icon2->setPixmap(QPixmap(QString::fromUtf8(":/res/type/DaYu.png")));
        ll_type_icon2->setAlignment(Qt::AlignCenter);

        verticalLayout_25->addWidget(ll_type_icon2);

        ll_type2 = new QLabel(horizontalWidget_8);
        ll_type2->setObjectName("ll_type2");
        ll_type2->setAlignment(Qt::AlignCenter);

        verticalLayout_25->addWidget(ll_type2);


        hl_weather_2->addLayout(verticalLayout_25);

        verticalLayout_24 = new QVBoxLayout();
        verticalLayout_24->setSpacing(0);
        verticalLayout_24->setObjectName("verticalLayout_24");
        verticalLayout_24->setContentsMargins(2, 2, 2, 2);
        ll_type_icon3 = new QLabel(horizontalWidget_8);
        ll_type_icon3->setObjectName("ll_type_icon3");
        ll_type_icon3->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        ll_type_icon3->setPixmap(QPixmap(QString::fromUtf8(":/res/type/DuoYun.png")));
        ll_type_icon3->setScaledContents(false);
        ll_type_icon3->setAlignment(Qt::AlignCenter);

        verticalLayout_24->addWidget(ll_type_icon3);

        ll_type3 = new QLabel(horizontalWidget_8);
        ll_type3->setObjectName("ll_type3");
        ll_type3->setAlignment(Qt::AlignCenter);

        verticalLayout_24->addWidget(ll_type3);


        hl_weather_2->addLayout(verticalLayout_24);

        verticalLayout_19 = new QVBoxLayout();
        verticalLayout_19->setSpacing(0);
        verticalLayout_19->setObjectName("verticalLayout_19");
        verticalLayout_19->setContentsMargins(2, 2, 2, 2);
        ll_type_icon4 = new QLabel(horizontalWidget_8);
        ll_type_icon4->setObjectName("ll_type_icon4");
        ll_type_icon4->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        ll_type_icon4->setPixmap(QPixmap(QString::fromUtf8(":/res/type/ZhenXue.png")));
        ll_type_icon4->setAlignment(Qt::AlignCenter);

        verticalLayout_19->addWidget(ll_type_icon4);

        ll_type4 = new QLabel(horizontalWidget_8);
        ll_type4->setObjectName("ll_type4");
        ll_type4->setAlignment(Qt::AlignCenter);

        verticalLayout_19->addWidget(ll_type4);


        hl_weather_2->addLayout(verticalLayout_19);

        verticalLayout_23 = new QVBoxLayout();
        verticalLayout_23->setSpacing(0);
        verticalLayout_23->setObjectName("verticalLayout_23");
        verticalLayout_23->setContentsMargins(2, 2, 2, 2);
        ll_type_icon5 = new QLabel(horizontalWidget_8);
        ll_type_icon5->setObjectName("ll_type_icon5");
        ll_type_icon5->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        ll_type_icon5->setPixmap(QPixmap(QString::fromUtf8(":/res/type/BaoXue.png")));
        ll_type_icon5->setAlignment(Qt::AlignCenter);

        verticalLayout_23->addWidget(ll_type_icon5);

        ll_type5 = new QLabel(horizontalWidget_8);
        ll_type5->setObjectName("ll_type5");
        ll_type5->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        ll_type5->setAlignment(Qt::AlignCenter);

        verticalLayout_23->addWidget(ll_type5);


        hl_weather_2->addLayout(verticalLayout_23);

        verticalLayout_22 = new QVBoxLayout();
        verticalLayout_22->setSpacing(0);
        verticalLayout_22->setObjectName("verticalLayout_22");
        verticalLayout_22->setContentsMargins(2, 2, 2, 2);
        ll_type_icon6 = new QLabel(horizontalWidget_8);
        ll_type_icon6->setObjectName("ll_type_icon6");
        ll_type_icon6->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        ll_type_icon6->setPixmap(QPixmap(QString::fromUtf8(":/res/type/Yin.png")));
        ll_type_icon6->setAlignment(Qt::AlignCenter);

        verticalLayout_22->addWidget(ll_type_icon6);

        ll_type6 = new QLabel(horizontalWidget_8);
        ll_type6->setObjectName("ll_type6");
        ll_type6->setAlignment(Qt::AlignCenter);

        verticalLayout_22->addWidget(ll_type6);


        hl_weather_2->addLayout(verticalLayout_22);


        verticalLayout_11->addWidget(horizontalWidget_8);

        horizontalWidget_9 = new QWidget(widget_2);
        horizontalWidget_9->setObjectName("horizontalWidget_9");
        QFont font2;
        font2.setPointSize(18);
        horizontalWidget_9->setFont(font2);
        hl_air_quality = new QHBoxLayout(horizontalWidget_9);
        hl_air_quality->setSpacing(6);
        hl_air_quality->setObjectName("hl_air_quality");
        hl_air_quality->setContentsMargins(0, 4, 0, 4);
        ll_air1 = new QLabel(horizontalWidget_9);
        ll_air1->setObjectName("ll_air1");
        ll_air1->setStyleSheet(QString::fromUtf8("background-color: rgb(121, 184, 0);"));
        ll_air1->setAlignment(Qt::AlignCenter);

        hl_air_quality->addWidget(ll_air1);

        ll_air2 = new QLabel(horizontalWidget_9);
        ll_air2->setObjectName("ll_air2");
        ll_air2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 187, 23);"));
        ll_air2->setAlignment(Qt::AlignCenter);

        hl_air_quality->addWidget(ll_air2);

        ll_air3 = new QLabel(horizontalWidget_9);
        ll_air3->setObjectName("ll_air3");
        ll_air3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 87, 97);"));
        ll_air3->setAlignment(Qt::AlignCenter);

        hl_air_quality->addWidget(ll_air3);

        ll_air4 = new QLabel(horizontalWidget_9);
        ll_air4->setObjectName("ll_air4");
        ll_air4->setStyleSheet(QString::fromUtf8("background-color: rgb(235, 17, 27);"));
        ll_air4->setAlignment(Qt::AlignCenter);

        hl_air_quality->addWidget(ll_air4);

        ll_air5 = new QLabel(horizontalWidget_9);
        ll_air5->setObjectName("ll_air5");
        ll_air5->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 0);"));
        ll_air5->setAlignment(Qt::AlignCenter);

        hl_air_quality->addWidget(ll_air5);

        ll_air6 = new QLabel(horizontalWidget_9);
        ll_air6->setObjectName("ll_air6");
        ll_air6->setStyleSheet(QString::fromUtf8("background-color: rgb(110, 0, 0);"));
        ll_air6->setAlignment(Qt::AlignCenter);

        hl_air_quality->addWidget(ll_air6);


        verticalLayout_11->addWidget(horizontalWidget_9);

        qw_curve = new QWidget(widget_2);
        qw_curve->setObjectName("qw_curve");
        qw_curve->setStyleSheet(QString::fromUtf8("background-color: rgba(60, 60, 60, 100);"));
        vl_curve = new QVBoxLayout(qw_curve);
        vl_curve->setSpacing(0);
        vl_curve->setObjectName("vl_curve");
        vl_curve->setContentsMargins(0, 0, 0, 0);
        ll_high_curve = new QLabel(qw_curve);
        ll_high_curve->setObjectName("ll_high_curve");

        vl_curve->addWidget(ll_high_curve);

        ll_low_curve = new QLabel(qw_curve);
        ll_low_curve->setObjectName("ll_low_curve");
        ll_low_curve->setStyleSheet(QString::fromUtf8(""));

        vl_curve->addWidget(ll_low_curve);


        verticalLayout_11->addWidget(qw_curve);

        horizontalWidget_10 = new QWidget(widget_2);
        horizontalWidget_10->setObjectName("horizontalWidget_10");
        horizontalWidget_10->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: rgb(240, 240, 240);\n"
"	background-color: rgba(60, 60, 60, 100);\n"
"\n"
"}"));
        hl_wind = new QHBoxLayout(horizontalWidget_10);
        hl_wind->setSpacing(8);
        hl_wind->setObjectName("hl_wind");
        hl_wind->setContentsMargins(0, 0, 0, 0);
        widget_15 = new QWidget(horizontalWidget_10);
        widget_15->setObjectName("widget_15");
        widget_15->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_36 = new QVBoxLayout(widget_15);
        verticalLayout_36->setSpacing(0);
        verticalLayout_36->setObjectName("verticalLayout_36");
        verticalLayout_36->setContentsMargins(0, 8, 0, 8);
        ll_wind_name1 = new QLabel(widget_15);
        ll_wind_name1->setObjectName("ll_wind_name1");
        ll_wind_name1->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        ll_wind_name1->setAlignment(Qt::AlignCenter);

        verticalLayout_36->addWidget(ll_wind_name1);

        ll_wind1 = new QLabel(widget_15);
        ll_wind1->setObjectName("ll_wind1");
        sizePolicy.setHeightForWidth(ll_wind1->sizePolicy().hasHeightForWidth());
        ll_wind1->setSizePolicy(sizePolicy);
        ll_wind1->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        ll_wind1->setAlignment(Qt::AlignCenter);

        verticalLayout_36->addWidget(ll_wind1);


        hl_wind->addWidget(widget_15);

        widget_14 = new QWidget(horizontalWidget_10);
        widget_14->setObjectName("widget_14");
        widget_14->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_35 = new QVBoxLayout(widget_14);
        verticalLayout_35->setSpacing(0);
        verticalLayout_35->setObjectName("verticalLayout_35");
        verticalLayout_35->setContentsMargins(0, 8, 0, 8);
        ll_wind_name2 = new QLabel(widget_14);
        ll_wind_name2->setObjectName("ll_wind_name2");
        ll_wind_name2->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        ll_wind_name2->setAlignment(Qt::AlignCenter);

        verticalLayout_35->addWidget(ll_wind_name2);

        ll_wind2 = new QLabel(widget_14);
        ll_wind2->setObjectName("ll_wind2");
        sizePolicy.setHeightForWidth(ll_wind2->sizePolicy().hasHeightForWidth());
        ll_wind2->setSizePolicy(sizePolicy);
        ll_wind2->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        ll_wind2->setAlignment(Qt::AlignCenter);

        verticalLayout_35->addWidget(ll_wind2);


        hl_wind->addWidget(widget_14);

        widget_13 = new QWidget(horizontalWidget_10);
        widget_13->setObjectName("widget_13");
        widget_13->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_34 = new QVBoxLayout(widget_13);
        verticalLayout_34->setSpacing(0);
        verticalLayout_34->setObjectName("verticalLayout_34");
        verticalLayout_34->setContentsMargins(0, 8, 0, 8);
        ll_wind_name3 = new QLabel(widget_13);
        ll_wind_name3->setObjectName("ll_wind_name3");
        ll_wind_name3->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        ll_wind_name3->setAlignment(Qt::AlignCenter);

        verticalLayout_34->addWidget(ll_wind_name3);

        ll_wind3 = new QLabel(widget_13);
        ll_wind3->setObjectName("ll_wind3");
        sizePolicy.setHeightForWidth(ll_wind3->sizePolicy().hasHeightForWidth());
        ll_wind3->setSizePolicy(sizePolicy);
        ll_wind3->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        ll_wind3->setAlignment(Qt::AlignCenter);

        verticalLayout_34->addWidget(ll_wind3);


        hl_wind->addWidget(widget_13);

        widget_12 = new QWidget(horizontalWidget_10);
        widget_12->setObjectName("widget_12");
        widget_12->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_33 = new QVBoxLayout(widget_12);
        verticalLayout_33->setSpacing(0);
        verticalLayout_33->setObjectName("verticalLayout_33");
        verticalLayout_33->setContentsMargins(0, 8, 0, 8);
        ll_wind_name4 = new QLabel(widget_12);
        ll_wind_name4->setObjectName("ll_wind_name4");
        ll_wind_name4->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        ll_wind_name4->setAlignment(Qt::AlignCenter);

        verticalLayout_33->addWidget(ll_wind_name4);

        ll_wind4 = new QLabel(widget_12);
        ll_wind4->setObjectName("ll_wind4");
        sizePolicy.setHeightForWidth(ll_wind4->sizePolicy().hasHeightForWidth());
        ll_wind4->setSizePolicy(sizePolicy);
        ll_wind4->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        ll_wind4->setAlignment(Qt::AlignCenter);

        verticalLayout_33->addWidget(ll_wind4);


        hl_wind->addWidget(widget_12);

        widget_11 = new QWidget(horizontalWidget_10);
        widget_11->setObjectName("widget_11");
        widget_11->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_32 = new QVBoxLayout(widget_11);
        verticalLayout_32->setSpacing(0);
        verticalLayout_32->setObjectName("verticalLayout_32");
        verticalLayout_32->setContentsMargins(0, 8, 0, 8);
        ll_wind_name5 = new QLabel(widget_11);
        ll_wind_name5->setObjectName("ll_wind_name5");
        ll_wind_name5->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        ll_wind_name5->setAlignment(Qt::AlignCenter);

        verticalLayout_32->addWidget(ll_wind_name5);

        ll_wind5 = new QLabel(widget_11);
        ll_wind5->setObjectName("ll_wind5");
        sizePolicy.setHeightForWidth(ll_wind5->sizePolicy().hasHeightForWidth());
        ll_wind5->setSizePolicy(sizePolicy);
        ll_wind5->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        ll_wind5->setAlignment(Qt::AlignCenter);

        verticalLayout_32->addWidget(ll_wind5);


        hl_wind->addWidget(widget_11);

        widget_10 = new QWidget(horizontalWidget_10);
        widget_10->setObjectName("widget_10");
        widget_10->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_31 = new QVBoxLayout(widget_10);
        verticalLayout_31->setSpacing(0);
        verticalLayout_31->setObjectName("verticalLayout_31");
        verticalLayout_31->setContentsMargins(0, 8, 0, 8);
        ll_wind_name6 = new QLabel(widget_10);
        ll_wind_name6->setObjectName("ll_wind_name6");
        ll_wind_name6->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        ll_wind_name6->setAlignment(Qt::AlignCenter);

        verticalLayout_31->addWidget(ll_wind_name6);

        ll_wind6 = new QLabel(widget_10);
        ll_wind6->setObjectName("ll_wind6");
        sizePolicy.setHeightForWidth(ll_wind6->sizePolicy().hasHeightForWidth());
        ll_wind6->setSizePolicy(sizePolicy);
        ll_wind6->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        ll_wind6->setAlignment(Qt::AlignCenter);

        verticalLayout_31->addWidget(ll_wind6);


        hl_wind->addWidget(widget_10);


        verticalLayout_11->addWidget(horizontalWidget_10);

        verticalLayout_11->setStretch(0, 2);
        verticalLayout_11->setStretch(1, 2);
        verticalLayout_11->setStretch(2, 2);
        verticalLayout_11->setStretch(3, 5);
        verticalLayout_11->setStretch(4, 1);

        horizontalLayout_2->addWidget(widget_2);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 1);

        verticalLayout->addWidget(content);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        le_city->setPlaceholderText(QCoreApplication::translate("MainWindow", "\345\237\216\345\270\202", nullptr));
        pb_search->setText(QString());
        ll_date->setText(QCoreApplication::translate("MainWindow", "2022/08/15 \346\230\237\346\234\237\345\233\233", nullptr));
        ll_state_pic->setText(QString());
        ll_tempture->setText(QCoreApplication::translate("MainWindow", "25\302\260", nullptr));
        ll_city->setText(QCoreApplication::translate("MainWindow", "\345\214\227\344\272\254", nullptr));
        ll_type->setText(QCoreApplication::translate("MainWindow", "\346\231\264\350\275\254\345\244\232\344\272\221", nullptr));
        ll_tempture_range->setText(QCoreApplication::translate("MainWindow", "19\302\260~31\302\260", nullptr));
        ll_ganmao->setText(QCoreApplication::translate("MainWindow", "\346\204\237\345\206\222\346\214\207\346\225\260\357\274\232\345\204\277\347\253\245\343\200\201\350\200\201\345\271\264\344\272\272\345\217\212\345\277\203\350\204\217\343\200\201\345\221\274\345\220\270\347\263\273\347\273\237\347\226\276\347\227\205\346\202\243\350\200\205\344\272\272\347\276\244\345\272\224\345\207\217\345\260\221\351\225\277\346\227\266\351\227\264\346\210\226\351\253\230\345\274\272\345\272\246\346\210\267\345\244\226\351\224\273\347\202\274", nullptr));
        ll_wet_icon->setText(QString());
        ll_wet->setText(QCoreApplication::translate("MainWindow", "\346\271\277\345\272\246", nullptr));
        ll_wet_value->setText(QCoreApplication::translate("MainWindow", "60%", nullptr));
        ll_pm25_icon->setText(QString());
        ll_pm25->setText(QCoreApplication::translate("MainWindow", "PM2.5", nullptr));
        ll_pm25_value->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
        ll_wind_icon->setText(QString());
        ll_wind->setText(QCoreApplication::translate("MainWindow", "\350\245\277\345\214\227\351\243\216", nullptr));
        ll_wind_value->setText(QCoreApplication::translate("MainWindow", "3\347\272\247", nullptr));
        ll_air_icon->setText(QString());
        ll_air_value->setText(QCoreApplication::translate("MainWindow", "\347\251\272\346\260\224\350\264\250\351\207\217", nullptr));
        ll_air_quality->setText(QCoreApplication::translate("MainWindow", "\344\274\230", nullptr));
        ll_week_day2->setText(QCoreApplication::translate("MainWindow", "\346\230\216\345\244\251", nullptr));
        ll_week2->setText(QCoreApplication::translate("MainWindow", "01/02", nullptr));
        ll_week_day3->setText(QCoreApplication::translate("MainWindow", "\346\230\216\345\244\251", nullptr));
        ll_week3->setText(QCoreApplication::translate("MainWindow", "01/03", nullptr));
        ll_week_day4->setText(QCoreApplication::translate("MainWindow", "\345\221\250\345\233\233", nullptr));
        ll_week4->setText(QCoreApplication::translate("MainWindow", "01/04", nullptr));
        ll_week_day5->setText(QCoreApplication::translate("MainWindow", "\345\221\250\344\272\224", nullptr));
        ll_week5->setText(QCoreApplication::translate("MainWindow", "01/05", nullptr));
        ll_week_day6->setText(QCoreApplication::translate("MainWindow", "\345\221\250\345\205\255", nullptr));
        ll_week6->setText(QCoreApplication::translate("MainWindow", "01/06", nullptr));
        ll_week_day1->setText(QCoreApplication::translate("MainWindow", "\344\273\212\345\244\251", nullptr));
        ll_week1->setText(QCoreApplication::translate("MainWindow", "01/01", nullptr));
        ll_type_icon1->setText(QString());
        ll_type1->setText(QCoreApplication::translate("MainWindow", "\346\231\264", nullptr));
        ll_type_icon2->setText(QString());
        ll_type2->setText(QCoreApplication::translate("MainWindow", "\345\244\247\351\233\250", nullptr));
        ll_type_icon3->setText(QString());
        ll_type3->setText(QCoreApplication::translate("MainWindow", "\345\244\232\344\272\221", nullptr));
        ll_type_icon4->setText(QString());
        ll_type4->setText(QCoreApplication::translate("MainWindow", "\351\230\265\351\233\250", nullptr));
        ll_type_icon5->setText(QString());
        ll_type5->setText(QCoreApplication::translate("MainWindow", "\346\232\264\351\233\252", nullptr));
        ll_type_icon6->setText(QString());
        ll_type6->setText(QCoreApplication::translate("MainWindow", "\351\230\264", nullptr));
        ll_air1->setText(QCoreApplication::translate("MainWindow", "\344\274\230", nullptr));
        ll_air2->setText(QCoreApplication::translate("MainWindow", "\350\211\257", nullptr));
        ll_air3->setText(QCoreApplication::translate("MainWindow", "\350\275\273\345\272\246", nullptr));
        ll_air4->setText(QCoreApplication::translate("MainWindow", "\344\270\255\345\272\246", nullptr));
        ll_air5->setText(QCoreApplication::translate("MainWindow", "\351\207\215\345\272\246", nullptr));
        ll_air6->setText(QCoreApplication::translate("MainWindow", "\344\270\245\351\207\215", nullptr));
        ll_high_curve->setText(QString());
        ll_low_curve->setText(QString());
        ll_wind_name1->setText(QCoreApplication::translate("MainWindow", "\344\270\234\345\215\227\351\243\216", nullptr));
        ll_wind1->setText(QCoreApplication::translate("MainWindow", "2\347\272\247", nullptr));
        ll_wind_name2->setText(QCoreApplication::translate("MainWindow", "\344\270\234\345\215\227\351\243\216", nullptr));
        ll_wind2->setText(QCoreApplication::translate("MainWindow", "2\347\272\247", nullptr));
        ll_wind_name3->setText(QCoreApplication::translate("MainWindow", "\344\270\234\345\215\227\351\243\216", nullptr));
        ll_wind3->setText(QCoreApplication::translate("MainWindow", "2\347\272\247", nullptr));
        ll_wind_name4->setText(QCoreApplication::translate("MainWindow", "\344\270\234\345\215\227\351\243\216", nullptr));
        ll_wind4->setText(QCoreApplication::translate("MainWindow", "2\347\272\247", nullptr));
        ll_wind_name5->setText(QCoreApplication::translate("MainWindow", "\344\270\234\345\215\227\351\243\216", nullptr));
        ll_wind5->setText(QCoreApplication::translate("MainWindow", "2\347\272\247", nullptr));
        ll_wind_name6->setText(QCoreApplication::translate("MainWindow", "\344\270\234\345\215\227\351\243\216", nullptr));
        ll_wind6->setText(QCoreApplication::translate("MainWindow", "2\347\272\247", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
