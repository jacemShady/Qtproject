#ifndef PAGECOND_H
#define PAGECOND_H

#include <QDialog>
#include <QMainWindow>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include "cond.h"
#include "mainwindow.h"
#include "pageemp.h"
#include "pagemenu.h"
#include <QTableWidgetItem>
#include <QTimer>
class pageemp;
class SecDialog;
class QSortFilterProxyModel;
class MainWindow;
namespace Ui {
class Pagecond;
}

class Pagecond : public QDialog
{
    Q_OBJECT

public:
    explicit Pagecond(QWidget *parent = nullptr);
    ~Pagecond();
    QSqlQueryModel *sortBySalaireAsc();
    QSqlQueryModel *sortBySalaireDesc();
    Ui::Pagecond *ui;
    void disableEmploye3pb();

private slots:
    void on_pb_supprimer_clicked();

    void on_pb_modifier_2_clicked();

    void on_pb_ajouter_clicked();
    void handleMessageBoxResult(int result);

    void refreshTable();

    void on_logoutpb3_clicked();


    void on_employe3pb_clicked();

    void on_back3pb_clicked();
    void on_tab_cond_itemClicked(QTableWidgetItem *item);
void refreshTable(QSqlQueryModel *model);

void on_sortAscButton_clicked();




    void on_sortDescButton_clicked();

    void on_pb_pdf_clicked();



    void on_refrech_pb_clicked();




    void on_lineEdit_textChanged(const QString &arg1);

    void on_QR_clicked();

    void on_stat_clicked();
    void Stat();



void on_lineEditd_textChanged(const QString &arg1);

void on_filterRadioButtons_toggled(bool checked);
void on_radioButtonNom_clicked();




void on_radioButtonPrenom_clicked();

void on_radioButtonCin_clicked();



void on_nomasc_clicked();

private:
    QTimer *refreshTimer;
 MainWindow *Mainw;
 SecDialog *secDialog;
pageemp *Pageemp;
    cond *S;
    QSortFilterProxyModel *proxyModel;
    bool showLabel;
      QTableView *tableView;
        QTimer *timer;
};

#endif // PAGECOND_H
