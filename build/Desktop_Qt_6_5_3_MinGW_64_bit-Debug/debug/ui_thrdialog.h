/********************************************************************************
** Form generated from reading UI file 'thrdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THRDIALOG_H
#define UI_THRDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
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
    QPushButton *sortAscButton;
    QPushButton *sortDescButton;
    QLabel *label_12;
    QLabel *label_11;
    QLabel *label_13;
    QLineEdit *user_e;
    QLabel *label_14;
    QLineEdit *pas_e;
    QPushButton *pb_pdf;
    QPushButton *statrole;
    QLabel *lab_chart_bar;
    QLabel *label_17;
    QComboBox *task_e;
    QPushButton *pb_ajouter;
    QPushButton *pb_modifier_2;
    QPushButton *pb_supprimer;
    QLineEdit *lineEdit;
    QLabel *label_19;
    QPushButton *refrech_pb;
    QPushButton *search;
    QPushButton *ord;
    QRadioButton *radioButton_3;
    QWidget *lab_chart_pie;
    QLabel *label_10;
    QPushButton *pushButton_3;
    QPushButton *condpb;
    QPushButton *logoutpb;

    void setupUi(QDialog *thrDialog)
    {
        if (thrDialog->objectName().isEmpty())
            thrDialog->setObjectName(QStringLiteral("thrDialog"));
        thrDialog->resize(1470, 1000);
        tabWidget = new QTabWidget(thrDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 100, 1861, 1011));
        tabWidget->setStyleSheet(QLatin1String("/* Style for QRadioButton */\n"
"QRadioButton {\n"
"    color: white; /* Text color for radio buttons */\n"
"    font-size: 16px; /* Font size */\n"
"    font-weight: bold; /* Bold text */\n"
"    margin: 5px; /* Margin around radio buttons */\n"
"}\n"
"\n"
"/* Style for QLineEdit (input box) */\n"
"QLineEdit {\n"
"    background-color: #ffffff; /* White background for input boxes */\n"
"    border: 1px solid #3498db; /* Blue border */\n"
"    border-radius: 5px; /* Rounded corners */\n"
"    padding: 5px; /* Padding inside the input box */\n"
"    color: black; /* Text color inside input boxes */\n"
"}\n"
"\n"
"/* Style for QLabel (text label) */\n"
"QLabel {\n"
"    color: black; /* Text color for labels */\n"
"    font-size: 16px; /* Font size */\n"
"    font-weight: bold; /* Bold text */\n"
"    margin: 5px; /* Margin around labels */\n"
"}\n"
"\n"
"/* Style for QPushButton */\n"
"QPushButton {\n"
"    background-color: #3498db; /* Blue color for buttons */\n"
"    border: 1px solid #2980b9; /* Darker blue"
                        " border */\n"
"    border-radius: 5px; /* Rounded corners */\n"
"    padding: 5px 10px; /* Padding inside buttons */\n"
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
"/* Style for QTabWidget */\n"
"QTabWidget {\n"
"    color: white; /* Text color for tab widget */\n"
"    font: 10pt \"Bebas Neue\"; /* Font style and size */\n"
"}\n"
""));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(-40, 0, 1861, 891));
        groupBox->setStyleSheet(QLatin1String("\n"
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
        cin_e->setObjectName(QStringLiteral("cin_e"));
        cin_e->setGeometry(QRect(60, 110, 181, 31));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(280, 440, 111, 41));
        label_4->setStyleSheet(QLatin1String("background-color: transparent; border: none;color:  black;\n"
"font: 22pt \"Bebas Neue\";"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(280, 69, 121, 41));
        label->setStyleSheet(QLatin1String("background-color: transparent; border: none;color:  black;\n"
"font: 22pt \"Bebas Neue\";"));
        nom_e = new QLineEdit(groupBox);
        nom_e->setObjectName(QStringLiteral("nom_e"));
        nom_e->setGeometry(QRect(290, 110, 191, 31));
        nom_e->setStyleSheet(QStringLiteral(""));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 70, 91, 41));
        label_2->setStyleSheet(QLatin1String("background-color: transparent; border: none;color:  black;\n"
"font: 22pt \"Bebas Neue\";"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 149, 191, 41));
        label_3->setStyleSheet(QLatin1String("background-color: transparent; border: none;color:  black;\n"
"font: 22pt \"Bebas Neue\";"));
        prenom_e = new QLineEdit(groupBox);
        prenom_e->setObjectName(QStringLiteral("prenom_e"));
        prenom_e->setGeometry(QRect(60, 200, 181, 31));
        prenom_e->setStyleSheet(QStringLiteral(""));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(50, 340, 241, 51));
        label_6->setStyleSheet(QLatin1String("background-color: transparent; border: none;color:  black;\n"
"font: 22pt \"Bebas Neue\";"));
        daten_e = new QLineEdit(groupBox);
        daten_e->setObjectName(QStringLiteral("daten_e"));
        daten_e->setGeometry(QRect(60, 400, 191, 31));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(280, 350, 121, 41));
        label_9->setStyleSheet(QLatin1String("background-color: transparent; border: none;color:  black;\n"
"font: 22pt \"Bebas Neue\";"));
        salaire_e = new QLineEdit(groupBox);
        salaire_e->setObjectName(QStringLiteral("salaire_e"));
        salaire_e->setGeometry(QRect(290, 400, 191, 31));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 440, 221, 51));
        label_5->setStyleSheet(QLatin1String("background-color: transparent; border: none;color:  black;\n"
"font: 22pt \"Bebas Neue\";"));
        datee_e = new QLineEdit(groupBox);
        datee_e->setObjectName(QStringLiteral("datee_e"));
        datee_e->setGeometry(QRect(60, 490, 201, 31));
        tab_employes = new QTableView(groupBox);
        tab_employes->setObjectName(QStringLiteral("tab_employes"));
        tab_employes->setGeometry(QRect(520, 110, 661, 631));
        tab_employes->setStyleSheet(QStringLiteral(""));
        role_e = new QComboBox(groupBox);
        role_e->setObjectName(QStringLiteral("role_e"));
        role_e->setGeometry(QRect(290, 490, 191, 31));
        label_21 = new QLabel(groupBox);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(50, 250, 151, 41));
        label_21->setStyleSheet(QLatin1String("background-color: transparent; border: none;color: black;\n"
"font: 22pt \"Bebas Neue\";"));
        telephone_e = new QLineEdit(groupBox);
        telephone_e->setObjectName(QStringLiteral("telephone_e"));
        telephone_e->setGeometry(QRect(60, 300, 181, 31));
        label_22 = new QLabel(groupBox);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(280, 150, 121, 41));
        label_22->setStyleSheet(QLatin1String("background-color: transparent; border: none;color:  black;\n"
"font: 22pt \"Bebas Neue\";"));
        adresse_e = new QLineEdit(groupBox);
        adresse_e->setObjectName(QStringLiteral("adresse_e"));
        adresse_e->setGeometry(QRect(290, 200, 201, 31));
        label_23 = new QLabel(groupBox);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(280, 250, 81, 41));
        label_23->setStyleSheet(QLatin1String("background-color: transparent; border: none;color:  black;\n"
"font: 22pt \"Bebas Neue\";"));
        email_e = new QLineEdit(groupBox);
        email_e->setObjectName(QStringLiteral("email_e"));
        email_e->setGeometry(QRect(290, 300, 201, 31));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(530, 20, 141, 41));
        radioButton->setStyleSheet(QLatin1String("background-color: transparent; border: none;color: black;\n"
"font: 22pt \"Bebas Neue\";"));
        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(670, 10, 171, 61));
        radioButton_2->setStyleSheet(QLatin1String("background-color: transparent; border: none;color:  black;\n"
"font: 22pt \"Bebas Neue\";"));
        sortAscButton = new QPushButton(groupBox);
        sortAscButton->setObjectName(QStringLiteral("sortAscButton"));
        sortAscButton->setGeometry(QRect(520, 90, 221, 31));
        sortAscButton->setStyleSheet(QLatin1String("color: white;\n"
"font: 18pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        sortDescButton = new QPushButton(groupBox);
        sortDescButton->setObjectName(QStringLiteral("sortDescButton"));
        sortDescButton->setGeometry(QRect(740, 90, 241, 31));
        sortDescButton->setStyleSheet(QLatin1String("color: white;\n"
"font: 18pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(0, 0, 1501, 921));
        label_12->setStyleSheet(QStringLiteral("border-image: url(:/img/img/sports-nautiques.jpg);"));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(20, -20, 2081, 991));
        label_11->setStyleSheet(QStringLiteral("border-image: url(:/img/img/OIP (2).jfif);"));
        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(50, 540, 171, 41));
        label_13->setStyleSheet(QLatin1String("background-color: transparent; border: none;color: black;\n"
"font: 22pt \"Bebas Neue\";"));
        user_e = new QLineEdit(groupBox);
        user_e->setObjectName(QStringLiteral("user_e"));
        user_e->setGeometry(QRect(60, 590, 201, 31));
        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(280, 530, 121, 51));
        label_14->setStyleSheet(QLatin1String("background-color: transparent; border: none;color:  black;\n"
"font: 22pt \"Bebas Neue\";"));
        pas_e = new QLineEdit(groupBox);
        pas_e->setObjectName(QStringLiteral("pas_e"));
        pas_e->setGeometry(QRect(290, 590, 191, 31));
        pb_pdf = new QPushButton(groupBox);
        pb_pdf->setObjectName(QStringLiteral("pb_pdf"));
        pb_pdf->setGeometry(QRect(1260, 210, 121, 41));
        pb_pdf->setStyleSheet(QLatin1String("color: white;\n"
"font: 18pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        statrole = new QPushButton(groupBox);
        statrole->setObjectName(QStringLiteral("statrole"));
        statrole->setGeometry(QRect(1210, 580, 271, 41));
        statrole->setStyleSheet(QLatin1String("color: white;\n"
"font: 18pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        lab_chart_bar = new QLabel(groupBox);
        lab_chart_bar->setObjectName(QStringLiteral("lab_chart_bar"));
        lab_chart_bar->setGeometry(QRect(940, 200, 541, 701));
        QFont font;
        font.setFamily(QStringLiteral("Yu Gothic UI Semibold"));
        font.setBold(true);
        font.setWeight(75);
        lab_chart_bar->setFont(font);
        label_17 = new QLabel(groupBox);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(220, 630, 101, 41));
        label_17->setStyleSheet(QLatin1String("background-color: transparent; border: none;color:  black;\n"
"font: 22pt \"Bebas Neue\";"));
        task_e = new QComboBox(groupBox);
        task_e->setObjectName(QStringLiteral("task_e"));
        task_e->setGeometry(QRect(130, 680, 301, 41));
        task_e->setStyleSheet(QLatin1String("color: white;\n"
"font: 18pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        pb_ajouter = new QPushButton(groupBox);
        pb_ajouter->setObjectName(QStringLiteral("pb_ajouter"));
        pb_ajouter->setGeometry(QRect(390, 760, 121, 71));
        pb_ajouter->setStyleSheet(QStringLiteral(""));
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/img/plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_ajouter->setIcon(icon);
        pb_ajouter->setIconSize(QSize(20, 20));
        pb_modifier_2 = new QPushButton(groupBox);
        pb_modifier_2->setObjectName(QStringLiteral("pb_modifier_2"));
        pb_modifier_2->setGeometry(QRect(250, 760, 121, 71));
        pb_modifier_2->setStyleSheet(QStringLiteral(""));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/img/img/pen.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_modifier_2->setIcon(icon1);
        pb_modifier_2->setIconSize(QSize(20, 20));
        pb_supprimer = new QPushButton(groupBox);
        pb_supprimer->setObjectName(QStringLiteral("pb_supprimer"));
        pb_supprimer->setGeometry(QRect(90, 760, 121, 71));
        pb_supprimer->setStyleSheet(QStringLiteral(""));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/img/img/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_supprimer->setIcon(icon2);
        pb_supprimer->setIconSize(QSize(20, 20));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(1030, 20, 151, 41));
        lineEdit->setStyleSheet(QLatin1String("background-color: #f0f0f0;\n"
"border: 5px solid #ccc;\n"
"padding: 5px;\n"
"border: 1px solid #0078d7;\n"
"font: 12pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        lineEdit->setAlignment(Qt::AlignCenter);
        label_19 = new QLabel(groupBox);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(1240, 130, 281, 51));
        label_19->setStyleSheet(QLatin1String("background-color: transparent; border: none;color:  black;\n"
"font: 30pt \"Bebas Neue\";"));
        refrech_pb = new QPushButton(groupBox);
        refrech_pb->setObjectName(QStringLiteral("refrech_pb"));
        refrech_pb->setGeometry(QRect(1030, 20, 41, 41));
        refrech_pb->setStyleSheet(QLatin1String("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\"; text-decoration: underline;"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/img/img/load.png"), QSize(), QIcon::Normal, QIcon::Off);
        refrech_pb->setIcon(icon3);
        refrech_pb->setIconSize(QSize(20, 20));
        search = new QPushButton(groupBox);
        search->setObjectName(QStringLiteral("search"));
        search->setGeometry(QRect(1140, 20, 41, 41));
        search->setStyleSheet(QLatin1String("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\"; text-decoration: underline;"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/img/img/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        search->setIcon(icon4);
        search->setIconSize(QSize(16, 16));
        ord = new QPushButton(groupBox);
        ord->setObjectName(QStringLiteral("ord"));
        ord->setGeometry(QRect(980, 90, 201, 31));
        ord->setStyleSheet(QLatin1String("color: white;\n"
"font: 18pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        radioButton_3 = new QRadioButton(groupBox);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(870, 20, 121, 41));
        radioButton_3->setStyleSheet(QLatin1String("background-color: transparent; border: none;color:  black;\n"
"font: 22pt \"Bebas Neue\";"));
        lab_chart_pie = new QWidget(groupBox);
        lab_chart_pie->setObjectName(QStringLiteral("lab_chart_pie"));
        lab_chart_pie->setGeometry(QRect(660, 230, 591, 581));
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
        sortAscButton->raise();
        sortDescButton->raise();
        label_13->raise();
        user_e->raise();
        label_14->raise();
        pas_e->raise();
        pb_pdf->raise();
        statrole->raise();
        label_17->raise();
        task_e->raise();
        pb_ajouter->raise();
        pb_modifier_2->raise();
        pb_supprimer->raise();
        lineEdit->raise();
        label_19->raise();
        refrech_pb->raise();
        search->raise();
        ord->raise();
        radioButton_3->raise();
        lab_chart_pie->raise();
        tabWidget->addTab(tab, QString());
        label_10 = new QLabel(thrDialog);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, -40, 1851, 911));
        label_10->setStyleSheet(QStringLiteral("border-image: url(:/img/img/R (1).jfif);"));
        pushButton_3 = new QPushButton(thrDialog);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(80, 40, 371, 51));
        QFont font1;
        font1.setFamily(QStringLiteral("Bebas Neue"));
        font1.setPointSize(20);
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QStringLiteral("background-color: transparent; border: none;color: black;"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/img/img/415287996_755433109383168_7582230033290630906_n.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon5);
        pushButton_3->setIconSize(QSize(40, 40));
        condpb = new QPushButton(thrDialog);
        condpb->setObjectName(QStringLiteral("condpb"));
        condpb->setGeometry(QRect(570, 40, 411, 51));
        condpb->setFont(font1);
        condpb->setStyleSheet(QStringLiteral("background-color: transparent; border: none;color: black;"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/img/img/415260602_915404969798523_5173262210140723394_n.png"), QSize(), QIcon::Normal, QIcon::Off);
        condpb->setIcon(icon6);
        condpb->setIconSize(QSize(40, 40));
        logoutpb = new QPushButton(thrDialog);
        logoutpb->setObjectName(QStringLiteral("logoutpb"));
        logoutpb->setGeometry(QRect(1110, 30, 221, 81));
        QFont font2;
        font2.setFamily(QStringLiteral("Bebas Neue"));
        font2.setPointSize(20);
        font2.setUnderline(true);
        logoutpb->setFont(font2);
        logoutpb->setStyleSheet(QStringLiteral("background-color: transparent; border: none;color: white;  text-decoration: underline;"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/img/img/4400629.png"), QSize(), QIcon::Normal, QIcon::Off);
        logoutpb->setIcon(icon7);
        logoutpb->setIconSize(QSize(40, 40));
        label_10->raise();
        tabWidget->raise();
        pushButton_3->raise();
        condpb->raise();
        logoutpb->raise();

        retranslateUi(thrDialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(thrDialog);
    } // setupUi

    void retranslateUi(QDialog *thrDialog)
    {
        thrDialog->setWindowTitle(QApplication::translate("thrDialog", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QString());
        cin_e->setPlaceholderText(QApplication::translate("thrDialog", "Numbers only", Q_NULLPTR));
        label_4->setText(QApplication::translate("thrDialog", "Role", Q_NULLPTR));
        label->setText(QApplication::translate("thrDialog", "name", Q_NULLPTR));
        nom_e->setPlaceholderText(QApplication::translate("thrDialog", "Characters only", Q_NULLPTR));
        label_2->setText(QApplication::translate("thrDialog", "Cin", Q_NULLPTR));
        label_3->setText(QApplication::translate("thrDialog", "firstname", Q_NULLPTR));
        prenom_e->setPlaceholderText(QApplication::translate("thrDialog", "Characters only", Q_NULLPTR));
        label_6->setText(QApplication::translate("thrDialog", "date of birth", Q_NULLPTR));
        daten_e->setPlaceholderText(QApplication::translate("thrDialog", "YYYY-MM-DD", Q_NULLPTR));
        label_9->setText(QApplication::translate("thrDialog", "Salary", Q_NULLPTR));
        salaire_e->setPlaceholderText(QApplication::translate("thrDialog", "Number only", Q_NULLPTR));
        label_5->setText(QApplication::translate("thrDialog", "hiring date", Q_NULLPTR));
        datee_e->setPlaceholderText(QApplication::translate("thrDialog", "YYYY-MM-DD", Q_NULLPTR));
        role_e->clear();
        role_e->insertItems(0, QStringList()
         << QApplication::translate("thrDialog", "Receptioniste", Q_NULLPTR)
         << QApplication::translate("thrDialog", "Assistant", Q_NULLPTR)
         << QApplication::translate("thrDialog", "Ressource Humaine", Q_NULLPTR)
        );
        label_21->setText(QApplication::translate("thrDialog", "Phone", Q_NULLPTR));
        telephone_e->setPlaceholderText(QApplication::translate("thrDialog", "+216", Q_NULLPTR));
        label_22->setText(QApplication::translate("thrDialog", "Adresse", Q_NULLPTR));
        adresse_e->setPlaceholderText(QApplication::translate("thrDialog", "Characters only", Q_NULLPTR));
        label_23->setText(QApplication::translate("thrDialog", "Email", Q_NULLPTR));
        email_e->setPlaceholderText(QApplication::translate("thrDialog", "email@gmail.com", Q_NULLPTR));
        radioButton->setText(QApplication::translate("thrDialog", "nom", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("thrDialog", "prenom", Q_NULLPTR));
        sortAscButton->setText(QApplication::translate("thrDialog", "ASCendant", Q_NULLPTR));
        sortDescButton->setText(QApplication::translate("thrDialog", "DESCendant", Q_NULLPTR));
        label_12->setText(QString());
        label_11->setText(QString());
        label_13->setText(QApplication::translate("thrDialog", "Username", Q_NULLPTR));
        user_e->setPlaceholderText(QString());
        label_14->setText(QApplication::translate("thrDialog", "Password", Q_NULLPTR));
        pb_pdf->setText(QApplication::translate("thrDialog", "pdf", Q_NULLPTR));
        statrole->setText(QApplication::translate("thrDialog", "Role", Q_NULLPTR));
        lab_chart_bar->setText(QString());
        label_17->setText(QApplication::translate("thrDialog", "Task", Q_NULLPTR));
        task_e->clear();
        task_e->insertItems(0, QStringList()
         << QApplication::translate("thrDialog", "Schedule appointments", Q_NULLPTR)
         << QApplication::translate("thrDialog", "Manage correspondence", Q_NULLPTR)
         << QApplication::translate("thrDialog", "Coordinate meetings", Q_NULLPTR)
         << QApplication::translate("thrDialog", "Organize supplies", Q_NULLPTR)
         << QApplication::translate("thrDialog", "Prepare reports ", Q_NULLPTR)
         << QApplication::translate("thrDialog", "Handle phone calls ", Q_NULLPTR)
         << QApplication::translate("thrDialog", "Support team ", Q_NULLPTR)
         << QApplication::translate("thrDialog", "Update databases", Q_NULLPTR)
         << QApplication::translate("thrDialog", "Manage mails", Q_NULLPTR)
        );
        pb_ajouter->setText(QString());
        pb_modifier_2->setText(QString());
        pb_supprimer->setText(QString());
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QApplication::translate("thrDialog", "Search", Q_NULLPTR));
        label_19->setText(QApplication::translate("thrDialog", "export", Q_NULLPTR));
        refrech_pb->setText(QString());
        search->setText(QString());
        ord->setText(QApplication::translate("thrDialog", "Original", Q_NULLPTR));
        radioButton_3->setText(QApplication::translate("thrDialog", "cin", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QString());
        label_10->setText(QString());
        pushButton_3->setText(QApplication::translate("thrDialog", "  EMPLOYEE", Q_NULLPTR));
        condpb->setText(QApplication::translate("thrDialog", "CONDIDAT", Q_NULLPTR));
        logoutpb->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class thrDialog: public Ui_thrDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THRDIALOG_H
