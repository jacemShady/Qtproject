/********************************************************************************
** Form generated from reading UI file 'pageabonnements.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEABONNEMENTS_H
#define UI_PAGEABONNEMENTS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
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

class Ui_Pageabonnements
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *Group;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_6;
    QLineEdit *cin_ab;
    QTableWidget *tab_abonnements;
    QLabel *label_5;
    QLineEdit *cin_c;
    QLabel *label_8;
    QLineEdit *id_a;
    QPushButton *sortAscButton;
    QPushButton *sortDescButton;
    QDateEdit *dated_ab;
    QDateEdit *datef_ab;
    QComboBox *type_ab;
    QComboBox *mode_ab;
    QLabel *label_10;
    QComboBox *prix_ab;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QLabel *lab_chart_pie;
    QLabel *lab_chart_bar;
    QGroupBox *groupBox;
    QPushButton *pushButton_3;
    QLineEdit *questionInput;
    QPushButton *pushButton_7;
    QPushButton *pushButton_6;
    QLabel *meteo;
    QLabel *label_35;
    QPushButton *pushB;
    QPushButton *pushbuzz;
    QLabel *answerOutput;
    QPushButton *pb_ajouter;
    QPushButton *pb_modifier_2;
    QPushButton *pb_supprimer;
    QLabel *label_19;
    QLabel *label_18;
    QLineEdit *lineEdit;
    QPushButton *search;
    QPushButton *refrech_pb;
    QLabel *label_7;
    QPushButton *back2pb;
    QPushButton *client2pb;
    QPushButton *employepb;
    QPushButton *activite2pb;
    QPushButton *pushButton;
    QPushButton *planning2pb;
    QPushButton *logoutpb2;

    void setupUi(QDialog *Pageabonnements)
    {
        if (Pageabonnements->objectName().isEmpty())
            Pageabonnements->setObjectName("Pageabonnements");
        Pageabonnements->resize(1699, 788);
        tabWidget = new QTabWidget(Pageabonnements);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(240, 0, 1461, 931));
        tabWidget->setStyleSheet(QString::fromUtf8("QTabWidget{\n"
"color: white;\n"
"font: 10pt \"Bebas Neue\";}"));
        tab = new QWidget();
        tab->setObjectName("tab");
        Group = new QGroupBox(tab);
        Group->setObjectName("Group");
        Group->setGeometry(QRect(0, 0, 1461, 761));
        Group->setStyleSheet(QString::fromUtf8("\n"
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
        label = new QLabel(Group);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 60, 141, 51));
        label->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\";"));
        label_2 = new QLabel(Group);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 160, 171, 41));
        label_2->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\";"));
        label_3 = new QLabel(Group);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 240, 251, 51));
        label_3->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\";"));
        label_4 = new QLabel(Group);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(270, 70, 171, 51));
        label_4->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\";"));
        label_6 = new QLabel(Group);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(270, 260, 241, 41));
        label_6->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 20pt \"Bebas Neue\";"));
        cin_ab = new QLineEdit(Group);
        cin_ab->setObjectName("cin_ab");
        cin_ab->setGeometry(QRect(20, 120, 221, 31));
        tab_abonnements = new QTableWidget(Group);
        tab_abonnements->setObjectName("tab_abonnements");
        tab_abonnements->setGeometry(QRect(490, 140, 511, 421));
        label_5 = new QLabel(Group);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 350, 151, 41));
        label_5->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\";"));
        cin_c = new QLineEdit(Group);
        cin_c->setObjectName("cin_c");
        cin_c->setGeometry(QRect(20, 400, 231, 31));
        label_8 = new QLabel(Group);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(270, 350, 171, 41));
        label_8->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\";"));
        id_a = new QLineEdit(Group);
        id_a->setObjectName("id_a");
        id_a->setGeometry(QRect(280, 400, 191, 31));
        sortAscButton = new QPushButton(Group);
        sortAscButton->setObjectName("sortAscButton");
        sortAscButton->setGeometry(QRect(490, 120, 191, 41));
        sortAscButton->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 18pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        sortDescButton = new QPushButton(Group);
        sortDescButton->setObjectName("sortDescButton");
        sortDescButton->setGeometry(QRect(680, 120, 181, 41));
        sortDescButton->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 18pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        dated_ab = new QDateEdit(Group);
        dated_ab->setObjectName("dated_ab");
        dated_ab->setGeometry(QRect(20, 210, 241, 31));
        datef_ab = new QDateEdit(Group);
        datef_ab->setObjectName("datef_ab");
        datef_ab->setGeometry(QRect(20, 300, 241, 31));
        type_ab = new QComboBox(Group);
        type_ab->addItem(QString());
        type_ab->addItem(QString());
        type_ab->addItem(QString());
        type_ab->addItem(QString());
        type_ab->addItem(QString());
        type_ab->addItem(QString());
        type_ab->addItem(QString());
        type_ab->setObjectName("type_ab");
        type_ab->setGeometry(QRect(280, 130, 191, 31));
        mode_ab = new QComboBox(Group);
        mode_ab->addItem(QString());
        mode_ab->addItem(QString());
        mode_ab->addItem(QString());
        mode_ab->setObjectName("mode_ab");
        mode_ab->setGeometry(QRect(280, 300, 181, 31));
        label_10 = new QLabel(Group);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(270, 170, 191, 41));
        label_10->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\";"));
        prix_ab = new QComboBox(Group);
        prix_ab->addItem(QString());
        prix_ab->addItem(QString());
        prix_ab->addItem(QString());
        prix_ab->setObjectName("prix_ab");
        prix_ab->setGeometry(QRect(280, 220, 181, 31));
        pushButton_2 = new QPushButton(Group);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(1190, 220, 161, 41));
        pushButton_4 = new QPushButton(Group);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(1160, 450, 211, 41));
        pushButton_4->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 18pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        pushButton_5 = new QPushButton(Group);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(1160, 520, 211, 41));
        pushButton_5->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 18pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        lab_chart_pie = new QLabel(Group);
        lab_chart_pie->setObjectName("lab_chart_pie");
        lab_chart_pie->setGeometry(QRect(540, 160, 541, 451));
        lab_chart_bar = new QLabel(Group);
        lab_chart_bar->setObjectName("lab_chart_bar");
        lab_chart_bar->setGeometry(QRect(600, 150, 451, 391));
        groupBox = new QGroupBox(Group);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(490, 570, 511, 141));
        groupBox->setStyleSheet(QString::fromUtf8(" none;color: white;\n"
"font: 15pt \"Bebas Neue\";"));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(20, 90, 211, 41));
        pushButton_3->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 18pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        questionInput = new QLineEdit(groupBox);
        questionInput->setObjectName("questionInput");
        questionInput->setGeometry(QRect(320, 10, 191, 131));
        pushButton_7 = new QPushButton(groupBox);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(170, 30, 141, 41));
        pushButton_7->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 18pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        pushButton_6 = new QPushButton(groupBox);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(20, 30, 131, 41));
        pushButton_6->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 18pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        meteo = new QLabel(Group);
        meteo->setObjectName("meteo");
        meteo->setGeometry(QRect(620, 170, 401, 371));
        label_35 = new QLabel(Group);
        label_35->setObjectName("label_35");
        label_35->setGeometry(QRect(-10, -10, 1491, 801));
        label_35->setStyleSheet(QString::fromUtf8("border-image: url(:/img/img/try1.png);"));
        pushB = new QPushButton(Group);
        pushB->setObjectName("pushB");
        pushB->setGeometry(QRect(260, 670, 141, 41));
        pushB->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 18pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        pushbuzz = new QPushButton(Group);
        pushbuzz->setObjectName("pushbuzz");
        pushbuzz->setGeometry(QRect(60, 670, 181, 41));
        pushbuzz->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 18pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        answerOutput = new QLabel(Group);
        answerOutput->setObjectName("answerOutput");
        answerOutput->setGeometry(QRect(680, 300, 331, 241));
        pb_ajouter = new QPushButton(Group);
        pb_ajouter->setObjectName("pb_ajouter");
        pb_ajouter->setGeometry(QRect(340, 490, 101, 41));
        pb_ajouter->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 20pt \"Bebas Neue\";"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_ajouter->setIcon(icon);
        pb_ajouter->setIconSize(QSize(20, 20));
        pb_modifier_2 = new QPushButton(Group);
        pb_modifier_2->setObjectName("pb_modifier_2");
        pb_modifier_2->setGeometry(QRect(190, 490, 121, 41));
        pb_modifier_2->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 20pt \"Bebas Neue\";"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/img/pen.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_modifier_2->setIcon(icon1);
        pb_modifier_2->setIconSize(QSize(20, 20));
        pb_supprimer = new QPushButton(Group);
        pb_supprimer->setObjectName("pb_supprimer");
        pb_supprimer->setGeometry(QRect(50, 490, 131, 41));
        pb_supprimer->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 20pt \"Bebas Neue\";"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/img/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_supprimer->setIcon(icon2);
        pb_supprimer->setIconSize(QSize(20, 20));
        label_19 = new QLabel(Group);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(1150, 150, 281, 51));
        label_19->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 30pt \"Bebas Neue\";"));
        label_18 = new QLabel(Group);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(1240, 370, 71, 61));
        label_18->setStyleSheet(QString::fromUtf8("image: url(:/img/img/stats.png);"));
        lineEdit = new QLineEdit(Group);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(860, 120, 141, 41));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: #f0f0f0;\n"
"border: 5px solid #ccc;\n"
"padding: 5px;\n"
"border: 1px solid #0078d7;\n"
"font: 12pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        lineEdit->setAlignment(Qt::AlignCenter);
        search = new QPushButton(Group);
        search->setObjectName("search");
        search->setGeometry(QRect(960, 120, 41, 41));
        search->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\"; text-decoration: underline;"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/img/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        search->setIcon(icon3);
        search->setIconSize(QSize(16, 16));
        refrech_pb = new QPushButton(Group);
        refrech_pb->setObjectName("refrech_pb");
        refrech_pb->setGeometry(QRect(860, 120, 41, 41));
        refrech_pb->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\"; text-decoration: underline;"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/img/load.png"), QSize(), QIcon::Normal, QIcon::Off);
        refrech_pb->setIcon(icon4);
        refrech_pb->setIconSize(QSize(20, 20));
        label_35->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_6->raise();
        cin_ab->raise();
        label_5->raise();
        cin_c->raise();
        label_8->raise();
        id_a->raise();
        dated_ab->raise();
        datef_ab->raise();
        type_ab->raise();
        mode_ab->raise();
        label_10->raise();
        prix_ab->raise();
        pushButton_2->raise();
        pushButton_4->raise();
        pushButton_5->raise();
        lab_chart_pie->raise();
        lab_chart_bar->raise();
        groupBox->raise();
        meteo->raise();
        pushB->raise();
        pushbuzz->raise();
        answerOutput->raise();
        tab_abonnements->raise();
        sortAscButton->raise();
        sortDescButton->raise();
        pb_ajouter->raise();
        pb_modifier_2->raise();
        pb_supprimer->raise();
        label_19->raise();
        label_18->raise();
        lineEdit->raise();
        search->raise();
        refrech_pb->raise();
        tabWidget->addTab(tab, QString());
        label_7 = new QLabel(Pageabonnements);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(-450, -60, 691, 851));
        label_7->setStyleSheet(QString::fromUtf8("border-image: url(:/img/img/Sidebar3.png);"));
        back2pb = new QPushButton(Pageabonnements);
        back2pb->setObjectName("back2pb");
        back2pb->setGeometry(QRect(-30, -30, 221, 151));
        back2pb->setStyleSheet(QString::fromUtf8("border-image: url(:/img/img/gearr.png);"));
        client2pb = new QPushButton(Pageabonnements);
        client2pb->setObjectName("client2pb");
        client2pb->setGeometry(QRect(20, 140, 101, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Bebas Neue")});
        font.setPointSize(20);
        client2pb->setFont(font);
        client2pb->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/img/img/users-avatar.png"), QSize(), QIcon::Normal, QIcon::Off);
        client2pb->setIcon(icon5);
        client2pb->setIconSize(QSize(40, 40));
        employepb = new QPushButton(Pageabonnements);
        employepb->setObjectName("employepb");
        employepb->setGeometry(QRect(10, 190, 181, 51));
        employepb->setFont(font);
        employepb->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/img/img/id-card.png"), QSize(), QIcon::Normal, QIcon::Off);
        employepb->setIcon(icon6);
        employepb->setIconSize(QSize(40, 40));
        activite2pb = new QPushButton(Pageabonnements);
        activite2pb->setObjectName("activite2pb");
        activite2pb->setGeometry(QRect(10, 250, 161, 51));
        activite2pb->setFont(font);
        activite2pb->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/img/img/calendar.png"), QSize(), QIcon::Normal, QIcon::Off);
        activite2pb->setIcon(icon7);
        activite2pb->setIconSize(QSize(40, 40));
        pushButton = new QPushButton(Pageabonnements);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 310, 201, 51));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/img/img/subscription.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon8);
        pushButton->setIconSize(QSize(40, 40));
        planning2pb = new QPushButton(Pageabonnements);
        planning2pb->setObjectName("planning2pb");
        planning2pb->setGeometry(QRect(0, 380, 201, 51));
        planning2pb->setFont(font);
        planning2pb->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/img/img/clipboard.png"), QSize(), QIcon::Normal, QIcon::Off);
        planning2pb->setIcon(icon9);
        planning2pb->setIconSize(QSize(40, 40));
        logoutpb2 = new QPushButton(Pageabonnements);
        logoutpb2->setObjectName("logoutpb2");
        logoutpb2->setGeometry(QRect(-10, 630, 191, 71));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Bebas Neue")});
        font1.setPointSize(20);
        font1.setUnderline(true);
        logoutpb2->setFont(font1);
        logoutpb2->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;  text-decoration: underline;"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/img/img/logout.png"), QSize(), QIcon::Normal, QIcon::Off);
        logoutpb2->setIcon(icon10);
        logoutpb2->setIconSize(QSize(40, 40));
        label_7->raise();
        tabWidget->raise();
        back2pb->raise();
        client2pb->raise();
        employepb->raise();
        activite2pb->raise();
        pushButton->raise();
        planning2pb->raise();
        logoutpb2->raise();

        retranslateUi(Pageabonnements);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Pageabonnements);
    } // setupUi

    void retranslateUi(QDialog *Pageabonnements)
    {
        Pageabonnements->setWindowTitle(QCoreApplication::translate("Pageabonnements", "Dialog", nullptr));
        Group->setTitle(QString());
        label->setText(QCoreApplication::translate("Pageabonnements", "Cin", nullptr));
        label_2->setText(QCoreApplication::translate("Pageabonnements", "Start date\n"
"", nullptr));
        label_3->setText(QCoreApplication::translate("Pageabonnements", "End date\n"
"", nullptr));
        label_4->setText(QCoreApplication::translate("Pageabonnements", "Sport type\n"
"", nullptr));
        label_6->setText(QCoreApplication::translate("Pageabonnements", "Payment Method\n"
"", nullptr));
        label_5->setText(QCoreApplication::translate("Pageabonnements", "cin client", nullptr));
        label_8->setText(QCoreApplication::translate("Pageabonnements", "Activity ID\n"
"", nullptr));
        sortAscButton->setText(QCoreApplication::translate("Pageabonnements", "ASCendant", nullptr));
        sortDescButton->setText(QCoreApplication::translate("Pageabonnements", "DESCendant", nullptr));
        type_ab->setItemText(0, QCoreApplication::translate("Pageabonnements", "KAYAKING", nullptr));
        type_ab->setItemText(1, QCoreApplication::translate("Pageabonnements", "JETSKY", nullptr));
        type_ab->setItemText(2, QCoreApplication::translate("Pageabonnements", "WIND SURFING", nullptr));
        type_ab->setItemText(3, QCoreApplication::translate("Pageabonnements", "SAIING", nullptr));
        type_ab->setItemText(4, QCoreApplication::translate("Pageabonnements", "SAILING", nullptr));
        type_ab->setItemText(5, QCoreApplication::translate("Pageabonnements", "PARASAILING", nullptr));
        type_ab->setItemText(6, QCoreApplication::translate("Pageabonnements", "SCABADIVING", nullptr));

        mode_ab->setItemText(0, QCoreApplication::translate("Pageabonnements", "CARTE BANCAIRE", nullptr));
        mode_ab->setItemText(1, QCoreApplication::translate("Pageabonnements", "ESPECE", nullptr));
        mode_ab->setItemText(2, QCoreApplication::translate("Pageabonnements", "CHEQUE BANCAIRE", nullptr));

        label_10->setText(QCoreApplication::translate("Pageabonnements", "sport price", nullptr));
        prix_ab->setItemText(0, QCoreApplication::translate("Pageabonnements", "PACK MENSUEL 500 DT", nullptr));
        prix_ab->setItemText(1, QCoreApplication::translate("Pageabonnements", "PACK PRIMUN 3 MONTHS 1000 DT", nullptr));
        prix_ab->setItemText(2, QCoreApplication::translate("Pageabonnements", "PACK ONETIME A DAY 50 DT", nullptr));

        pushButton_2->setText(QCoreApplication::translate("Pageabonnements", "PDF", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Pageabonnements", "Stats Par type AB", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Pageabonnements", "Stats par Activit\303\251", nullptr));
        lab_chart_pie->setText(QString());
        lab_chart_bar->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("Pageabonnements", "Fonctionalit\303\251s Avanc\303\251es", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Pageabonnements", "AI-ASSISTANT", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Pageabonnements", "Historique", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Pageabonnements", "Transaction", nullptr));
        meteo->setText(QString());
        label_35->setText(QString());
        pushB->setText(QCoreApplication::translate("Pageabonnements", "Buzzer", nullptr));
        pushbuzz->setText(QCoreApplication::translate("Pageabonnements", "Start the buzzer", nullptr));
        answerOutput->setText(QString());
        pb_ajouter->setText(QCoreApplication::translate("Pageabonnements", "ADD", nullptr));
        pb_modifier_2->setText(QCoreApplication::translate("Pageabonnements", "UPDATE", nullptr));
        pb_supprimer->setText(QCoreApplication::translate("Pageabonnements", "DELETE", nullptr));
        label_19->setText(QCoreApplication::translate("Pageabonnements", "YOU CAN ALSO :", nullptr));
        label_18->setText(QString());
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("Pageabonnements", "Search", nullptr));
        search->setText(QString());
        refrech_pb->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Pageabonnements", "subscriptions", nullptr));
        label_7->setText(QString());
        back2pb->setText(QString());
        client2pb->setText(QCoreApplication::translate("Pageabonnements", "  USER", nullptr));
        employepb->setText(QCoreApplication::translate("Pageabonnements", "  EMPLOYEE", nullptr));
        activite2pb->setText(QCoreApplication::translate("Pageabonnements", "  PLANNING", nullptr));
        pushButton->setText(QCoreApplication::translate("Pageabonnements", " SUBSCRIPTIONS", nullptr));
        planning2pb->setText(QCoreApplication::translate("Pageabonnements", "  ACTIVITIES", nullptr));
        logoutpb2->setText(QCoreApplication::translate("Pageabonnements", "LOGOUT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Pageabonnements: public Ui_Pageabonnements {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEABONNEMENTS_H
