#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "pagemenu.h"
#include <QtMultimedia>
#include <QtMultimediaWidgets>
#include <QtCore>
#include <QtGui>
#include <QtWidgets>
#include <QTimer>
#include "pagecond.h"
QT_BEGIN_NAMESPACE
class pagemenu;
class Pagecond;
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_pushButtonlog_clicked();






    void on_cont_pb_clicked();

    void on_forgot_pb_clicked();





    void on_sendBtn_clicked();

private:
    Ui::MainWindow *ui;
    pagemenu *Pagemenu;
    Pagecond *pagecond;
    QStringList files;
QMessageBox *messageBox;
QString currentEmail;
 QTimer *timer;

};
#endif // MAINWINDOW_H
