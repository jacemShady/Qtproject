/********************************************************************************
** Form generated from reading UI file 'pageclient.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGECLIENT_H
#define UI_PAGECLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pageclient
{
public:
    QLabel *label;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableView *tab_clients;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *cin_c;
    QLineEdit *nom_c;
    QLineEdit *prenom_c;
    QLineEdit *email_c;
    QLineEdit *daten_c;
    QLineEdit *telephone_c;
    QLineEdit *cond_c;
    QLabel *label_11;
    QLineEdit *adresse_c;
    QComboBox *genre_c;
    QPushButton *sortAscButton;
    QPushButton *sortDescButton;
    QPushButton *pb_pdf;
    QPushButton *pb_word;
    QPushButton *Imprimer;
    QLabel *lab_chart;
    QPushButton *statgenre;
    QLabel *QRCODE_3;
    QPushButton *statniv;
    QLabel *lab_chart2;
    QComboBox *niv_c;
    QLabel *label_33;
    QPushButton *sms;
    QPushButton *pushpmap;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit;
    QPushButton *search;
    QPushButton *QR;
    QPushButton *pb_supprimer;
    QPushButton *pb_modifier_2;
    QPushButton *pb_ajouter;
    QLabel *label_14;
    QLabel *label_12;
    QPushButton *refrech_pb;
    QPushButton *back4pb;
    QPushButton *employe4pb;
    QPushButton *activite4pb;
    QPushButton *pushButton_9;
    QPushButton *abonnement4pb;
    QPushButton *planning4pb;
    QPushButton *logoutpb4;

    void setupUi(QDialog *pageclient)
    {
        if (pageclient->objectName().isEmpty())
            pageclient->setObjectName(QStringLiteral("pageclient"));
        pageclient->resize(1453, 794);
        label = new QLabel(pageclient);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(-340, -30, 571, 821));
        label->setStyleSheet(QStringLiteral("border-image: url(:/img/img/Sidebar3.png);"));
        tabWidget = new QTabWidget(pageclient);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(230, -30, 1681, 821));
        tabWidget->setStyleSheet(QLatin1String("\n"
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
        tab->setObjectName(QStringLiteral("tab"));
        tab_clients = new QTableView(tab);
        tab_clients->setObjectName(QStringLiteral("tab_clients"));
        tab_clients->setGeometry(QRect(520, 90, 481, 431));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 50, 101, 41));
        label_2->setStyleSheet(QLatin1String("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\";"));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(280, 140, 111, 41));
        label_3->setStyleSheet(QLatin1String("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\";"));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 130, 161, 41));
        label_4->setStyleSheet(QLatin1String("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\";"));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(40, 210, 111, 41));
        label_5->setStyleSheet(QLatin1String("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\";"));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(280, 50, 141, 41));
        label_6->setStyleSheet(QLatin1String("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\";"));
        label_7 = new QLabel(tab);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(40, 290, 151, 51));
        label_7->setStyleSheet(QLatin1String("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\";"));
        label_8 = new QLabel(tab);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(280, 300, 131, 41));
        label_8->setStyleSheet(QLatin1String("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\";"));
        label_9 = new QLabel(tab);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(40, 390, 211, 61));
        label_9->setStyleSheet(QLatin1String("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\";"));
        label_10 = new QLabel(tab);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(280, 400, 91, 41));
        label_10->setStyleSheet(QLatin1String("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\";"));
        cin_c = new QLineEdit(tab);
        cin_c->setObjectName(QStringLiteral("cin_c"));
        cin_c->setGeometry(QRect(50, 90, 161, 31));
        nom_c = new QLineEdit(tab);
        nom_c->setObjectName(QStringLiteral("nom_c"));
        nom_c->setGeometry(QRect(290, 180, 161, 31));
        prenom_c = new QLineEdit(tab);
        prenom_c->setObjectName(QStringLiteral("prenom_c"));
        prenom_c->setGeometry(QRect(50, 180, 161, 31));
        email_c = new QLineEdit(tab);
        email_c->setObjectName(QStringLiteral("email_c"));
        email_c->setGeometry(QRect(50, 260, 161, 31));
        daten_c = new QLineEdit(tab);
        daten_c->setObjectName(QStringLiteral("daten_c"));
        daten_c->setGeometry(QRect(290, 100, 161, 31));
        telephone_c = new QLineEdit(tab);
        telephone_c->setObjectName(QStringLiteral("telephone_c"));
        telephone_c->setGeometry(QRect(50, 350, 161, 31));
        cond_c = new QLineEdit(tab);
        cond_c->setObjectName(QStringLiteral("cond_c"));
        cond_c->setGeometry(QRect(290, 350, 171, 31));
        label_11 = new QLabel(tab);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(280, 220, 121, 41));
        label_11->setStyleSheet(QLatin1String("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\";"));
        adresse_c = new QLineEdit(tab);
        adresse_c->setObjectName(QStringLiteral("adresse_c"));
        adresse_c->setGeometry(QRect(290, 260, 161, 31));
        genre_c = new QComboBox(tab);
        genre_c->setObjectName(QStringLiteral("genre_c"));
        genre_c->setGeometry(QRect(290, 450, 171, 31));
        sortAscButton = new QPushButton(tab);
        sortAscButton->setObjectName(QStringLiteral("sortAscButton"));
        sortAscButton->setGeometry(QRect(520, 60, 181, 41));
        sortAscButton->setStyleSheet(QLatin1String("color: white;\n"
"font: 18pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        sortDescButton = new QPushButton(tab);
        sortDescButton->setObjectName(QStringLiteral("sortDescButton"));
        sortDescButton->setGeometry(QRect(700, 60, 151, 41));
        sortDescButton->setStyleSheet(QLatin1String("color: white;\n"
"font: 18pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        pb_pdf = new QPushButton(tab);
        pb_pdf->setObjectName(QStringLiteral("pb_pdf"));
        pb_pdf->setGeometry(QRect(760, 660, 131, 41));
        pb_pdf->setStyleSheet(QLatin1String("color: white;\n"
"font: 18pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        pb_word = new QPushButton(tab);
        pb_word->setObjectName(QStringLiteral("pb_word"));
        pb_word->setGeometry(QRect(910, 660, 131, 41));
        pb_word->setStyleSheet(QLatin1String("color: white;\n"
"font: 18pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        Imprimer = new QPushButton(tab);
        Imprimer->setObjectName(QStringLiteral("Imprimer"));
        Imprimer->setGeometry(QRect(1070, 660, 131, 41));
        Imprimer->setStyleSheet(QLatin1String("color: white;\n"
"font: 18pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        lab_chart = new QLabel(tab);
        lab_chart->setObjectName(QStringLiteral("lab_chart"));
        lab_chart->setGeometry(QRect(310, 50, 701, 391));
        statgenre = new QPushButton(tab);
        statgenre->setObjectName(QStringLiteral("statgenre"));
        statgenre->setGeometry(QRect(540, 610, 131, 41));
        statgenre->setStyleSheet(QLatin1String("color: white;\n"
"font: 18pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        QRCODE_3 = new QLabel(tab);
        QRCODE_3->setObjectName(QStringLiteral("QRCODE_3"));
        QRCODE_3->setGeometry(QRect(1190, 40, 491, 601));
        statniv = new QPushButton(tab);
        statniv->setObjectName(QStringLiteral("statniv"));
        statniv->setGeometry(QRect(540, 670, 131, 41));
        statniv->setStyleSheet(QLatin1String("color: white;\n"
"font: 18pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        lab_chart2 = new QLabel(tab);
        lab_chart2->setObjectName(QStringLiteral("lab_chart2"));
        lab_chart2->setGeometry(QRect(605, 120, 671, 341));
        niv_c = new QComboBox(tab);
        niv_c->setObjectName(QStringLiteral("niv_c"));
        niv_c->setGeometry(QRect(50, 450, 161, 31));
        label_33 = new QLabel(tab);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(-60, -50, 1731, 911));
        label_33->setStyleSheet(QStringLiteral("border-image: url(:/img/img/try1.png);"));
        sms = new QPushButton(tab);
        sms->setObjectName(QStringLiteral("sms"));
        sms->setGeometry(QRect(160, 670, 221, 41));
        sms->setStyleSheet(QLatin1String("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\"; text-decoration: underline;"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/img/sms.png"), QSize(), QIcon::Normal, QIcon::Off);
        sms->setIcon(icon);
        sms->setIconSize(QSize(40, 40));
        pushpmap = new QPushButton(tab);
        pushpmap->setObjectName(QStringLiteral("pushpmap"));
        pushpmap->setGeometry(QRect(180, 600, 231, 41));
        pushpmap->setStyleSheet(QLatin1String("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\"; text-decoration: underline;"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/img/img/location.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushpmap->setIcon(icon1);
        pushpmap->setIconSize(QSize(40, 40));
        lineEdit_2 = new QLineEdit(tab);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(90, 600, 71, 41));
        lineEdit_2->setStyleSheet(QLatin1String("background-color: #f0f0f0;\n"
"border: 5px solid #ccc;\n"
"padding: 5px;\n"
"border: 1px solid #0078d7;\n"
"font: 20pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        lineEdit_2->setAlignment(Qt::AlignCenter);
        lineEdit = new QLineEdit(tab);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(850, 60, 151, 41));
        lineEdit->setStyleSheet(QLatin1String("background-color: #f0f0f0;\n"
"border: 5px solid #ccc;\n"
"padding: 5px;\n"
"border: 1px solid #0078d7;\n"
"font: 12pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        lineEdit->setAlignment(Qt::AlignCenter);
        search = new QPushButton(tab);
        search->setObjectName(QStringLiteral("search"));
        search->setGeometry(QRect(960, 60, 41, 41));
        search->setStyleSheet(QLatin1String("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\"; text-decoration: underline;"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/img/img/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        search->setIcon(icon2);
        search->setIconSize(QSize(16, 16));
        QR = new QPushButton(tab);
        QR->setObjectName(QStringLiteral("QR"));
        QR->setGeometry(QRect(1270, 640, 241, 41));
        QR->setStyleSheet(QLatin1String("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\"; text-decoration: underline;"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/img/img/qr.png"), QSize(), QIcon::Normal, QIcon::Off);
        QR->setIcon(icon3);
        QR->setIconSize(QSize(40, 40));
        pb_supprimer = new QPushButton(tab);
        pb_supprimer->setObjectName(QStringLiteral("pb_supprimer"));
        pb_supprimer->setGeometry(QRect(30, 520, 131, 41));
        pb_supprimer->setStyleSheet(QLatin1String("background-color: transparent; border: none;color: white;\n"
"font: 20pt \"Bebas Neue\";"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/img/img/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_supprimer->setIcon(icon4);
        pb_supprimer->setIconSize(QSize(20, 20));
        pb_modifier_2 = new QPushButton(tab);
        pb_modifier_2->setObjectName(QStringLiteral("pb_modifier_2"));
        pb_modifier_2->setGeometry(QRect(210, 520, 121, 41));
        pb_modifier_2->setStyleSheet(QLatin1String("background-color: transparent; border: none;color: white;\n"
"font: 20pt \"Bebas Neue\";"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/img/img/pen.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_modifier_2->setIcon(icon5);
        pb_modifier_2->setIconSize(QSize(20, 20));
        pb_ajouter = new QPushButton(tab);
        pb_ajouter->setObjectName(QStringLiteral("pb_ajouter"));
        pb_ajouter->setGeometry(QRect(380, 520, 101, 41));
        pb_ajouter->setStyleSheet(QLatin1String("background-color: transparent; border: none;color: white;\n"
"font: 20pt \"Bebas Neue\";"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/img/img/plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_ajouter->setIcon(icon6);
        pb_ajouter->setIconSize(QSize(20, 20));
        label_14 = new QLabel(tab);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(570, 540, 71, 61));
        label_14->setStyleSheet(QStringLiteral("image: url(:/img/img/stats.png);"));
        label_12 = new QLabel(tab);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(830, 570, 271, 51));
        label_12->setStyleSheet(QLatin1String("background-color: transparent; border: none;color: white;\n"
"font: 30pt \"Bebas Neue\";"));
        refrech_pb = new QPushButton(tab);
        refrech_pb->setObjectName(QStringLiteral("refrech_pb"));
        refrech_pb->setGeometry(QRect(850, 60, 41, 41));
        refrech_pb->setStyleSheet(QLatin1String("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\"; text-decoration: underline;"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/img/img/load.png"), QSize(), QIcon::Normal, QIcon::Off);
        refrech_pb->setIcon(icon7);
        refrech_pb->setIconSize(QSize(20, 20));
        tabWidget->addTab(tab, QString());
        label_33->raise();
        lab_chart2->raise();
        lab_chart->raise();
        tab_clients->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        label_8->raise();
        label_9->raise();
        label_10->raise();
        cin_c->raise();
        nom_c->raise();
        prenom_c->raise();
        email_c->raise();
        daten_c->raise();
        telephone_c->raise();
        cond_c->raise();
        label_11->raise();
        adresse_c->raise();
        genre_c->raise();
        sortAscButton->raise();
        sortDescButton->raise();
        pb_pdf->raise();
        pb_word->raise();
        Imprimer->raise();
        statgenre->raise();
        QRCODE_3->raise();
        statniv->raise();
        niv_c->raise();
        sms->raise();
        pushpmap->raise();
        lineEdit_2->raise();
        lineEdit->raise();
        search->raise();
        QR->raise();
        pb_supprimer->raise();
        pb_modifier_2->raise();
        pb_ajouter->raise();
        label_14->raise();
        label_12->raise();
        refrech_pb->raise();
        back4pb = new QPushButton(pageclient);
        back4pb->setObjectName(QStringLiteral("back4pb"));
        back4pb->setGeometry(QRect(-10, -50, 201, 181));
        back4pb->setStyleSheet(QStringLiteral("border-image: url(:/img/img/gearr.png);"));
        employe4pb = new QPushButton(pageclient);
        employe4pb->setObjectName(QStringLiteral("employe4pb"));
        employe4pb->setGeometry(QRect(20, 200, 161, 51));
        QFont font;
        font.setFamily(QStringLiteral("Bebas Neue"));
        font.setPointSize(20);
        employe4pb->setFont(font);
        employe4pb->setStyleSheet(QStringLiteral("background-color: transparent; border: none;color: white;"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/img/img/id-card.png"), QSize(), QIcon::Normal, QIcon::Off);
        employe4pb->setIcon(icon8);
        employe4pb->setIconSize(QSize(40, 40));
        activite4pb = new QPushButton(pageclient);
        activite4pb->setObjectName(QStringLiteral("activite4pb"));
        activite4pb->setGeometry(QRect(10, 320, 171, 51));
        activite4pb->setFont(font);
        activite4pb->setStyleSheet(QStringLiteral("background-color: transparent; border: none;color: white;"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/img/img/clipboard.png"), QSize(), QIcon::Normal, QIcon::Off);
        activite4pb->setIcon(icon9);
        activite4pb->setIconSize(QSize(40, 40));
        pushButton_9 = new QPushButton(pageclient);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(20, 150, 101, 41));
        pushButton_9->setFont(font);
        pushButton_9->setStyleSheet(QStringLiteral("background-color: transparent; border: none;color: white;"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/img/img/users-avatar.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_9->setIcon(icon10);
        pushButton_9->setIconSize(QSize(40, 40));
        abonnement4pb = new QPushButton(pageclient);
        abonnement4pb->setObjectName(QStringLiteral("abonnement4pb"));
        abonnement4pb->setGeometry(QRect(20, 380, 201, 51));
        abonnement4pb->setFont(font);
        abonnement4pb->setStyleSheet(QStringLiteral("background-color: transparent; border: none;color: white;"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/img/img/subscription.png"), QSize(), QIcon::Normal, QIcon::Off);
        abonnement4pb->setIcon(icon11);
        abonnement4pb->setIconSize(QSize(40, 40));
        planning4pb = new QPushButton(pageclient);
        planning4pb->setObjectName(QStringLiteral("planning4pb"));
        planning4pb->setGeometry(QRect(10, 260, 171, 51));
        planning4pb->setFont(font);
        planning4pb->setStyleSheet(QStringLiteral("background-color: transparent; border: none;color: white;"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/img/img/calendar.png"), QSize(), QIcon::Normal, QIcon::Off);
        planning4pb->setIcon(icon12);
        planning4pb->setIconSize(QSize(40, 40));
        logoutpb4 = new QPushButton(pageclient);
        logoutpb4->setObjectName(QStringLiteral("logoutpb4"));
        logoutpb4->setGeometry(QRect(10, 640, 201, 71));
        QFont font1;
        font1.setFamily(QStringLiteral("Bebas Neue"));
        font1.setPointSize(20);
        font1.setUnderline(true);
        logoutpb4->setFont(font1);
        logoutpb4->setStyleSheet(QStringLiteral("background-color: transparent; border: none;color: white;  text-decoration: underline;"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/img/img/logout.png"), QSize(), QIcon::Normal, QIcon::Off);
        logoutpb4->setIcon(icon13);
        logoutpb4->setIconSize(QSize(40, 40));

        retranslateUi(pageclient);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(pageclient);
    } // setupUi

    void retranslateUi(QDialog *pageclient)
    {
        pageclient->setWindowTitle(QApplication::translate("pageclient", "Dialog", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QApplication::translate("pageclient", "Cin", Q_NULLPTR));
        label_3->setText(QApplication::translate("pageclient", "name", Q_NULLPTR));
        label_4->setText(QApplication::translate("pageclient", "First name", Q_NULLPTR));
        label_5->setText(QApplication::translate("pageclient", "Email", Q_NULLPTR));
        label_6->setText(QApplication::translate("pageclient", "Birthdate", Q_NULLPTR));
        label_7->setText(QApplication::translate("pageclient", "Telephone", Q_NULLPTR));
        label_8->setText(QApplication::translate("pageclient", "Carte ID", Q_NULLPTR));
        label_9->setText(QApplication::translate("pageclient", "niveau scolaire", Q_NULLPTR));
        label_10->setText(QApplication::translate("pageclient", "genre", Q_NULLPTR));
        label_11->setText(QApplication::translate("pageclient", "Adresse", Q_NULLPTR));
        genre_c->clear();
        genre_c->insertItems(0, QStringList()
         << QApplication::translate("pageclient", "homme", Q_NULLPTR)
         << QApplication::translate("pageclient", "femme", Q_NULLPTR)
        );
        sortAscButton->setText(QApplication::translate("pageclient", "ASCendant", Q_NULLPTR));
        sortDescButton->setText(QApplication::translate("pageclient", "DESCendant", Q_NULLPTR));
        pb_pdf->setText(QApplication::translate("pageclient", "PDF", Q_NULLPTR));
        pb_word->setText(QApplication::translate("pageclient", "WORD", Q_NULLPTR));
        Imprimer->setText(QApplication::translate("pageclient", "Imprimer", Q_NULLPTR));
        lab_chart->setText(QString());
        statgenre->setText(QApplication::translate("pageclient", "stat genre", Q_NULLPTR));
        QRCODE_3->setText(QString());
        statniv->setText(QApplication::translate("pageclient", "Stat niveau", Q_NULLPTR));
        lab_chart2->setText(QString());
        niv_c->clear();
        niv_c->insertItems(0, QStringList()
         << QApplication::translate("pageclient", "Bac", Q_NULLPTR)
         << QApplication::translate("pageclient", "College", Q_NULLPTR)
         << QApplication::translate("pageclient", "Lycee", Q_NULLPTR)
        );
        label_33->setText(QString());
        sms->setText(QApplication::translate("pageclient", " SEND SMS", Q_NULLPTR));
        pushpmap->setText(QApplication::translate("pageclient", "SHOW ON MAP", Q_NULLPTR));
        lineEdit_2->setText(QString());
        lineEdit_2->setPlaceholderText(QApplication::translate("pageclient", "CIN", Q_NULLPTR));
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QApplication::translate("pageclient", "Search", Q_NULLPTR));
        search->setText(QString());
        QR->setText(QApplication::translate("pageclient", "Generate QR", Q_NULLPTR));
        pb_supprimer->setText(QApplication::translate("pageclient", "DELETE", Q_NULLPTR));
        pb_modifier_2->setText(QApplication::translate("pageclient", "UPDATE", Q_NULLPTR));
        pb_ajouter->setText(QApplication::translate("pageclient", "ADD", Q_NULLPTR));
        label_14->setText(QString());
        label_12->setText(QApplication::translate("pageclient", "YOU CAN ALSO :", Q_NULLPTR));
        refrech_pb->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QString());
        back4pb->setText(QString());
        employe4pb->setText(QApplication::translate("pageclient", "  EMPLOYEE", Q_NULLPTR));
        activite4pb->setText(QApplication::translate("pageclient", "  ACTIVITIES", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("pageclient", "  USER", Q_NULLPTR));
        abonnement4pb->setText(QApplication::translate("pageclient", " SUBSCRIPTIONS", Q_NULLPTR));
        planning4pb->setText(QApplication::translate("pageclient", "  PLANNING", Q_NULLPTR));
        logoutpb4->setText(QApplication::translate("pageclient", "LOGOUT", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class pageclient: public Ui_pageclient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGECLIENT_H
