/********************************************************************************
** Form generated from reading UI file 'pagemenu.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEMENU_H
#define UI_PAGEMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_pagemenu
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QLabel *label_nom;
    QLabel *label_prenom;
    QLabel *label_role;

    void setupUi(QDialog *pagemenu)
    {
        if (pagemenu->objectName().isEmpty())
            pagemenu->setObjectName(QStringLiteral("pagemenu"));
        pagemenu->resize(1470, 1000);
        pagemenu->setStyleSheet(QStringLiteral(""));
        label = new QLabel(pagemenu);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(-300, -170, 1871, 1411));
        label->setMinimumSize(QSize(1871, 0));
        label->setMaximumSize(QSize(1871, 1411));
        label->setStyleSheet(QLatin1String("border-image: url(:/img/img/OIP (2).jfif);\n"
"\n"
"/* Style for QLabel */\n"
"QLabel {\n"
"    color: white; /* Text color for labels to match the overall theme */\n"
"    font-size: 16px; /* Adjust font size as needed */\n"
"    font-weight: bold; /* Make the text bold if desired */\n"
"    margin: 5px; /* Adjust margin as needed */\n"
"}QPushButton {\n"
"    background-color: #3498db; /* Blue color for buttons */\n"
"    border: 1px solid #2980b9; /* Darker blue border */\n"
"    border-radius: 5px; /* Smaller border radius for a sleeker look */\n"
"    font: 28pt \"Bebas Neue\"; /* Font style and size */\n"
"    padding: 5px 10px; /* Adjusted padding */\n"
"    color: white; /* Text color on buttons */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #2980b9; /* Darker blue on hover */\n"
"    border-color: #1f618d; /* Slightly lighter blue for the border */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #1f618d; /* Even darker blue when pressed */\n"
"    border-color: #1a5276;"
                        " /* Darker blue for the border */\n"
"    color: #ecf0f1; /* Light gray color for text when pressed */\n"
"}"));
        pushButton = new QPushButton(pagemenu);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(440, 300, 551, 91));
        pushButton->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color: #3498db; /* Blue color for buttons */\n"
"    border: 1px solid #2980b9; /* Darker blue border */\n"
"    border-radius: 5px; /* Smaller border radius for a sleeker look */\n"
"    font: 28pt \"Bebas Neue\"; /* Font style and size */\n"
"    padding: 5px 10px; /* Adjusted padding */\n"
"    color: white; /* Text color on buttons */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #2980b9; /* Darker blue on hover */\n"
"    border-color: #1f618d; /* Slightly lighter blue for the border */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #1f618d; /* Even darker blue when pressed */\n"
"    border-color: #1a5276; /* Darker blue for the border */\n"
"    color: #ecf0f1; /* Light gray color for text when pressed */\n"
"}"));
        pushButton_3 = new QPushButton(pagemenu);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(440, 480, 561, 101));
        pushButton_3->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color: #3498db; /* Blue color for buttons */\n"
"    border: 1px solid #2980b9; /* Darker blue border */\n"
"    border-radius: 5px; /* Smaller border radius for a sleeker look */\n"
"    font: 28pt \"Bebas Neue\"; /* Font style and size */\n"
"    padding: 5px 10px; /* Adjusted padding */\n"
"    color: white; /* Text color on buttons */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #2980b9; /* Darker blue on hover */\n"
"    border-color: #1f618d; /* Slightly lighter blue for the border */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #1f618d; /* Even darker blue when pressed */\n"
"    border-color: #1a5276; /* Darker blue for the border */\n"
"    color: #ecf0f1; /* Light gray color for text when pressed */\n"
"}"));
        label_nom = new QLabel(pagemenu);
        label_nom->setObjectName(QStringLiteral("label_nom"));
        label_nom->setGeometry(QRect(1060, 20, 111, 51));
        label_nom->setStyleSheet(QLatin1String("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\";"));
        label_prenom = new QLabel(pagemenu);
        label_prenom->setObjectName(QStringLiteral("label_prenom"));
        label_prenom->setGeometry(QRect(1180, 20, 121, 51));
        label_prenom->setStyleSheet(QLatin1String("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\";"));
        label_role = new QLabel(pagemenu);
        label_role->setObjectName(QStringLiteral("label_role"));
        label_role->setGeometry(QRect(1310, 20, 241, 51));
        label_role->setStyleSheet(QLatin1String("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\";"));

        retranslateUi(pagemenu);

        QMetaObject::connectSlotsByName(pagemenu);
    } // setupUi

    void retranslateUi(QDialog *pagemenu)
    {
        pagemenu->setWindowTitle(QApplication::translate("pagemenu", "Dialog", Q_NULLPTR));
        label->setText(QString());
        pushButton->setText(QApplication::translate("pagemenu", "GESTION D\342\200\231employe", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("pagemenu", "Gestion de condidat", Q_NULLPTR));
        label_nom->setText(QString());
        label_prenom->setText(QString());
        label_role->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class pagemenu: public Ui_pagemenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEMENU_H
