/********************************************************************************
** Form generated from reading UI file 'pageplanning.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEPLANNING_H
#define UI_PAGEPLANNING_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pageplanning
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableWidget *tab_planning;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *id_pp;
    QLineEdit *nom_pp;
    QLineEdit *date_pp;
    QLineEdit *place_pp;
    QLineEdit *nb_pp;
    QPushButton *sortAscButton;
    QPushButton *sortDescButton;
    QPushButton *pb_pdf;
    QPushButton *pb_word;
    QPushButton *Imprimer;
    QComboBox *duree_pp;
    QComboBox *type_pp;
    QLabel *lab_chart;
    QPushButton *stat;
    QPushButton *stat2;
    QLabel *lab;
    QLabel *label_32;
    QPushButton *pb_ajouterr;
    QPushButton *pb_modifierr;
    QPushButton *pb_supprimerr;
    QLineEdit *lineEdit;
    QPushButton *search;
    QLabel *label_12;
    QLabel *label_14;
    QPushButton *refrech_pb;
    QWidget *tab_2;
    QLabel *label_33;
    QGroupBox *groupBox_7;
    QLabel *label_53;
    QLabel *label_54;
    QLineEdit *rcpt;
    QLineEdit *subject;
    QLabel *label_56;
    QPlainTextEdit *msg;
    QPushButton *sendBtn2;
    QLabel *label_9;
    QWidget *tab_3;
    QGroupBox *verticalGroupBox;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QLabel *currentPosition;
    QLabel *duration;
    QPushButton *playbutton;
    QCheckBox *loop;
    QPushButton *selectbutton;
    QPushButton *pauseButton;
    QSlider *volume;
    QSlider *timeline;
    QLabel *audioname;
    QLabel *label_34;
    QWidget *tab_4;
    QLabel *label_35;
    QPushButton *pushButton_Send_Message_Type;
    QLineEdit *lineEdit_Message_For_Client;
    QTextEdit *textEdit_Client_Messages;
    QComboBox *comboBox_Client_list;
    QComboBox *comboBox_Send_Message_Type;
    QPushButton *back5pb;
    QPushButton *pushButton_13;
    QLabel *label_15;
    QPushButton *logoutpb5;
    QPushButton *client5pb;
    QPushButton *employe5pb;
    QPushButton *planning5pb;
    QPushButton *abonnement5pb;
    QPushButton *activite5pb;

    void setupUi(QDialog *pageplanning)
    {
        if (pageplanning->objectName().isEmpty())
            pageplanning->setObjectName("pageplanning");
        pageplanning->resize(1612, 814);
        tabWidget = new QTabWidget(pageplanning);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(240, 10, 1381, 821));
        tabWidget->setStyleSheet(QString::fromUtf8("\n"
"/* Style for QGroupBox */\n"
"\n"
"\n"
"/* Style for QLineEdit (input box) */\n"
"QLineEdit {\n"
"    background-color: #3498db; /* Blue color for input boxes */\n"
"    border: 1px solid #2980b9; /* Border color for input boxes */\n"
"    border-radius: 5px; /* Border radius for input boxes */\n"
"    padding: 5px; /* Padding for input boxes */\n"
"    color: black; /* Text color inside input boxes */\n"
"}\n"
"\n"
"/* Style for QLabel (text label) */\n"
"QLabel {\n"
"    color: black; /* Text color for labels */\n"
"    font-size: 16px; /* Adjust font size as needed */\n"
"    font-weight: bold; /* Make the text bold if desired */\n"
"    margin: 5px; /* Adjust margin as needed */\n"
"}\n"
"\n"
"/* Style for QPushButton */\n"
"QPushButton {\n"
"    background-color: #3498db; /* Blue color for buttons */\n"
"    border: 1px solid #2980b9; /* Border color for buttons */\n"
"    border-radius: 5px; /* Border radius for buttons */\n"
"    padding: 5px 10px; /* Adjust padding as needed */\n"
"    color: whit"
                        "e; /* Text color on buttons */\n"
"}\n"
"\n"
"/* Additional styling for better appearance */\n"
"QPushButton:hover {\n"
"    background-color: #2980b9; /* Darker blue on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #21618c; /* Even darker blue when pressed */\n"
"}\n"
"\n"
"/* Add more styles as needed for your specific application */\n"
"QTabWidget{\n"
"color: white;\n"
"font: 10pt \"Bebas Neue\";}"));
        tab = new QWidget();
        tab->setObjectName("tab");
        tab_planning = new QTableWidget(tab);
        tab_planning->setObjectName("tab_planning");
        tab_planning->setGeometry(QRect(490, 110, 441, 521));
        label = new QLabel(tab);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 70, 61, 41));
        label->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\";"));
        label_2 = new QLabel(tab);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(260, 70, 91, 41));
        label_2->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\";"));
        label_3 = new QLabel(tab);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 170, 91, 41));
        label_3->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\";"));
        label_4 = new QLabel(tab);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(260, 170, 101, 41));
        label_4->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\";"));
        label_5 = new QLabel(tab);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(40, 290, 101, 41));
        label_5->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\";"));
        label_6 = new QLabel(tab);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(180, 400, 141, 41));
        label_6->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\";"));
        label_7 = new QLabel(tab);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(260, 290, 61, 41));
        label_7->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\";"));
        id_pp = new QLineEdit(tab);
        id_pp->setObjectName("id_pp");
        id_pp->setGeometry(QRect(50, 120, 181, 31));
        nom_pp = new QLineEdit(tab);
        nom_pp->setObjectName("nom_pp");
        nom_pp->setGeometry(QRect(270, 120, 191, 31));
        date_pp = new QLineEdit(tab);
        date_pp->setObjectName("date_pp");
        date_pp->setGeometry(QRect(50, 350, 191, 31));
        place_pp = new QLineEdit(tab);
        place_pp->setObjectName("place_pp");
        place_pp->setGeometry(QRect(160, 460, 191, 31));
        nb_pp = new QLineEdit(tab);
        nb_pp->setObjectName("nb_pp");
        nb_pp->setGeometry(QRect(270, 350, 191, 31));
        sortAscButton = new QPushButton(tab);
        sortAscButton->setObjectName("sortAscButton");
        sortAscButton->setGeometry(QRect(490, 80, 151, 41));
        sortAscButton->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 18pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        sortDescButton = new QPushButton(tab);
        sortDescButton->setObjectName("sortDescButton");
        sortDescButton->setGeometry(QRect(640, 80, 141, 41));
        sortDescButton->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 18pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        pb_pdf = new QPushButton(tab);
        pb_pdf->setObjectName("pb_pdf");
        pb_pdf->setGeometry(QRect(960, 197, 111, 41));
        pb_pdf->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 18pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        pb_word = new QPushButton(tab);
        pb_word->setObjectName("pb_word");
        pb_word->setGeometry(QRect(1090, 197, 101, 41));
        pb_word->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 18pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        Imprimer = new QPushButton(tab);
        Imprimer->setObjectName("Imprimer");
        Imprimer->setGeometry(QRect(1200, 197, 111, 41));
        Imprimer->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 18pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        duree_pp = new QComboBox(tab);
        duree_pp->addItem(QString());
        duree_pp->addItem(QString());
        duree_pp->addItem(QString());
        duree_pp->addItem(QString());
        duree_pp->setObjectName("duree_pp");
        duree_pp->setGeometry(QRect(270, 230, 191, 31));
        type_pp = new QComboBox(tab);
        type_pp->addItem(QString());
        type_pp->addItem(QString());
        type_pp->setObjectName("type_pp");
        type_pp->setGeometry(QRect(50, 230, 181, 31));
        lab_chart = new QLabel(tab);
        lab_chart->setObjectName("lab_chart");
        lab_chart->setGeometry(QRect(250, 90, 671, 311));
        stat = new QPushButton(tab);
        stat->setObjectName("stat");
        stat->setGeometry(QRect(1050, 420, 181, 41));
        stat->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 18pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        stat2 = new QPushButton(tab);
        stat2->setObjectName("stat2");
        stat2->setGeometry(QRect(1050, 480, 181, 41));
        stat2->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 18pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        lab = new QLabel(tab);
        lab->setObjectName("lab");
        lab->setGeometry(QRect(360, 130, 801, 411));
        label_32 = new QLabel(tab);
        label_32->setObjectName("label_32");
        label_32->setGeometry(QRect(-10, -10, 1731, 911));
        label_32->setStyleSheet(QString::fromUtf8("border-image: url(:/img/img/try1.png);"));
        pb_ajouterr = new QPushButton(tab);
        pb_ajouterr->setObjectName("pb_ajouterr");
        pb_ajouterr->setGeometry(QRect(350, 550, 101, 41));
        pb_ajouterr->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 20pt \"Bebas Neue\";"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_ajouterr->setIcon(icon);
        pb_ajouterr->setIconSize(QSize(20, 20));
        pb_modifierr = new QPushButton(tab);
        pb_modifierr->setObjectName("pb_modifierr");
        pb_modifierr->setGeometry(QRect(200, 550, 121, 41));
        pb_modifierr->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 20pt \"Bebas Neue\";"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/img/pen.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_modifierr->setIcon(icon1);
        pb_modifierr->setIconSize(QSize(20, 20));
        pb_supprimerr = new QPushButton(tab);
        pb_supprimerr->setObjectName("pb_supprimerr");
        pb_supprimerr->setGeometry(QRect(40, 550, 121, 41));
        pb_supprimerr->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 20pt \"Bebas Neue\";"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/img/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_supprimerr->setIcon(icon2);
        pb_supprimerr->setIconSize(QSize(20, 20));
        lineEdit = new QLineEdit(tab);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(780, 80, 151, 41));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: #f0f0f0;\n"
"border: 5px solid #ccc;\n"
"padding: 5px;\n"
"border: 1px solid #0078d7;\n"
"font: 12pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        lineEdit->setAlignment(Qt::AlignCenter);
        search = new QPushButton(tab);
        search->setObjectName("search");
        search->setGeometry(QRect(890, 80, 41, 41));
        search->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\"; text-decoration: underline;"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/img/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        search->setIcon(icon3);
        search->setIconSize(QSize(16, 16));
        label_12 = new QLabel(tab);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(1020, 110, 271, 51));
        label_12->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 30pt \"Bebas Neue\";"));
        label_14 = new QLabel(tab);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(1100, 340, 71, 61));
        label_14->setStyleSheet(QString::fromUtf8("image: url(:/img/img/stats.png);"));
        refrech_pb = new QPushButton(tab);
        refrech_pb->setObjectName("refrech_pb");
        refrech_pb->setGeometry(QRect(780, 80, 41, 41));
        refrech_pb->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\"; text-decoration: underline;"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/img/load.png"), QSize(), QIcon::Normal, QIcon::Off);
        refrech_pb->setIcon(icon4);
        refrech_pb->setIconSize(QSize(20, 20));
        tabWidget->addTab(tab, QString());
        label_32->raise();
        lab->raise();
        lab_chart->raise();
        tab_planning->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        id_pp->raise();
        nom_pp->raise();
        date_pp->raise();
        place_pp->raise();
        nb_pp->raise();
        sortAscButton->raise();
        sortDescButton->raise();
        pb_pdf->raise();
        pb_word->raise();
        Imprimer->raise();
        duree_pp->raise();
        type_pp->raise();
        stat->raise();
        stat2->raise();
        pb_ajouterr->raise();
        pb_modifierr->raise();
        pb_supprimerr->raise();
        lineEdit->raise();
        search->raise();
        label_12->raise();
        label_14->raise();
        refrech_pb->raise();
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        label_33 = new QLabel(tab_2);
        label_33->setObjectName("label_33");
        label_33->setGeometry(QRect(-10, -20, 1321, 911));
        label_33->setStyleSheet(QString::fromUtf8("border-image: url(:/img/img/try1.png);"));
        groupBox_7 = new QGroupBox(tab_2);
        groupBox_7->setObjectName("groupBox_7");
        groupBox_7->setGeometry(QRect(10, 0, 1311, 901));
        groupBox_7->setStyleSheet(QString::fromUtf8("\n"
"/* Style for QGroupBox */\n"
"QRadioButton{ color: white; /* Text color for labels */\n"
"    font-size: 16px; /* Adjust font size as needed */\n"
"    font-weight: bold; /* Make the text bold if desired */\n"
"    margin: 5px; /* Adjust margin as needed */\n"
"}\n"
"\n"
"/* Style for QLineEdit (input box) */\n"
"QLineEdit {\n"
"    background-color: #3498db; /* Blue color for input boxes */\n"
"    border: 1px solid #2980b9; /* Border color for input boxes */\n"
"    border-radius: 5px; /* Border radius for input boxes */\n"
"    padding: 5px; /* Padding for input boxes */\n"
"    color: black; /* Text color inside input boxes */\n"
"}\n"
"\n"
"/* Style for QLabel (text label) */\n"
"QLabel {\n"
"    color: white; /* Text color for labels */\n"
"    font-size: 16px; /* Adjust font size as needed */\n"
"    font-weight: bold; /* Make the text bold if desired */\n"
"    margin: 5px; /* Adjust margin as needed */\n"
"}\n"
"\n"
"/* Style for QPushButton */\n"
"QPushButton {\n"
"    background-color: #3498db;"
                        " /* Blue color for buttons */\n"
"    border: 1px solid #2980b9; /* Border color for buttons */\n"
"    border-radius: 5px; /* Border radius for buttons */\n"
"    padding: 5px 10px; /* Adjust padding as needed */\n"
"    color: white; /* Text color on buttons */\n"
"}\n"
"\n"
"/* Additional styling for better appearance */\n"
"QPushButton:hover {\n"
"    background-color: #2980b9; /* Darker blue on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #21618c; /* Even darker blue when pressed */\n"
"}\n"
"\n"
"/* Add more styles as needed for your specific application */\n"
""));
        label_53 = new QLabel(groupBox_7);
        label_53->setObjectName("label_53");
        label_53->setGeometry(QRect(230, 180, 191, 41));
        label_53->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\";"));
        label_54 = new QLabel(groupBox_7);
        label_54->setObjectName("label_54");
        label_54->setGeometry(QRect(230, 250, 171, 51));
        label_54->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\";"));
        rcpt = new QLineEdit(groupBox_7);
        rcpt->setObjectName("rcpt");
        rcpt->setGeometry(QRect(470, 190, 501, 30));
        rcpt->setStyleSheet(QString::fromUtf8(""));
        subject = new QLineEdit(groupBox_7);
        subject->setObjectName("subject");
        subject->setGeometry(QRect(470, 260, 501, 30));
        subject->setStyleSheet(QString::fromUtf8(""));
        label_56 = new QLabel(groupBox_7);
        label_56->setObjectName("label_56");
        label_56->setGeometry(QRect(231, 376, 171, 41));
        label_56->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\";"));
        msg = new QPlainTextEdit(groupBox_7);
        msg->setObjectName("msg");
        msg->setGeometry(QRect(470, 350, 511, 150));
        sendBtn2 = new QPushButton(groupBox_7);
        sendBtn2->setObjectName("sendBtn2");
        sendBtn2->setGeometry(QRect(680, 560, 93, 28));
        label_9 = new QLabel(groupBox_7);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(480, 80, 281, 51));
        label_9->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\";"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        verticalGroupBox = new QGroupBox(tab_3);
        verticalGroupBox->setObjectName("verticalGroupBox");
        verticalGroupBox->setGeometry(QRect(290, 150, 550, 250));
        verticalGroupBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        gridLayout = new QGridLayout(verticalGroupBox);
        gridLayout->setObjectName("gridLayout");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 4, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 5, 4, 1, 1);

        currentPosition = new QLabel(verticalGroupBox);
        currentPosition->setObjectName("currentPosition");
        currentPosition->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(currentPosition, 5, 0, 1, 1);

        duration = new QLabel(verticalGroupBox);
        duration->setObjectName("duration");

        gridLayout->addWidget(duration, 5, 3, 1, 1);

        playbutton = new QPushButton(verticalGroupBox);
        playbutton->setObjectName("playbutton");

        gridLayout->addWidget(playbutton, 1, 2, 1, 2);

        loop = new QCheckBox(verticalGroupBox);
        loop->setObjectName("loop");

        gridLayout->addWidget(loop, 2, 1, 1, 1);

        selectbutton = new QPushButton(verticalGroupBox);
        selectbutton->setObjectName("selectbutton");

        gridLayout->addWidget(selectbutton, 0, 0, 1, 4);

        pauseButton = new QPushButton(verticalGroupBox);
        pauseButton->setObjectName("pauseButton");

        gridLayout->addWidget(pauseButton, 1, 0, 1, 2);

        volume = new QSlider(verticalGroupBox);
        volume->setObjectName("volume");
        volume->setValue(50);
        volume->setOrientation(Qt::Vertical);

        gridLayout->addWidget(volume, 1, 4, 1, 1);

        timeline = new QSlider(verticalGroupBox);
        timeline->setObjectName("timeline");
        timeline->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(timeline, 5, 1, 1, 2);

        audioname = new QLabel(verticalGroupBox);
        audioname->setObjectName("audioname");

        gridLayout->addWidget(audioname, 3, 1, 1, 1);

        label_34 = new QLabel(tab_3);
        label_34->setObjectName("label_34");
        label_34->setGeometry(QRect(0, 0, 1731, 911));
        label_34->setStyleSheet(QString::fromUtf8("border-image: url(:/img/img/try1.png);"));
        tabWidget->addTab(tab_3, QString());
        label_34->raise();
        verticalGroupBox->raise();
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        label_35 = new QLabel(tab_4);
        label_35->setObjectName("label_35");
        label_35->setGeometry(QRect(0, 0, 1731, 911));
        label_35->setStyleSheet(QString::fromUtf8("border-image: url(:/img/img/try1.png);"));
        pushButton_Send_Message_Type = new QPushButton(tab_4);
        pushButton_Send_Message_Type->setObjectName("pushButton_Send_Message_Type");
        pushButton_Send_Message_Type->setGeometry(QRect(1060, 680, 181, 41));
        pushButton_Send_Message_Type->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 18pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        lineEdit_Message_For_Client = new QLineEdit(tab_4);
        lineEdit_Message_For_Client->setObjectName("lineEdit_Message_For_Client");
        lineEdit_Message_For_Client->setGeometry(QRect(800, 680, 261, 41));
        lineEdit_Message_For_Client->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 18pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        textEdit_Client_Messages = new QTextEdit(tab_4);
        textEdit_Client_Messages->setObjectName("textEdit_Client_Messages");
        textEdit_Client_Messages->setGeometry(QRect(60, 10, 1171, 661));
        comboBox_Client_list = new QComboBox(tab_4);
        comboBox_Client_list->setObjectName("comboBox_Client_list");
        comboBox_Client_list->setGeometry(QRect(60, 680, 351, 41));
        comboBox_Send_Message_Type = new QComboBox(tab_4);
        comboBox_Send_Message_Type->addItem(QString());
        comboBox_Send_Message_Type->addItem(QString());
        comboBox_Send_Message_Type->setObjectName("comboBox_Send_Message_Type");
        comboBox_Send_Message_Type->setGeometry(QRect(450, 680, 341, 41));
        comboBox_Send_Message_Type->setStyleSheet(QString::fromUtf8(""));
        tabWidget->addTab(tab_4, QString());
        back5pb = new QPushButton(pageplanning);
        back5pb->setObjectName("back5pb");
        back5pb->setGeometry(QRect(-30, -30, 201, 181));
        back5pb->setStyleSheet(QString::fromUtf8("border-image: url(:/img/img/gearr.png);"));
        pushButton_13 = new QPushButton(pageplanning);
        pushButton_13->setObjectName("pushButton_13");
        pushButton_13->setGeometry(QRect(180, 870, 121, 71));
        pushButton_13->setStyleSheet(QString::fromUtf8("border-image: url(:/img/img/4400629.png);"));
        label_15 = new QLabel(pageplanning);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(-380, 0, 621, 891));
        label_15->setStyleSheet(QString::fromUtf8("border-image: url(:/img/img/Sidebar3.png);"));
        logoutpb5 = new QPushButton(pageplanning);
        logoutpb5->setObjectName("logoutpb5");
        logoutpb5->setGeometry(QRect(-20, 660, 201, 71));
        QFont font;
        font.setFamilies({QString::fromUtf8("Bebas Neue")});
        font.setPointSize(20);
        font.setUnderline(true);
        logoutpb5->setFont(font);
        logoutpb5->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;  text-decoration: underline;"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/img/img/logout.png"), QSize(), QIcon::Normal, QIcon::Off);
        logoutpb5->setIcon(icon5);
        logoutpb5->setIconSize(QSize(40, 40));
        client5pb = new QPushButton(pageplanning);
        client5pb->setObjectName("client5pb");
        client5pb->setGeometry(QRect(0, 170, 141, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Bebas Neue")});
        font1.setPointSize(20);
        client5pb->setFont(font1);
        client5pb->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/img/img/users-avatar.png"), QSize(), QIcon::Normal, QIcon::Off);
        client5pb->setIcon(icon6);
        client5pb->setIconSize(QSize(40, 40));
        employe5pb = new QPushButton(pageplanning);
        employe5pb->setObjectName("employe5pb");
        employe5pb->setGeometry(QRect(20, 240, 161, 51));
        employe5pb->setFont(font1);
        employe5pb->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/img/img/id-card.png"), QSize(), QIcon::Normal, QIcon::Off);
        employe5pb->setIcon(icon7);
        employe5pb->setIconSize(QSize(40, 40));
        planning5pb = new QPushButton(pageplanning);
        planning5pb->setObjectName("planning5pb");
        planning5pb->setGeometry(QRect(10, 320, 171, 51));
        planning5pb->setFont(font1);
        planning5pb->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/img/img/calendar.png"), QSize(), QIcon::Normal, QIcon::Off);
        planning5pb->setIcon(icon8);
        planning5pb->setIconSize(QSize(40, 40));
        abonnement5pb = new QPushButton(pageplanning);
        abonnement5pb->setObjectName("abonnement5pb");
        abonnement5pb->setGeometry(QRect(20, 470, 201, 51));
        abonnement5pb->setFont(font1);
        abonnement5pb->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/img/img/subscription.png"), QSize(), QIcon::Normal, QIcon::Off);
        abonnement5pb->setIcon(icon9);
        abonnement5pb->setIconSize(QSize(40, 40));
        activite5pb = new QPushButton(pageplanning);
        activite5pb->setObjectName("activite5pb");
        activite5pb->setGeometry(QRect(10, 390, 171, 51));
        activite5pb->setFont(font1);
        activite5pb->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/img/img/clipboard.png"), QSize(), QIcon::Normal, QIcon::Off);
        activite5pb->setIcon(icon10);
        activite5pb->setIconSize(QSize(40, 40));
        label_15->raise();
        tabWidget->raise();
        back5pb->raise();
        pushButton_13->raise();
        logoutpb5->raise();
        client5pb->raise();
        employe5pb->raise();
        planning5pb->raise();
        abonnement5pb->raise();
        activite5pb->raise();

        retranslateUi(pageplanning);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(pageplanning);
    } // setupUi

    void retranslateUi(QDialog *pageplanning)
    {
        pageplanning->setWindowTitle(QCoreApplication::translate("pageplanning", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("pageplanning", "ID", nullptr));
        label_2->setText(QCoreApplication::translate("pageplanning", "Name", nullptr));
        label_3->setText(QCoreApplication::translate("pageplanning", "Type", nullptr));
        label_4->setText(QCoreApplication::translate("pageplanning", "Duration", nullptr));
        label_5->setText(QCoreApplication::translate("pageplanning", "Date", nullptr));
        label_6->setText(QCoreApplication::translate("pageplanning", "Place", nullptr));
        label_7->setText(QCoreApplication::translate("pageplanning", "Nb", nullptr));
        sortAscButton->setText(QCoreApplication::translate("pageplanning", "ASCendant", nullptr));
        sortDescButton->setText(QCoreApplication::translate("pageplanning", "DESCendant", nullptr));
        pb_pdf->setText(QCoreApplication::translate("pageplanning", "pdf", nullptr));
        pb_word->setText(QCoreApplication::translate("pageplanning", "word", nullptr));
        Imprimer->setText(QCoreApplication::translate("pageplanning", "imprimer", nullptr));
        duree_pp->setItemText(0, QCoreApplication::translate("pageplanning", "30min", nullptr));
        duree_pp->setItemText(1, QCoreApplication::translate("pageplanning", "60min", nullptr));
        duree_pp->setItemText(2, QCoreApplication::translate("pageplanning", "90min", nullptr));
        duree_pp->setItemText(3, QCoreApplication::translate("pageplanning", "120min", nullptr));

        type_pp->setItemText(0, QCoreApplication::translate("pageplanning", "standard", nullptr));
        type_pp->setItemText(1, QCoreApplication::translate("pageplanning", "premium", nullptr));

        lab_chart->setText(QString());
        stat->setText(QCoreApplication::translate("pageplanning", "Stat duree", nullptr));
        stat2->setText(QCoreApplication::translate("pageplanning", "Stat type", nullptr));
        lab->setText(QString());
        label_32->setText(QString());
        pb_ajouterr->setText(QCoreApplication::translate("pageplanning", "ADD", nullptr));
        pb_modifierr->setText(QCoreApplication::translate("pageplanning", "UPDATE", nullptr));
        pb_supprimerr->setText(QCoreApplication::translate("pageplanning", "DELETE", nullptr));
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("pageplanning", "Search", nullptr));
        search->setText(QString());
        label_12->setText(QCoreApplication::translate("pageplanning", "YOU CAN ALSO :", nullptr));
        label_14->setText(QString());
        refrech_pb->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("pageplanning", "plannings", nullptr));
        label_33->setText(QString());
        groupBox_7->setTitle(QCoreApplication::translate("pageplanning", "SMTP", nullptr));
        label_53->setText(QCoreApplication::translate("pageplanning", "Email", nullptr));
        label_54->setText(QCoreApplication::translate("pageplanning", "Sujet:", nullptr));
        label_56->setText(QCoreApplication::translate("pageplanning", "Message:", nullptr));
        sendBtn2->setText(QCoreApplication::translate("pageplanning", "Envoyer", nullptr));
        label_9->setText(QCoreApplication::translate("pageplanning", "Notification pour l'asistant", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("pageplanning", "Notification", nullptr));
        currentPosition->setText(QCoreApplication::translate("pageplanning", "00:00", nullptr));
        duration->setText(QCoreApplication::translate("pageplanning", "00:00", nullptr));
        playbutton->setText(QCoreApplication::translate("pageplanning", "Play", nullptr));
        loop->setText(QCoreApplication::translate("pageplanning", "Loop", nullptr));
        selectbutton->setText(QCoreApplication::translate("pageplanning", "Select audio file", nullptr));
        pauseButton->setText(QCoreApplication::translate("pageplanning", "Pause", nullptr));
        audioname->setText(QString());
        label_34->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("pageplanning", "Audio", nullptr));
        label_35->setText(QString());
        pushButton_Send_Message_Type->setText(QCoreApplication::translate("pageplanning", "Send Message", nullptr));
        comboBox_Send_Message_Type->setItemText(0, QCoreApplication::translate("pageplanning", "All", nullptr));
        comboBox_Send_Message_Type->setItemText(1, QCoreApplication::translate("pageplanning", "Individual", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("pageplanning", "chatbox", nullptr));
        back5pb->setText(QString());
        pushButton_13->setText(QString());
        label_15->setText(QString());
        logoutpb5->setText(QCoreApplication::translate("pageplanning", "LOGOUT", nullptr));
        client5pb->setText(QCoreApplication::translate("pageplanning", "  USER", nullptr));
        employe5pb->setText(QCoreApplication::translate("pageplanning", "  EMPLOYEE", nullptr));
        planning5pb->setText(QCoreApplication::translate("pageplanning", "  PLANNING", nullptr));
        abonnement5pb->setText(QCoreApplication::translate("pageplanning", " SUBSCRIPTIONS", nullptr));
        activite5pb->setText(QCoreApplication::translate("pageplanning", "  ACTIVITIES", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pageplanning: public Ui_pageplanning {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEPLANNING_H
