/********************************************************************************
** Form generated from reading UI file 'notepad.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTEPAD_H
#define UI_NOTEPAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Notepad
{
public:
    QTextEdit *textEdit;
    QLabel *label;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *New;
    QPushButton *Open;
    QPushButton *Save;
    QPushButton *pushButton_4;
    QPushButton *Copy;
    QPushButton *Paste;
    QPushButton *Cut;
    QPushButton *pushButton_10;
    QPushButton *Redo;
    QPushButton *pushButton_2;
    QLabel *label_2;

    void setupUi(QDialog *Notepad)
    {
        if (Notepad->objectName().isEmpty())
            Notepad->setObjectName(QStringLiteral("Notepad"));
        Notepad->resize(1228, 724);
        Notepad->setStyleSheet(QLatin1String("\n"
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
        textEdit = new QTextEdit(Notepad);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(10, 90, 1207, 621));
        QFont font;
        font.setFamily(QStringLiteral("Playfair Display"));
        font.setPointSize(10);
        textEdit->setFont(font);
        label = new QLabel(Notepad);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, -10, 1231, 741));
        label->setStyleSheet(QStringLiteral("border-image: url(:/img/img/1.jpg);"));
        groupBox = new QGroupBox(Notepad);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 0, 1207, 84));
        groupBox->setFont(font);
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        New = new QPushButton(groupBox);
        New->setObjectName(QStringLiteral("New"));
        New->setStyleSheet(QLatin1String("color: white;\n"
"font: 18pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        New->setIcon(icon);
        New->setIconSize(QSize(20, 20));
        New->setCheckable(false);

        horizontalLayout_2->addWidget(New);

        Open = new QPushButton(groupBox);
        Open->setObjectName(QStringLiteral("Open"));
        Open->setStyleSheet(QLatin1String("color: white;\n"
"font: 18pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        Open->setIcon(icon1);
        Open->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(Open);

        Save = new QPushButton(groupBox);
        Save->setObjectName(QStringLiteral("Save"));
        Save->setStyleSheet(QLatin1String("color: white;\n"
"font: 18pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/save.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Save->setIcon(icon2);
        Save->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(Save);

        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setStyleSheet(QLatin1String("color: white;\n"
"font: 18pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/save as.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon3);
        pushButton_4->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(pushButton_4);

        Copy = new QPushButton(groupBox);
        Copy->setObjectName(QStringLiteral("Copy"));
        Copy->setStyleSheet(QLatin1String("color: white;\n"
"font: 18pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        Copy->setIcon(icon4);
        Copy->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(Copy);

        Paste = new QPushButton(groupBox);
        Paste->setObjectName(QStringLiteral("Paste"));
        Paste->setStyleSheet(QLatin1String("color: white;\n"
"font: 18pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        Paste->setIcon(icon5);
        Paste->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(Paste);

        Cut = new QPushButton(groupBox);
        Cut->setObjectName(QStringLiteral("Cut"));
        Cut->setStyleSheet(QLatin1String("color: white;\n"
"font: 18pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        Cut->setIcon(icon6);
        Cut->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(Cut);

        pushButton_10 = new QPushButton(groupBox);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setStyleSheet(QLatin1String("color: white;\n"
"font: 18pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_10->setIcon(icon7);
        pushButton_10->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(pushButton_10);

        Redo = new QPushButton(groupBox);
        Redo->setObjectName(QStringLiteral("Redo"));
        Redo->setStyleSheet(QLatin1String("color: white;\n"
"font: 18pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        Redo->setIcon(icon8);
        Redo->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(Redo);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setStyleSheet(QLatin1String("color: white;\n"
"font: 18pt \"Bebas Neue\"; \n"
"border: 1px solid #ccc;\n"
"border-color: black;\n"
"padding: 5px;"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/about.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon9);
        pushButton_2->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(pushButton_2);

        label_2 = new QLabel(Notepad);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(-40, -30, 1381, 861));
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/img/img/try1.png);"));
        label_2->raise();
        textEdit->raise();
        label->raise();
        groupBox->raise();

        retranslateUi(Notepad);

        QMetaObject::connectSlotsByName(Notepad);
    } // setupUi

    void retranslateUi(QDialog *Notepad)
    {
        Notepad->setWindowTitle(QApplication::translate("Notepad", "Dialog", Q_NULLPTR));
        label->setText(QString());
        groupBox->setTitle(QString());
        New->setText(QApplication::translate("Notepad", "new", Q_NULLPTR));
        Open->setText(QApplication::translate("Notepad", "open", Q_NULLPTR));
        Save->setText(QApplication::translate("Notepad", "save", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("Notepad", "save as", Q_NULLPTR));
        Copy->setText(QApplication::translate("Notepad", "copy", Q_NULLPTR));
        Paste->setText(QApplication::translate("Notepad", "paste", Q_NULLPTR));
        Cut->setText(QApplication::translate("Notepad", "cut", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("Notepad", "Cancel", Q_NULLPTR));
        Redo->setText(QApplication::translate("Notepad", "Redo", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Notepad", "About", Q_NULLPTR));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Notepad: public Ui_Notepad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTEPAD_H
