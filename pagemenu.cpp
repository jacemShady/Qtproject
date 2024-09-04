#include "pagemenu.h"
#include "ui_pagemenu.h"
#include "pagecond.h"


pagemenu::pagemenu(QWidget *parent, int userType, const QString &nom, const QString &prenom, const QString &role) :
    QDialog(parent),
    ui(new Ui::pagemenu),
    userType(userType)

{
    ui->setupUi(this);
    switch (userType) {
           case 1: // Resource Humaine
               // Show all buttons
               break;
           case 2:

               ui->pushButton->hide();




               break;

           default:
               break;
       }
    ui->label_nom->setText(nom);
       ui->label_prenom->setText(prenom);
       ui->label_role->setText(role);
   }

pagemenu::~pagemenu()
{
    delete ui;

}

void pagemenu::on_pushButton_clicked()
{
    hide();
    Pageemp = new pageemp (this);
    Pageemp->show();

}


void pagemenu::on_pushButton_3_clicked()
{
    hide();

      if (userType == 2) {
          // Create the Pagecond object and disable employe3pb
          pagecond = new Pagecond(this);
         pagecond->disableEmploye3pb();
          pagecond->show();
      } else if (userType == 1) {
          // Show Pagecond for Resource Humaine
          pagecond = new Pagecond(this);
          pagecond->show();
      }
  }


