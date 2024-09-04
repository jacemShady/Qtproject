#ifndef PAGEMENU_H
#define PAGEMENU_H

#include <QDialog>
#include "pageemp.h"

#include "pagecond.h"


class Pagecond;
class pagecond;
namespace Ui {
class pagemenu;
}

class pagemenu : public QDialog
{
    Q_OBJECT

public:
  explicit pagemenu(QWidget *parent = nullptr, int userType = -1, const QString &nom = "", const QString &prenom = "", const QString &role = "");
    ~pagemenu();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();



private:
    Ui::pagemenu *ui;
   pageemp *Pageemp;
    Pagecond *pagecond;
    int userType;


};

#endif // PAGEMENU_H
