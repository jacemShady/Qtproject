/********************************************************************************
** Form generated from reading UI file 'thrdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THRDIALOG_H
#define UI_THRDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_thrDialog
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox;
    QLineEdit *cin_e;
    QLabel *label_4;
    QLabel *label;
    QLineEdit *nom_e;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *prenom_e;
    QLabel *label_6;
    QLineEdit *daten_e;
    QLabel *label_9;
    QLineEdit *salaire_e;
    QLabel *label_5;
    QLineEdit *datee_e;
    QTableView *tab_employes;
    QComboBox *role_e;
    QLabel *label_21;
    QLineEdit *telephone_e;
    QLabel *label_22;
    QLineEdit *adresse_e;
    QLabel *label_23;
    QLineEdit *email_e;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLabel *label_7;
    QPushButton *sortAscButton;
    QPushButton *sortDescButton;
    QPushButton *bg_pb;
    QLabel *label_12;
    QLabel *label_11;
    QLabel *label_13;
    QLineEdit *user_e;
    QLabel *label_14;
    QLineEdit *pas_e;
    QPushButton *pb_pdf;
    QPushButton *pb_word;
    QPushButton *pushButton;
    QPushButton *statrole;
    QLabel *lab_chart_pie;
    QLabel *lab_chart_bar;
    QPushButton *Imprimer;
    QLabel *label_17;
    QComboBox *task_e;
    QPushButton *pb_ajouter;
    QPushButton *pb_modifier_2;
    QPushButton *pb_supprimer;
    QLineEdit *lineEdit;
    QLabel *label_18;
    QLabel *label_19;
    QPushButton *refrech_pb;
    QPushButton *search;
    QPushButton *notepad;
    QWidget *tab_4;
    QLabel *label_34;
    QGroupBox *groupBox_7;
    QLabel *label_53;
    QLineEdit *rcpt;
    QLabel *label_56;
    QPlainTextEdit *msg;
    QPushButton *sendBtn2;
    QTimeEdit *timeEdit;
    QWidget *tab_2;
    QGroupBox *groupBox_2;
    QTableView *tab_employes_2;
    QLabel *label_31;
    QTableView *tableView;
    QWidget *tab_5;
    QLabel *label_35;
    QLabel *label_15;
    QLabel *label_16;
    QLineEdit *lineEdit_2;
    QPushButton *pushB;
    QPushButton *backpb;
    QLabel *label_10;
    QPushButton *clientpb;
    QPushButton *pushButton_3;
    QPushButton *planningpb;
    QPushButton *abonnementpb;
    QPushButton *activitepb;
    QPushButton *logoutpb;

    void setupUi(QDialog *thrDialog)
    {
        if (thrDialog->objectName().isEmpty())
            thrDialog->setObjectName("thrDialog");
        thrDialog->resize(1828, 912);
        tabWidget = new QTabWidget(thrDialog);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(250, 0, 1581, 921));
        tabWidget->setStyleSheet(QString::fromUtf8("\n"
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
"QTabWidget{\n"
"color: white;\n"
"font: 10pt \"Bebas Neue\";}"));
        tab = new QWidget();
        tab->setObjectName("tab");
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(-40, 0, 1631, 891));
        groupBox->setStyleSheet(QString::fromUtf8("\n"
"/* Style for QGroupBox */\n"
"QRadioButton{ color: white; /* Text color for labels */\n"
"    font-size: 16px; /* Adjust font size as needed */\n"
"    font-weight: bold; /* Make the text bold if desired */\n"
"    margin: 5px; /* Adjust margin as needed */\n"
"}\n"
"QComboBox{ background-color: #3498db; /* Blue color for input boxes */\n"
"    border: 1px solid #2980b9; /* Border color for input boxes */\n"
"    border-radius: 5px; /* Border radius for input boxes */\n"
"    padding: 5px; /* Padding for input boxes */\n"
"    color: black; /* Text color inside input boxes */\n"
"}\n"
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
"QLabel"
                        " {\n"
"    color: white; /* Text color for labels */\n"
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
        cin_e = new QLineEdit(groupBox);
        cin_e->setObjectName("cin_e");
        cin_e->setGeometry(QRect(60, 110, 181, 31));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(280, 440, 111, 41));
        label_4->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\";"));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(280, 69, 121, 41));
        label->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\";"));
        nom_e = new QLineEdit(groupBox);
        nom_e->setObjectName("nom_e");
        nom_e->setGeometry(QRect(290, 110, 191, 31));
        nom_e->setStyleSheet(QString::fromUtf8(""));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 70, 91, 41));
        label_2->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\";"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 149, 191, 41));
        label_3->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\";"));
        prenom_e = new QLineEdit(groupBox);
        prenom_e->setObjectName("prenom_e");
        prenom_e->setGeometry(QRect(60, 200, 181, 31));
        prenom_e->setStyleSheet(QString::fromUtf8(""));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(50, 340, 241, 51));
        label_6->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\";"));
        daten_e = new QLineEdit(groupBox);
        daten_e->setObjectName("daten_e");
        daten_e->setGeometry(QRect(60, 400, 191, 31));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(280, 350, 121, 41));
        label_9->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\";"));
        salaire_e = new QLineEdit(groupBox);
        salaire_e->setObjectName("salaire_e");
        salaire_e->setGeometry(QRect(290, 400, 191, 31));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(50, 440, 221, 51));
        label_5->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\";"));
        datee_e = new QLineEdit(groupBox);
        datee_e->setObjectName("datee_e");
        datee_e->setGeometry(QRect(60, 490, 201, 31));
        tab_employes = new QTableView(groupBox);
        tab_employes->setObjectName("tab_employes");
        tab_employes->setGeometry(QRect(520, 110, 571, 631));
        tab_employes->setStyleSheet(QString::fromUtf8(""));
        role_e = new QComboBox(groupBox);
        role_e->addItem(QString());
        role_e->addItem(QString());
        role_e->addItem(QString());
        role_e->setObjectName("role_e");
        role_e->setGeometry(QRect(290, 490, 191, 31));
        label_21 = new QLabel(groupBox);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(50, 250, 151, 41));
        label_21->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\";"));
        telephone_e = new QLineEdit(groupBox);
        telephone_e->setObjectName("telephone_e");
        telephone_e->setGeometry(QRect(60, 300, 181, 31));
        label_22 = new QLabel(groupBox);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(280, 150, 121, 41));
        label_22->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\";"));
        adresse_e = new QLineEdit(groupBox);
        adresse_e->setObjectName("adresse_e");
        adresse_e->setGeometry(QRect(290, 200, 201, 31));
        label_23 = new QLabel(groupBox);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(280, 250, 81, 41));
        label_23->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\";"));
        email_e = new QLineEdit(groupBox);
        email_e->setObjectName("email_e");
        email_e->setGeometry(QRect(290, 300, 201, 31));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(670, 20, 101, 41));
        radioButton->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\";"));
        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName("radioButton_2");
        radioButton_2->setGeometry(QRect(770, 10, 171, 61));
        radioButton_2->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\";"));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(510, 20, 151, 41));
        label_7->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\";"));
        sortAscButton = new QPushButton(groupBox);
        sortAscButton->setObjectName("sortAscButton");
        sortAscButton->setGeometry(QRect(520, 90, 311, 31));
        sortAscButton->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 18pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        sortDescButton = new QPushButton(groupBox);
        sortDescButton->setObjectName("sortDescButton");
        sortDescButton->setGeometry(QRect(830, 90, 261, 31));
        sortDescButton->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 18pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        bg_pb = new QPushButton(groupBox);
        bg_pb->setObjectName("bg_pb");
        bg_pb->setGeometry(QRect(600, 790, 151, 41));
        bg_pb->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 18pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        label_12 = new QLabel(groupBox);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(0, 0, 1501, 921));
        label_12->setStyleSheet(QString::fromUtf8("border-image: url(:/img/img/sports-nautiques.jpg);"));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(-240, -20, 1871, 921));
        label_11->setStyleSheet(QString::fromUtf8("border-image: url(:/img/img/try1.png);"));
        label_13 = new QLabel(groupBox);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(50, 540, 171, 41));
        label_13->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\";"));
        user_e = new QLineEdit(groupBox);
        user_e->setObjectName("user_e");
        user_e->setGeometry(QRect(60, 590, 201, 31));
        label_14 = new QLabel(groupBox);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(280, 530, 121, 51));
        label_14->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\";"));
        pas_e = new QLineEdit(groupBox);
        pas_e->setObjectName("pas_e");
        pas_e->setGeometry(QRect(290, 590, 191, 31));
        pb_pdf = new QPushButton(groupBox);
        pb_pdf->setObjectName("pb_pdf");
        pb_pdf->setGeometry(QRect(1290, 207, 121, 41));
        pb_pdf->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 18pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        pb_word = new QPushButton(groupBox);
        pb_word->setObjectName("pb_word");
        pb_word->setGeometry(QRect(1150, 207, 121, 41));
        pb_word->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 18pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(1180, 490, 391, 41));
        pushButton->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 18pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        statrole = new QPushButton(groupBox);
        statrole->setObjectName("statrole");
        statrole->setGeometry(QRect(1180, 570, 391, 41));
        statrole->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 18pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        lab_chart_pie = new QLabel(groupBox);
        lab_chart_pie->setObjectName("lab_chart_pie");
        lab_chart_pie->setGeometry(QRect(660, 140, 541, 600));
        QFont font;
        font.setFamilies({QString::fromUtf8("Yu Gothic UI Semibold")});
        font.setBold(true);
        lab_chart_pie->setFont(font);
        lab_chart_bar = new QLabel(groupBox);
        lab_chart_bar->setObjectName("lab_chart_bar");
        lab_chart_bar->setGeometry(QRect(940, 200, 541, 701));
        lab_chart_bar->setFont(font);
        Imprimer = new QPushButton(groupBox);
        Imprimer->setObjectName("Imprimer");
        Imprimer->setGeometry(QRect(1420, 207, 121, 41));
        Imprimer->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 18pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        label_17 = new QLabel(groupBox);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(220, 630, 81, 41));
        label_17->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\";"));
        task_e = new QComboBox(groupBox);
        task_e->addItem(QString());
        task_e->addItem(QString());
        task_e->addItem(QString());
        task_e->addItem(QString());
        task_e->addItem(QString());
        task_e->addItem(QString());
        task_e->addItem(QString());
        task_e->addItem(QString());
        task_e->addItem(QString());
        task_e->addItem(QString());
        task_e->addItem(QString());
        task_e->addItem(QString());
        task_e->setObjectName("task_e");
        task_e->setGeometry(QRect(130, 680, 301, 41));
        task_e->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 18pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        pb_ajouter = new QPushButton(groupBox);
        pb_ajouter->setObjectName("pb_ajouter");
        pb_ajouter->setGeometry(QRect(400, 760, 101, 41));
        pb_ajouter->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 20pt \"Bebas Neue\";"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_ajouter->setIcon(icon);
        pb_ajouter->setIconSize(QSize(20, 20));
        pb_modifier_2 = new QPushButton(groupBox);
        pb_modifier_2->setObjectName("pb_modifier_2");
        pb_modifier_2->setGeometry(QRect(230, 760, 121, 41));
        pb_modifier_2->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 20pt \"Bebas Neue\";"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/img/pen.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_modifier_2->setIcon(icon1);
        pb_modifier_2->setIconSize(QSize(20, 20));
        pb_supprimer = new QPushButton(groupBox);
        pb_supprimer->setObjectName("pb_supprimer");
        pb_supprimer->setGeometry(QRect(90, 760, 121, 41));
        pb_supprimer->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 20pt \"Bebas Neue\";"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/img/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_supprimer->setIcon(icon2);
        pb_supprimer->setIconSize(QSize(20, 20));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(940, 20, 151, 41));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: #f0f0f0;\n"
"border: 5px solid #ccc;\n"
"padding: 5px;\n"
"border: 1px solid #0078d7;\n"
"font: 12pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        lineEdit->setAlignment(Qt::AlignCenter);
        label_18 = new QLabel(groupBox);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(1350, 390, 71, 61));
        label_18->setStyleSheet(QString::fromUtf8("image: url(:/img/img/stats.png);"));
        label_19 = new QLabel(groupBox);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(1240, 130, 281, 51));
        label_19->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 30pt \"Bebas Neue\";"));
        refrech_pb = new QPushButton(groupBox);
        refrech_pb->setObjectName("refrech_pb");
        refrech_pb->setGeometry(QRect(940, 20, 41, 41));
        refrech_pb->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\"; text-decoration: underline;"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/img/load.png"), QSize(), QIcon::Normal, QIcon::Off);
        refrech_pb->setIcon(icon3);
        refrech_pb->setIconSize(QSize(20, 20));
        search = new QPushButton(groupBox);
        search->setObjectName("search");
        search->setGeometry(QRect(1050, 20, 41, 41));
        search->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\"; text-decoration: underline;"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/img/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        search->setIcon(icon4);
        search->setIconSize(QSize(16, 16));
        notepad = new QPushButton(groupBox);
        notepad->setObjectName("notepad");
        notepad->setGeometry(QRect(810, 790, 141, 41));
        notepad->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 18pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        lab_chart_pie->raise();
        lab_chart_bar->raise();
        label_12->raise();
        label_11->raise();
        label->raise();
        nom_e->raise();
        label_2->raise();
        label_3->raise();
        prenom_e->raise();
        label_6->raise();
        daten_e->raise();
        label_9->raise();
        salaire_e->raise();
        cin_e->raise();
        label_4->raise();
        label_5->raise();
        datee_e->raise();
        tab_employes->raise();
        role_e->raise();
        label_21->raise();
        telephone_e->raise();
        label_22->raise();
        adresse_e->raise();
        label_23->raise();
        email_e->raise();
        radioButton->raise();
        radioButton_2->raise();
        label_7->raise();
        sortAscButton->raise();
        sortDescButton->raise();
        bg_pb->raise();
        label_13->raise();
        user_e->raise();
        label_14->raise();
        pas_e->raise();
        pb_pdf->raise();
        pb_word->raise();
        pushButton->raise();
        statrole->raise();
        Imprimer->raise();
        label_17->raise();
        task_e->raise();
        pb_ajouter->raise();
        pb_modifier_2->raise();
        pb_supprimer->raise();
        lineEdit->raise();
        label_18->raise();
        label_19->raise();
        refrech_pb->raise();
        search->raise();
        notepad->raise();
        tabWidget->addTab(tab, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        label_34 = new QLabel(tab_4);
        label_34->setObjectName("label_34");
        label_34->setGeometry(QRect(0, 0, 1611, 891));
        label_34->setStyleSheet(QString::fromUtf8("border-image: url(:/img/img/try1.png);"));
        groupBox_7 = new QGroupBox(tab_4);
        groupBox_7->setObjectName("groupBox_7");
        groupBox_7->setGeometry(QRect(0, -10, 1611, 901));
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
        label_53->setGeometry(QRect(230, 190, 191, 41));
        label_53->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\";"));
        rcpt = new QLineEdit(groupBox_7);
        rcpt->setObjectName("rcpt");
        rcpt->setGeometry(QRect(470, 190, 501, 30));
        rcpt->setStyleSheet(QString::fromUtf8(""));
        label_56 = new QLabel(groupBox_7);
        label_56->setObjectName("label_56");
        label_56->setGeometry(QRect(220, 350, 171, 41));
        label_56->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\";"));
        msg = new QPlainTextEdit(groupBox_7);
        msg->setObjectName("msg");
        msg->setGeometry(QRect(460, 320, 511, 150));
        sendBtn2 = new QPushButton(groupBox_7);
        sendBtn2->setObjectName("sendBtn2");
        sendBtn2->setGeometry(QRect(680, 540, 93, 28));
        timeEdit = new QTimeEdit(groupBox_7);
        timeEdit->setObjectName("timeEdit");
        timeEdit->setGeometry(QRect(590, 440, 118, 22));
        timeEdit->raise();
        label_53->raise();
        rcpt->raise();
        label_56->raise();
        msg->raise();
        sendBtn2->raise();
        tabWidget->addTab(tab_4, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        groupBox_2 = new QGroupBox(tab_2);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(-10, -10, 1591, 911));
        groupBox_2->setStyleSheet(QString::fromUtf8("\n"
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
""));
        tab_employes_2 = new QTableView(groupBox_2);
        tab_employes_2->setObjectName("tab_employes_2");
        tab_employes_2->setGeometry(QRect(70, 110, 911, 371));
        tab_employes_2->setStyleSheet(QString::fromUtf8(""));
        label_31 = new QLabel(groupBox_2);
        label_31->setObjectName("label_31");
        label_31->setGeometry(QRect(-20, 10, 1641, 891));
        label_31->setStyleSheet(QString::fromUtf8("border-image: url(:/img/img/try1.png);"));
        tableView = new QTableView(groupBox_2);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(60, 120, 911, 501));
        tabWidget->addTab(tab_2, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName("tab_5");
        label_35 = new QLabel(tab_5);
        label_35->setObjectName("label_35");
        label_35->setGeometry(QRect(0, 0, 1581, 891));
        label_35->setStyleSheet(QString::fromUtf8("border-image: url(:/img/img/try1.png);"));
        label_15 = new QLabel(tab_5);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(240, 200, 211, 61));
        label_15->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\";"));
        label_16 = new QLabel(tab_5);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(470, 240, 47, 13));
        lineEdit_2 = new QLineEdit(tab_5);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(490, 190, 351, 91));
        pushB = new QPushButton(tab_5);
        pushB->setObjectName("pushB");
        pushB->setGeometry(QRect(620, 380, 161, 41));
        pushB->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 18pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        tabWidget->addTab(tab_5, QString());
        backpb = new QPushButton(thrDialog);
        backpb->setObjectName("backpb");
        backpb->setGeometry(QRect(-20, 0, 181, 141));
        backpb->setStyleSheet(QString::fromUtf8("border-image: url(:/img/img/gearr.png);"));
        label_10 = new QLabel(thrDialog);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(-10, 0, 1851, 911));
        label_10->setStyleSheet(QString::fromUtf8("border-image: url(:/img/img/Sidebar3.png);"));
        clientpb = new QPushButton(thrDialog);
        clientpb->setObjectName("clientpb");
        clientpb->setGeometry(QRect(20, 160, 101, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Bebas Neue")});
        font1.setPointSize(20);
        clientpb->setFont(font1);
        clientpb->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/img/img/users-avatar.png"), QSize(), QIcon::Normal, QIcon::Off);
        clientpb->setIcon(icon5);
        clientpb->setIconSize(QSize(40, 40));
        pushButton_3 = new QPushButton(thrDialog);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(10, 210, 181, 51));
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/img/img/id-card.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon6);
        pushButton_3->setIconSize(QSize(40, 40));
        planningpb = new QPushButton(thrDialog);
        planningpb->setObjectName("planningpb");
        planningpb->setGeometry(QRect(20, 270, 161, 51));
        planningpb->setFont(font1);
        planningpb->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/img/img/calendar.png"), QSize(), QIcon::Normal, QIcon::Off);
        planningpb->setIcon(icon7);
        planningpb->setIconSize(QSize(40, 40));
        abonnementpb = new QPushButton(thrDialog);
        abonnementpb->setObjectName("abonnementpb");
        abonnementpb->setGeometry(QRect(20, 340, 201, 51));
        abonnementpb->setFont(font1);
        abonnementpb->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/img/img/subscription.png"), QSize(), QIcon::Normal, QIcon::Off);
        abonnementpb->setIcon(icon8);
        abonnementpb->setIconSize(QSize(40, 40));
        activitepb = new QPushButton(thrDialog);
        activitepb->setObjectName("activitepb");
        activitepb->setGeometry(QRect(0, 420, 201, 51));
        activitepb->setFont(font1);
        activitepb->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/img/img/clipboard.png"), QSize(), QIcon::Normal, QIcon::Off);
        activitepb->setIcon(icon9);
        activitepb->setIconSize(QSize(40, 40));
        logoutpb = new QPushButton(thrDialog);
        logoutpb->setObjectName("logoutpb");
        logoutpb->setGeometry(QRect(30, 740, 191, 71));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Bebas Neue")});
        font2.setPointSize(20);
        font2.setUnderline(true);
        logoutpb->setFont(font2);
        logoutpb->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;  text-decoration: underline;"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/img/img/logout.png"), QSize(), QIcon::Normal, QIcon::Off);
        logoutpb->setIcon(icon10);
        logoutpb->setIconSize(QSize(40, 40));
        label_10->raise();
        tabWidget->raise();
        backpb->raise();
        clientpb->raise();
        pushButton_3->raise();
        planningpb->raise();
        abonnementpb->raise();
        activitepb->raise();
        logoutpb->raise();

        retranslateUi(thrDialog);

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(thrDialog);
    } // setupUi

    void retranslateUi(QDialog *thrDialog)
    {
        thrDialog->setWindowTitle(QCoreApplication::translate("thrDialog", "Dialog", nullptr));
        groupBox->setTitle(QString());
        cin_e->setPlaceholderText(QCoreApplication::translate("thrDialog", "Numbers only", nullptr));
        label_4->setText(QCoreApplication::translate("thrDialog", "Role", nullptr));
        label->setText(QCoreApplication::translate("thrDialog", "name", nullptr));
        nom_e->setPlaceholderText(QCoreApplication::translate("thrDialog", "Characters only", nullptr));
        label_2->setText(QCoreApplication::translate("thrDialog", "Cin", nullptr));
        label_3->setText(QCoreApplication::translate("thrDialog", "firstname", nullptr));
        prenom_e->setPlaceholderText(QCoreApplication::translate("thrDialog", "Characters only", nullptr));
        label_6->setText(QCoreApplication::translate("thrDialog", "date of birth", nullptr));
        daten_e->setPlaceholderText(QCoreApplication::translate("thrDialog", "YYYY-MM-DD", nullptr));
        label_9->setText(QCoreApplication::translate("thrDialog", "Salary", nullptr));
        salaire_e->setPlaceholderText(QCoreApplication::translate("thrDialog", "Number only", nullptr));
        label_5->setText(QCoreApplication::translate("thrDialog", "hiring date", nullptr));
        datee_e->setPlaceholderText(QCoreApplication::translate("thrDialog", "YYYY-MM-DD", nullptr));
        role_e->setItemText(0, QCoreApplication::translate("thrDialog", "Receptioniste", nullptr));
        role_e->setItemText(1, QCoreApplication::translate("thrDialog", "Assistant", nullptr));
        role_e->setItemText(2, QCoreApplication::translate("thrDialog", "Ressource Humaine", nullptr));

        label_21->setText(QCoreApplication::translate("thrDialog", "Phone", nullptr));
        telephone_e->setPlaceholderText(QCoreApplication::translate("thrDialog", "+216", nullptr));
        label_22->setText(QCoreApplication::translate("thrDialog", "Adresse", nullptr));
        adresse_e->setPlaceholderText(QCoreApplication::translate("thrDialog", "Characters only", nullptr));
        label_23->setText(QCoreApplication::translate("thrDialog", "Email", nullptr));
        email_e->setPlaceholderText(QCoreApplication::translate("thrDialog", "email@gmail.com", nullptr));
        radioButton->setText(QCoreApplication::translate("thrDialog", "name", nullptr));
        radioButton_2->setText(QCoreApplication::translate("thrDialog", "firstname", nullptr));
        label_7->setText(QCoreApplication::translate("thrDialog", "Recherche", nullptr));
        sortAscButton->setText(QCoreApplication::translate("thrDialog", "ASCendant", nullptr));
        sortDescButton->setText(QCoreApplication::translate("thrDialog", "DESCendant", nullptr));
        bg_pb->setText(QCoreApplication::translate("thrDialog", "Background", nullptr));
        label_12->setText(QString());
        label_11->setText(QString());
        label_13->setText(QCoreApplication::translate("thrDialog", "Username", nullptr));
        user_e->setPlaceholderText(QString());
        label_14->setText(QCoreApplication::translate("thrDialog", "Password", nullptr));
        pb_pdf->setText(QCoreApplication::translate("thrDialog", "PDF", nullptr));
        pb_word->setText(QCoreApplication::translate("thrDialog", "word", nullptr));
        pushButton->setText(QCoreApplication::translate("thrDialog", "Distribution by work experience\n"
"", nullptr));
        statrole->setText(QCoreApplication::translate("thrDialog", "Role", nullptr));
        lab_chart_pie->setText(QString());
        lab_chart_bar->setText(QString());
        Imprimer->setText(QCoreApplication::translate("thrDialog", "Imprimer", nullptr));
        label_17->setText(QCoreApplication::translate("thrDialog", "Task", nullptr));
        task_e->setItemText(0, QCoreApplication::translate("thrDialog", "Schedule appointments", nullptr));
        task_e->setItemText(1, QCoreApplication::translate("thrDialog", "Responding to employee inquiries and requests.", nullptr));
        task_e->setItemText(2, QCoreApplication::translate("thrDialog", "Manage correspondence", nullptr));
        task_e->setItemText(3, QCoreApplication::translate("thrDialog", "Coordinate meetings and events", nullptr));
        task_e->setItemText(4, QCoreApplication::translate("thrDialog", "Organize supplies and inventory", nullptr));
        task_e->setItemText(5, QCoreApplication::translate("thrDialog", "Prepare reports and documents", nullptr));
        task_e->setItemText(6, QCoreApplication::translate("thrDialog", "Handle phone calls and inquiries", nullptr));
        task_e->setItemText(7, QCoreApplication::translate("thrDialog", "Support team members with various tasks", nullptr));
        task_e->setItemText(8, QCoreApplication::translate("thrDialog", "Update databases and records", nullptr));
        task_e->setItemText(9, QCoreApplication::translate("thrDialog", "Liaise with clients or customers", nullptr));
        task_e->setItemText(10, QCoreApplication::translate("thrDialog", "Manage incoming and outgoing mail", nullptr));
        task_e->setItemText(11, QCoreApplication::translate("thrDialog", "Maintain a tidy and welcoming reception area", nullptr));

        pb_ajouter->setText(QCoreApplication::translate("thrDialog", "ADD", nullptr));
        pb_modifier_2->setText(QCoreApplication::translate("thrDialog", "UPDATE", nullptr));
        pb_supprimer->setText(QCoreApplication::translate("thrDialog", "DELETE", nullptr));
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("thrDialog", "Search", nullptr));
        label_18->setText(QString());
        label_19->setText(QCoreApplication::translate("thrDialog", "YOU CAN ALSO :", nullptr));
        refrech_pb->setText(QString());
        search->setText(QString());
        notepad->setText(QCoreApplication::translate("thrDialog", "notepad", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("thrDialog", "employes", nullptr));
        label_34->setText(QString());
        groupBox_7->setTitle(QString());
        label_53->setText(QCoreApplication::translate("thrDialog", "Email", nullptr));
        label_56->setText(QCoreApplication::translate("thrDialog", "Message:", nullptr));
        sendBtn2->setText(QCoreApplication::translate("thrDialog", "Envoyer", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("thrDialog", "Mailing", nullptr));
        groupBox_2->setTitle(QString());
        label_31->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("thrDialog", "tasks for employes", nullptr));
        label_35->setText(QString());
        label_15->setText(QCoreApplication::translate("thrDialog", "Employe name", nullptr));
        label_16->setText(QString());
        pushB->setText(QCoreApplication::translate("thrDialog", "Show on lcd", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("thrDialog", "Employe of the month", nullptr));
        backpb->setText(QString());
        label_10->setText(QString());
        clientpb->setText(QCoreApplication::translate("thrDialog", "  USER", nullptr));
        pushButton_3->setText(QCoreApplication::translate("thrDialog", "  EMPLOYEE", nullptr));
        planningpb->setText(QCoreApplication::translate("thrDialog", "  PLANNING", nullptr));
        abonnementpb->setText(QCoreApplication::translate("thrDialog", " SUBSCRIPTIONS", nullptr));
        activitepb->setText(QCoreApplication::translate("thrDialog", "  ACTIVITIES", nullptr));
        logoutpb->setText(QCoreApplication::translate("thrDialog", "LOGOUT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class thrDialog: public Ui_thrDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THRDIALOG_H
