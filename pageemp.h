#ifndef PAGEEMP_H
#define PAGEEMP_H

#include <QDialog>
#include <QMainWindow>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include "employe.h"
#include "mainwindow.h"
#include "pagemenu.h"
#include "pagecond.h"
#include <QCameraImageCapture>
#include <QMediaPlayer>
#include <QtCharts/QChartView>
class QStandardItemModel;
class MainWindow;
class QSortFilterProxyModel;
class SecDialog;
class Pagecond;
namespace Ui {
class pageemp;
}

class pageemp : public QDialog
{
    Q_OBJECT

public:
    explicit pageemp(QWidget *parent = nullptr);
    ~pageemp();
    QSqlQueryModel *sortBySalaireAsc();
    QSqlQueryModel *sortBySalaireDesc();
void addCameraWidget();
private slots:
    void on_pb_supprimer_clicked();

    void on_pb_modifier_2_clicked();

    void on_pb_ajouter_clicked();


    void handleMessageBoxResult(int result);

    void on_logoutpb_clicked();


    void on_condpb_clicked();


    void on_tableViewSelectionChanged(const QModelIndex &current, const QModelIndex &previous);


    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

    void on_lineEdit_cursorPositionChanged(int arg1, int arg2);
    void on_sortAscButton_clicked();
        void on_sortDescButton_clicked();









        void on_pb_pdf_clicked();



void Stat_emp();


void on_refrech_pb_clicked();


void on_statrole_clicked();


void on_nomasc_clicked();

private:
    Ui::pageemp *ui;
    MainWindow * Mainw; 
    Pagecond *pagecond;
     SecDialog *secDialog;
    employe *E;
      int selectedEmployeeRow;
         QSortFilterProxyModel *proxyModel;
         bool showLabel;

    QByteArray data; // variable contenant les données reçues


};



#endif // PAGEEMP_H
