/********************************************************************************
** Form generated from reading UI file 'secdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECDIALOG_H
#define UI_SECDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SecDialog
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QLabel *label_nom;
    QLabel *label_prenom;
    QLabel *label_role;

    void setupUi(QDialog *SecDialog)
    {
        if (SecDialog->objectName().isEmpty())
            SecDialog->setObjectName("SecDialog");
        SecDialog->resize(1562, 1080);
        SecDialog->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(SecDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(-300, -170, 1871, 1411));
        label->setMinimumSize(QSize(1871, 0));
        label->setMaximumSize(QSize(1871, 1411));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/img/img/sec.png);\n"
"QLabel {\n"
"    color: black; /* Text color for labels */\n"
"    font-size: 16px; /* Adjust font size as needed */\n"
"    font-weight: bold; /* Make the text bold if desired */\n"
"    margin: 5px; /* Adjust margin as needed */\n"
"}"));
        pushButton = new QPushButton(SecDialog);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(440, 300, 341, 101));
        pushButton->setStyleSheet(QString::fromUtf8(" QLineEdit {\n"
"                background-color: #f0f0f0;\n"
"                border: 1px solid #ccc;\n"
"                border-radius: 15px;\n"
"                padding: 5px;\n"
"            }\n"
"            QLineEdit:focus {\n"
"                border: 1px solid #0078d7;\n"
"            }\n"
"            QPushButton {\n"
"                background-color: #3498db; /* Changed to #3498db */\n"
"                border: 1px solid #2980b9;\n"
"                border-radius: 5px;\n"
"                font: 28pt \"Bebas neue\";\n"
"                padding: 5px 10px;\n"
"                color: white;\n"
"            }\n"
"            QPushButton:hover {\n"
"                background-color: #2c3e50;\n"
"                border-color: #1f2a38;\n"
"            }\n"
"            QPushButton:pressed {\n"
"                background-color: #1f2a38;\n"
"                border-color: #141e2b;\n"
"                color: #95a5a6;\n"
"            }"));
        pushButton_2 = new QPushButton(SecDialog);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(610, 460, 381, 101));
        pushButton_2->setStyleSheet(QString::fromUtf8(" QLineEdit {\n"
"                background-color: #f0f0f0;\n"
"                border: 1px solid #ccc;\n"
"                border-radius: 15px;\n"
"                padding: 5px;\n"
"            }\n"
"            QLineEdit:focus {\n"
"                border: 1px solid #0078d7;\n"
"            }\n"
"            QPushButton {\n"
"                background-color: #3498db; /* Changed to #3498db */\n"
"                border: 1px solid #2980b9;\n"
"                border-radius: 5px;\n"
"                font: 28pt \"Bebas neue\";\n"
"                padding: 5px 10px;\n"
"                color: white;\n"
"            }\n"
"            QPushButton:hover {\n"
"                background-color: #2c3e50;\n"
"                border-color: #1f2a38;\n"
"            }\n"
"            QPushButton:pressed {\n"
"                background-color: #1f2a38;\n"
"                border-color: #141e2b;\n"
"                color: #95a5a6;\n"
"            }"));
        pushButton_4 = new QPushButton(SecDialog);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(820, 300, 331, 101));
        pushButton_4->setStyleSheet(QString::fromUtf8(" QLineEdit {\n"
"                background-color: #f0f0f0;\n"
"                border: 1px solid #ccc;\n"
"                border-radius: 15px;\n"
"                padding: 5px;\n"
"            }\n"
"            QLineEdit:focus {\n"
"                border: 1px solid #0078d7;\n"
"            }\n"
"            QPushButton {\n"
"                background-color: #3498db; /* Changed to #3498db */\n"
"                border: 1px solid #2980b9;\n"
"                border-radius: 5px;\n"
"                font: 28pt \"Bebas neue\";\n"
"                padding: 5px 10px;\n"
"                color: white;\n"
"            }\n"
"            QPushButton:hover {\n"
"                background-color: #2c3e50;\n"
"                border-color: #1f2a38;\n"
"            }\n"
"            QPushButton:pressed {\n"
"                background-color: #1f2a38;\n"
"                border-color: #141e2b;\n"
"                color: #95a5a6;\n"
"            }"));
        pushButton_3 = new QPushButton(SecDialog);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(240, 460, 341, 101));
        pushButton_3->setStyleSheet(QString::fromUtf8(" QLineEdit {\n"
"                background-color: #f0f0f0;\n"
"                border: 1px solid #ccc;\n"
"                border-radius: 15px;\n"
"                padding: 5px;\n"
"            }\n"
"            QLineEdit:focus {\n"
"                border: 1px solid #0078d7;\n"
"            }\n"
"            QPushButton {\n"
"                background-color: #3498db; /* Changed to #3498db */\n"
"                border: 1px solid #2980b9;\n"
"                border-radius: 5px;\n"
"                font: 28pt \"Bebas neue\";\n"
"                padding: 5px 10px;\n"
"                color: white;\n"
"            }\n"
"            QPushButton:hover {\n"
"                background-color: #2c3e50;\n"
"                border-color: #1f2a38;\n"
"            }\n"
"            QPushButton:pressed {\n"
"                background-color: #1f2a38;\n"
"                border-color: #141e2b;\n"
"                color: #95a5a6;\n"
"            }"));
        pushButton_5 = new QPushButton(SecDialog);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(1020, 460, 361, 101));
        pushButton_5->setStyleSheet(QString::fromUtf8(" QLineEdit {\n"
"                background-color: #f0f0f0;\n"
"                border: 1px solid #ccc;\n"
"                border-radius: 15px;\n"
"                padding: 5px;\n"
"            }\n"
"            QLineEdit:focus {\n"
"                border: 1px solid #0078d7;\n"
"            }\n"
"            QPushButton {\n"
"                background-color: #3498db; /* Changed to #3498db */\n"
"                border: 1px solid #2980b9;\n"
"                border-radius: 5px;\n"
"                font: 28pt \"Bebas neue\";\n"
"                padding: 5px 10px;\n"
"                color: white;\n"
"            }\n"
"            QPushButton:hover {\n"
"                background-color: #2c3e50;\n"
"                border-color: #1f2a38;\n"
"            }\n"
"            QPushButton:pressed {\n"
"                background-color: #1f2a38;\n"
"                border-color: #141e2b;\n"
"                color: #95a5a6;\n"
"            }"));
        label_nom = new QLabel(SecDialog);
        label_nom->setObjectName("label_nom");
        label_nom->setGeometry(QRect(1060, 20, 111, 51));
        label_nom->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\";"));
        label_prenom = new QLabel(SecDialog);
        label_prenom->setObjectName("label_prenom");
        label_prenom->setGeometry(QRect(1180, 20, 121, 51));
        label_prenom->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\";"));
        label_role = new QLabel(SecDialog);
        label_role->setObjectName("label_role");
        label_role->setGeometry(QRect(1310, 20, 241, 51));
        label_role->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;color: white;\n"
"font: 22pt \"Bebas Neue\";"));

        retranslateUi(SecDialog);

        QMetaObject::connectSlotsByName(SecDialog);
    } // setupUi

    void retranslateUi(QDialog *SecDialog)
    {
        SecDialog->setWindowTitle(QCoreApplication::translate("SecDialog", "Dialog", nullptr));
        label->setText(QString());
        pushButton->setText(QCoreApplication::translate("SecDialog", "Employes page", nullptr));
        pushButton_2->setText(QCoreApplication::translate("SecDialog", "SUBSCRIPTION PAGE", nullptr));
        pushButton_4->setText(QCoreApplication::translate("SecDialog", "USER PAGE", nullptr));
        pushButton_3->setText(QCoreApplication::translate("SecDialog", "ACTIVITY PAGE", nullptr));
        pushButton_5->setText(QCoreApplication::translate("SecDialog", "PLANNINGS PAGE", nullptr));
        label_nom->setText(QString());
        label_prenom->setText(QString());
        label_role->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SecDialog: public Ui_SecDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECDIALOG_H
