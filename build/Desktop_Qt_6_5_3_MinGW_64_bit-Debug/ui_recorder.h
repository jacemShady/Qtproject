/********************************************************************************
** Form generated from reading UI file 'recorder.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECORDER_H
#define UI_RECORDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_recorder
{
public:
    QLabel *label_32;
    QGroupBox *groupBox;
    QPushButton *OptionPushButton;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;

    void setupUi(QDialog *recorder)
    {
        if (recorder->objectName().isEmpty())
            recorder->setObjectName("recorder");
        recorder->resize(1517, 912);
        label_32 = new QLabel(recorder);
        label_32->setObjectName("label_32");
        label_32->setGeometry(QRect(-30, -10, 1600, 1000));
        label_32->setStyleSheet(QString::fromUtf8("border-image: url(:/img/img/try1.png);"));
        groupBox = new QGroupBox(recorder);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 10, 1510, 900));
        groupBox->setStyleSheet(QString::fromUtf8("\n"
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
        OptionPushButton = new QPushButton(groupBox);
        OptionPushButton->setObjectName("OptionPushButton");
        OptionPushButton->setGeometry(QRect(600, 40, 111, 31));
        OptionPushButton->setStyleSheet(QString::fromUtf8(""));
        scrollArea = new QScrollArea(groupBox);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(120, 130, 1231, 731));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1229, 729));
        scrollArea->setWidget(scrollAreaWidgetContents);

        retranslateUi(recorder);

        QMetaObject::connectSlotsByName(recorder);
    } // setupUi

    void retranslateUi(QDialog *recorder)
    {
        recorder->setWindowTitle(QCoreApplication::translate("recorder", "Dialog", nullptr));
        label_32->setText(QString());
        groupBox->setTitle(QString());
        OptionPushButton->setText(QCoreApplication::translate("recorder", "Options", nullptr));
    } // retranslateUi

};

namespace Ui {
    class recorder: public Ui_recorder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECORDER_H
