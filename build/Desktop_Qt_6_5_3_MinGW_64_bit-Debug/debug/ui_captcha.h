/********************************************************************************
** Form generated from reading UI file 'captcha.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAPTCHA_H
#define UI_CAPTCHA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_captcha
{
public:
    QPushButton *pushButton;
    QLineEdit *answer;
    QLineEdit *recaptcha;
    QLabel *label_2;
    QLabel *label;

    void setupUi(QDialog *captcha)
    {
        if (captcha->objectName().isEmpty())
            captcha->setObjectName(QStringLiteral("captcha"));
        captcha->resize(1391, 720);
        captcha->setStyleSheet(QLatin1String("\n"
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
        pushButton = new QPushButton(captcha);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(660, 440, 121, 31));
        QFont font;
        font.setFamily(QStringLiteral("Montserrat SemiBold"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        answer = new QLineEdit(captcha);
        answer->setObjectName(QStringLiteral("answer"));
        answer->setGeometry(QRect(420, 440, 231, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Bebas Neue"));
        font1.setPointSize(12);
        answer->setFont(font1);
        answer->setAutoFillBackground(false);
        answer->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        answer->setAlignment(Qt::AlignCenter);
        recaptcha = new QLineEdit(captcha);
        recaptcha->setObjectName(QStringLiteral("recaptcha"));
        recaptcha->setGeometry(QRect(370, 340, 471, 81));
        QFont font2;
        font2.setFamily(QStringLiteral("Roboto Condensed Light"));
        font2.setPointSize(36);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(3);
        recaptcha->setFont(font2);
        recaptcha->setCursor(QCursor(Qt::ArrowCursor));
        recaptcha->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 36pt ;\n"
"font: 25 36pt \"Roboto Condensed Light\";"));
        label_2 = new QLabel(captcha);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(-20, -80, 1421, 921));
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/img/img/captcha.png);"));
        label = new QLabel(captcha);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(320, 280, 591, 41));
        QFont font3;
        font3.setFamily(QStringLiteral("Montserrat SemiBold"));
        font3.setPointSize(20);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(7);
        label->setFont(font3);
        label->setStyleSheet(QStringLiteral("font: 63 20pt \"Montserrat SemiBold\";"));
        label->setMidLineWidth(1);
        label->setTextFormat(Qt::PlainText);
        label->setAlignment(Qt::AlignCenter);
        label_2->raise();
        pushButton->raise();
        answer->raise();
        recaptcha->raise();
        label->raise();

        retranslateUi(captcha);

        QMetaObject::connectSlotsByName(captcha);
    } // setupUi

    void retranslateUi(QDialog *captcha)
    {
        captcha->setWindowTitle(QApplication::translate("captcha", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("captcha", "SUBMIT", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        pushButton->setShortcut(QApplication::translate("captcha", "Enter", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        answer->setPlaceholderText(QApplication::translate("captcha", "Enter Captcha Here", Q_NULLPTR));
        label_2->setText(QString());
        label->setText(QApplication::translate("captcha", "FINISH THE CAPTCHA TO LOGIN :", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class captcha: public Ui_captcha {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAPTCHA_H
