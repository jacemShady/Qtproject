/********************************************************************************
** Form generated from reading UI file 'pageactivite.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEACTIVITE_H
#define UI_PAGEACTIVITE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Pageactivite
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableWidget *tab_activite;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *id_a;
    QLineEdit *nom_a;
    QLineEdit *description_a;
    QLineEdit *equipements_a;
    QLabel *label_8;
    QLineEdit *cin_e;
    QPushButton *sortAscButton;
    QPushButton *sortDescButton;
    QPushButton *pb_pdf;
    QPushButton *pb_word;
    QPushButton *Imprimer;
    QPushButton *stat;
    QLabel *QRCODE_3;
    QLabel *lab_chart;
    QPushButton *Stat_duree;
    QLabel *lab_chart2;
    QLabel *label_32;
    QPushButton *pushdisplay;
    QLineEdit *duree_a;
    QLineEdit *nbm_a;
    QPushButton *pb_ajouter;
    QPushButton *pb_modifier_2;
    QPushButton *pb_supprimer;
    QLineEdit *lineEdit;
    QPushButton *search;
    QLabel *label_14;
    QPushButton *QR;
    QLabel *label_12;
    QPushButton *refrech_pb;
    QWidget *tab_2;
    QLabel *label_33;
    QGroupBox *groupBox_5;
    QPushButton *pushButton_2;
    QPushButton *back3pb;
    QLabel *label_7;
    QPushButton *client3pb;
    QPushButton *employe3pb;
    QPushButton *planning3pb;
    QPushButton *pushButton_14;
    QPushButton *abonnement3pb;
    QPushButton *logoutpb3;

    void setupUi(QDialog *Pageactivite)
    {
        if (Pageactivite->objectName().isEmpty())
            Pageactivite->setObjectName("Pageactivite");
        Pageactivite->resize(1704, 912);
        tabWidget = new QTabWidget(Pageactivite);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(240, 10, 1481, 911));
        tabWidget->setStyleSheet(QString::fromUtf8("\n"
"/* Style for QGroupBox */\n"
"\n"
"QComboBox{   background-color: #3498db; /* Blue color for input boxes */\n"
"    border: 1px solid #2980b9; /* Border color for input boxes */\n"
"    border-radius: 5px; /* Border radius for input boxes */\n"
"    padding: 5px; /* Padding for input boxes */\n"
"    color: black; /* Text color inside input boxes */}\n"
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
""
                        "/* Style for QPushButton */\n"
"QPushButton {\n"
"    background-color: #3498db; /* Blue color for buttons */\n"
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
"QTabWidget{\n"
"color: white;\n"
"font: 10pt \"Bebas Neue\";}"));
        tab = new QWidget();
        tab->setObjectName("tab");
        tab_activite = new QTableWidget(tab);
        tab_activite->setObjectName("tab_activite");
        tab_activite->setGeometry(QRect(428, 100, 501, 451));
        label = new QLabel(tab);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 60, 81, 41));
        label->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\";"));
        label_2 = new QLabel(tab);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 150, 81, 41));
        label_2->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\";"));
        label_3 = new QLabel(tab);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(200, 150, 181, 41));
        label_3->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\";"));
        label_4 = new QLabel(tab);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 240, 151, 41));
        label_4->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\";"));
        label_5 = new QLabel(tab);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(210, 240, 91, 41));
        label_5->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\";"));
        label_6 = new QLabel(tab);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(110, 340, 211, 41));
        label_6->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\";"));
        id_a = new QLineEdit(tab);
        id_a->setObjectName("id_a");
        id_a->setGeometry(QRect(20, 110, 151, 31));
        nom_a = new QLineEdit(tab);
        nom_a->setObjectName("nom_a");
        nom_a->setGeometry(QRect(20, 200, 151, 31));
        description_a = new QLineEdit(tab);
        description_a->setObjectName("description_a");
        description_a->setGeometry(QRect(210, 200, 201, 31));
        equipements_a = new QLineEdit(tab);
        equipements_a->setObjectName("equipements_a");
        equipements_a->setGeometry(QRect(40, 390, 311, 31));
        label_8 = new QLabel(tab);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(200, 60, 171, 41));
        label_8->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\";"));
        cin_e = new QLineEdit(tab);
        cin_e->setObjectName("cin_e");
        cin_e->setGeometry(QRect(210, 110, 201, 31));
        sortAscButton = new QPushButton(tab);
        sortAscButton->setObjectName("sortAscButton");
        sortAscButton->setGeometry(QRect(428, 80, 191, 41));
        sortAscButton->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 18pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        sortDescButton = new QPushButton(tab);
        sortDescButton->setObjectName("sortDescButton");
        sortDescButton->setGeometry(QRect(610, 80, 171, 41));
        sortDescButton->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 18pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        pb_pdf = new QPushButton(tab);
        pb_pdf->setObjectName("pb_pdf");
        pb_pdf->setGeometry(QRect(720, 687, 111, 41));
        pb_pdf->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 18pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        pb_word = new QPushButton(tab);
        pb_word->setObjectName("pb_word");
        pb_word->setGeometry(QRect(840, 687, 101, 41));
        pb_word->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 18pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        Imprimer = new QPushButton(tab);
        Imprimer->setObjectName("Imprimer");
        Imprimer->setGeometry(QRect(950, 687, 131, 41));
        Imprimer->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 18pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        stat = new QPushButton(tab);
        stat->setObjectName("stat");
        stat->setGeometry(QRect(410, 700, 271, 41));
        stat->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 18pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        QRCODE_3 = new QLabel(tab);
        QRCODE_3->setObjectName("QRCODE_3");
        QRCODE_3->setGeometry(QRect(1080, 90, 801, 601));
        lab_chart = new QLabel(tab);
        lab_chart->setObjectName("lab_chart");
        lab_chart->setGeometry(QRect(310, 100, 631, 441));
        Stat_duree = new QPushButton(tab);
        Stat_duree->setObjectName("Stat_duree");
        Stat_duree->setGeometry(QRect(410, 770, 271, 31));
        Stat_duree->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 18pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        lab_chart2 = new QLabel(tab);
        lab_chart2->setObjectName("lab_chart2");
        lab_chart2->setGeometry(QRect(230, 100, 721, 431));
        label_32 = new QLabel(tab);
        label_32->setObjectName("label_32");
        label_32->setGeometry(QRect(-10, -20, 1731, 911));
        label_32->setStyleSheet(QString::fromUtf8("border-image: url(:/img/img/try1.png);"));
        pushdisplay = new QPushButton(tab);
        pushdisplay->setObjectName("pushdisplay");
        pushdisplay->setGeometry(QRect(110, 600, 201, 41));
        pushdisplay->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 18pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        duree_a = new QLineEdit(tab);
        duree_a->setObjectName("duree_a");
        duree_a->setGeometry(QRect(20, 280, 161, 31));
        nbm_a = new QLineEdit(tab);
        nbm_a->setObjectName("nbm_a");
        nbm_a->setGeometry(QRect(210, 280, 201, 31));
        pb_ajouter = new QPushButton(tab);
        pb_ajouter->setObjectName("pb_ajouter");
        pb_ajouter->setGeometry(QRect(300, 490, 101, 41));
        pb_ajouter->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 20pt \"Bebas Neue\";"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_ajouter->setIcon(icon);
        pb_ajouter->setIconSize(QSize(20, 20));
        pb_modifier_2 = new QPushButton(tab);
        pb_modifier_2->setObjectName("pb_modifier_2");
        pb_modifier_2->setGeometry(QRect(150, 490, 121, 41));
        pb_modifier_2->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 20pt \"Bebas Neue\";"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/img/pen.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_modifier_2->setIcon(icon1);
        pb_modifier_2->setIconSize(QSize(20, 20));
        pb_supprimer = new QPushButton(tab);
        pb_supprimer->setObjectName("pb_supprimer");
        pb_supprimer->setGeometry(QRect(20, 490, 121, 41));
        pb_supprimer->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 20pt \"Bebas Neue\";"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/img/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_supprimer->setIcon(icon2);
        pb_supprimer->setIconSize(QSize(20, 20));
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
        label_14 = new QLabel(tab);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(490, 610, 71, 61));
        label_14->setStyleSheet(QString::fromUtf8("image: url(:/img/img/stats.png);"));
        QR = new QPushButton(tab);
        QR->setObjectName("QR");
        QR->setGeometry(QRect(1170, 760, 241, 41));
        QR->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\"; text-decoration: underline;"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/img/qr.png"), QSize(), QIcon::Normal, QIcon::Off);
        QR->setIcon(icon4);
        QR->setIconSize(QSize(40, 40));
        label_12 = new QLabel(tab);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(770, 610, 271, 51));
        label_12->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 30pt \"Bebas Neue\";"));
        refrech_pb = new QPushButton(tab);
        refrech_pb->setObjectName("refrech_pb");
        refrech_pb->setGeometry(QRect(780, 80, 41, 41));
        refrech_pb->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\"; text-decoration: underline;"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/img/img/load.png"), QSize(), QIcon::Normal, QIcon::Off);
        refrech_pb->setIcon(icon5);
        refrech_pb->setIconSize(QSize(20, 20));
        tabWidget->addTab(tab, QString());
        label_32->raise();
        lab_chart2->raise();
        lab_chart->raise();
        tab_activite->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        id_a->raise();
        nom_a->raise();
        description_a->raise();
        equipements_a->raise();
        label_8->raise();
        cin_e->raise();
        sortAscButton->raise();
        sortDescButton->raise();
        pb_pdf->raise();
        pb_word->raise();
        Imprimer->raise();
        stat->raise();
        QRCODE_3->raise();
        Stat_duree->raise();
        pushdisplay->raise();
        duree_a->raise();
        nbm_a->raise();
        pb_ajouter->raise();
        pb_modifier_2->raise();
        pb_supprimer->raise();
        lineEdit->raise();
        search->raise();
        label_14->raise();
        QR->raise();
        label_12->raise();
        refrech_pb->raise();
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        label_33 = new QLabel(tab_2);
        label_33->setObjectName("label_33");
        label_33->setGeometry(QRect(0, 0, 1731, 911));
        label_33->setStyleSheet(QString::fromUtf8("border-image: url(:/img/img/try1.png);"));
        groupBox_5 = new QGroupBox(tab_2);
        groupBox_5->setObjectName("groupBox_5");
        groupBox_5->setGeometry(QRect(10, 10, 1511, 861));
        groupBox_5->setStyleSheet(QString::fromUtf8("\n"
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
        pushButton_2 = new QPushButton(groupBox_5);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(470, 290, 461, 161));
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 36pt ;\n"
"font: 25 36pt \"Roboto Condensed Light\";"));
        tabWidget->addTab(tab_2, QString());
        back3pb = new QPushButton(Pageactivite);
        back3pb->setObjectName("back3pb");
        back3pb->setGeometry(QRect(-30, -10, 201, 181));
        back3pb->setStyleSheet(QString::fromUtf8("border-image: url(:/img/img/gearr.png);"));
        label_7 = new QLabel(Pageactivite);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(-380, 20, 621, 931));
        label_7->setStyleSheet(QString::fromUtf8("border-image: url(:/img/img/Sidebar3.png);"));
        client3pb = new QPushButton(Pageactivite);
        client3pb->setObjectName("client3pb");
        client3pb->setGeometry(QRect(0, 180, 141, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Bebas Neue")});
        font.setPointSize(20);
        client3pb->setFont(font);
        client3pb->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/img/img/users-avatar.png"), QSize(), QIcon::Normal, QIcon::Off);
        client3pb->setIcon(icon6);
        client3pb->setIconSize(QSize(40, 40));
        employe3pb = new QPushButton(Pageactivite);
        employe3pb->setObjectName("employe3pb");
        employe3pb->setGeometry(QRect(20, 250, 161, 51));
        employe3pb->setFont(font);
        employe3pb->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/img/img/id-card.png"), QSize(), QIcon::Normal, QIcon::Off);
        employe3pb->setIcon(icon7);
        employe3pb->setIconSize(QSize(40, 40));
        planning3pb = new QPushButton(Pageactivite);
        planning3pb->setObjectName("planning3pb");
        planning3pb->setGeometry(QRect(10, 320, 171, 51));
        planning3pb->setFont(font);
        planning3pb->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/img/img/calendar.png"), QSize(), QIcon::Normal, QIcon::Off);
        planning3pb->setIcon(icon8);
        planning3pb->setIconSize(QSize(40, 40));
        pushButton_14 = new QPushButton(Pageactivite);
        pushButton_14->setObjectName("pushButton_14");
        pushButton_14->setGeometry(QRect(10, 390, 171, 51));
        pushButton_14->setFont(font);
        pushButton_14->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/img/img/clipboard.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_14->setIcon(icon9);
        pushButton_14->setIconSize(QSize(40, 40));
        abonnement3pb = new QPushButton(Pageactivite);
        abonnement3pb->setObjectName("abonnement3pb");
        abonnement3pb->setGeometry(QRect(20, 460, 201, 51));
        abonnement3pb->setFont(font);
        abonnement3pb->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/img/img/subscription.png"), QSize(), QIcon::Normal, QIcon::Off);
        abonnement3pb->setIcon(icon10);
        abonnement3pb->setIconSize(QSize(40, 40));
        logoutpb3 = new QPushButton(Pageactivite);
        logoutpb3->setObjectName("logoutpb3");
        logoutpb3->setGeometry(QRect(10, 700, 201, 71));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Bebas Neue")});
        font1.setPointSize(20);
        font1.setUnderline(true);
        logoutpb3->setFont(font1);
        logoutpb3->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;  text-decoration: underline;"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/img/img/logout.png"), QSize(), QIcon::Normal, QIcon::Off);
        logoutpb3->setIcon(icon11);
        logoutpb3->setIconSize(QSize(40, 40));
        label_7->raise();
        tabWidget->raise();
        back3pb->raise();
        client3pb->raise();
        employe3pb->raise();
        planning3pb->raise();
        pushButton_14->raise();
        abonnement3pb->raise();
        logoutpb3->raise();

        retranslateUi(Pageactivite);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Pageactivite);
    } // setupUi

    void retranslateUi(QDialog *Pageactivite)
    {
        Pageactivite->setWindowTitle(QCoreApplication::translate("Pageactivite", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Pageactivite", "Id", nullptr));
        label_2->setText(QCoreApplication::translate("Pageactivite", "Name", nullptr));
        label_3->setText(QCoreApplication::translate("Pageactivite", "Description", nullptr));
        label_4->setText(QCoreApplication::translate("Pageactivite", "duration", nullptr));
        label_5->setText(QCoreApplication::translate("Pageactivite", "Nbm", nullptr));
        label_6->setText(QCoreApplication::translate("Pageactivite", "Equipment", nullptr));
        label_8->setText(QCoreApplication::translate("Pageactivite", "CIN Employe", nullptr));
        sortAscButton->setText(QCoreApplication::translate("Pageactivite", "ASCendant", nullptr));
        sortDescButton->setText(QCoreApplication::translate("Pageactivite", "DESCendant", nullptr));
        pb_pdf->setText(QCoreApplication::translate("Pageactivite", "PDF", nullptr));
        pb_word->setText(QCoreApplication::translate("Pageactivite", "WORD", nullptr));
        Imprimer->setText(QCoreApplication::translate("Pageactivite", "IMPRIMER", nullptr));
#if QT_CONFIG(whatsthis)
        stat->setWhatsThis(QCoreApplication::translate("Pageactivite", "<html><head/><body><p>Stat nombre max <br/>de participant</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        stat->setText(QCoreApplication::translate("Pageactivite", "Stat nb max de participant", nullptr));
        QRCODE_3->setText(QString());
        lab_chart->setText(QString());
        Stat_duree->setText(QCoreApplication::translate("Pageactivite", "Stat duree", nullptr));
        lab_chart2->setText(QString());
        label_32->setText(QString());
        pushdisplay->setText(QCoreApplication::translate("Pageactivite", "Display", nullptr));
        pb_ajouter->setText(QCoreApplication::translate("Pageactivite", "ADD", nullptr));
        pb_modifier_2->setText(QCoreApplication::translate("Pageactivite", "UPDATE", nullptr));
        pb_supprimer->setText(QCoreApplication::translate("Pageactivite", "DELETE", nullptr));
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("Pageactivite", "Search", nullptr));
        search->setText(QString());
        label_14->setText(QString());
        QR->setText(QCoreApplication::translate("Pageactivite", "Generate QR", nullptr));
        label_12->setText(QCoreApplication::translate("Pageactivite", "YOU CAN ALSO :", nullptr));
        refrech_pb->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Pageactivite", "activites", nullptr));
        label_33->setText(QString());
        groupBox_5->setTitle(QString());
#if QT_CONFIG(tooltip)
        pushButton_2->setToolTip(QCoreApplication::translate("Pageactivite", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        pushButton_2->setWhatsThis(QCoreApplication::translate("Pageactivite", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_2->setText(QCoreApplication::translate("Pageactivite", "Start Camera", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Pageactivite", "camera", nullptr));
        back3pb->setText(QString());
        label_7->setText(QString());
        client3pb->setText(QCoreApplication::translate("Pageactivite", "  USER", nullptr));
        employe3pb->setText(QCoreApplication::translate("Pageactivite", "  EMPLOYEE", nullptr));
        planning3pb->setText(QCoreApplication::translate("Pageactivite", "  PLANNING", nullptr));
        pushButton_14->setText(QCoreApplication::translate("Pageactivite", "  ACTIVITIES", nullptr));
        abonnement3pb->setText(QCoreApplication::translate("Pageactivite", " SUBSCRIPTIONS", nullptr));
        logoutpb3->setText(QCoreApplication::translate("Pageactivite", "LOGOUT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Pageactivite: public Ui_Pageactivite {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEACTIVITE_H
