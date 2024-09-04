#include "employe.h"
#include <QSqlQuery>
#include <QtDebug>
#include<QObject>
#include <QIntValidator>
#include<QSqlError>
#include<QString>
#include<QComboBox>
#include <QCoreApplication>
employe::employe()
{
     cin_e =0 ;
     telephone_e=0 ;
     nom_e="";
     prenom_e="";
     adresse_e ="";
     email_e="";
     daten_e="";
     datee_e="";
      role_e ="";
      salaire_e = 0;
     user_e ="";
     pas_e ="";
     task_e ="";


    }
     employe::employe (int  cin_e,QString  nom_e ,QString  prenom_e,QString adresse_e,QString email_e,int telephone_e,QString daten_e,QString datee_e,QString role_e,int salaire_e,QString user_e,QString pas_e,QString task_e)
      {
        this->cin_e = cin_e ;
      this->nom_e=nom_e ;
         this->prenom_e=prenom_e ;
         this->adresse_e = adresse_e;
         this->email_e = email_e ;
          this-> telephone_e =  telephone_e ;
          this->daten_e = daten_e;
         this->datee_e = datee_e;
         this->role_e =role_e;
         this->salaire_e = salaire_e;
         this->user_e = user_e;
         this->pas_e = pas_e;
         this->task_e = task_e;
      }
    int employe::getcin_e(){return cin_e ;}
    QString employe::getnom_e(){return nom_e ;}
    QString employe::getprenom_e(){return prenom_e ;}


     QString employe::getadresse_e(){return adresse_e ;}
     QString employe::getemail_e(){return email_e ;}
    int employe::gettelephone_e(){return telephone_e ;}
    QString employe::getdaten_e(){return daten_e ;}
    QString employe::getdatee_e(){return datee_e ;}
    QString employe::getrole_e(){return role_e ;}
     int employe::getsalaire_e(){return salaire_e ;}
     QString employe::getuser_e(){return user_e ;}
     QString employe::getpas_e(){return pas_e ;}
     QString employe::gettask_e(){return task_e ;}


    void employe:: setcin_e(int cin_e ){this->cin_e =cin_e ;}
    void employe:: setnom_e(QString nom_e ){this->nom_e =nom_e ;}
  void employe:: setprenom_e(QString prenom_e ){this->prenom_e =prenom_e ;}
    void employe:: setadresse_e(QString adresse_e ){this->adresse_e =adresse_e ;}
    void employe:: setemail_e(QString email_e ){this->email_e =email_e ;}
 void employe:: settelephone_e(int telephone_e ){this->telephone_e =telephone_e ;}
 void employe:: setdaten_e(QString daten_e ){this->daten_e =daten_e ;}
void employe:: setdatee_e(QString datee_e ){this->datee_e =datee_e ;}
void employe:: setrole_e(QString role_e ){this->role_e =role_e ;}
  void employe:: setsalaire_e(int salaire_e ){this->salaire_e =salaire_e ;}
  void employe:: setuser_e(QString user_e ){this->user_e =user_e ;}
  void employe:: setpas_e(QString pas_e ){this->pas_e =pas_e ;}
  void employe:: settask_e(QString task_e ){this->task_e =task_e ;}

  bool employe::ajouter()
  {
      QSqlQuery query;
      QString cin_string = QString::number(cin_e);

      query.prepare("INSERT INTO employe (cin_e, nom_e, prenom_e, adresse_e, email_e, telephone_e, daten_e, datee_e, salaire_e, role_e,user_e,pas_e , task_e) "
                    "VALUES (:cin_e, :nom_e, :prenom_e, :adresse_e, :email_e, :telephone_e, :daten_e, :datee_e, :salaire_e, :role_e,:user_e,:pas_e,:task_e)");

      query.bindValue(":cin_e", cin_string);
         query.bindValue(":nom_e", nom_e);
         query.bindValue(":prenom_e", prenom_e);
         query.bindValue(":adresse_e", adresse_e);
         query.bindValue(":email_e", email_e);
         query.bindValue(":telephone_e", telephone_e);
         query.bindValue(":daten_e", daten_e);
         query.bindValue(":datee_e", datee_e);
         query.bindValue(":salaire_e", salaire_e);
         query.bindValue(":role_e", role_e);
         query.bindValue(":user_e", user_e);
         query.bindValue(":pas_e", pas_e);
         query.bindValue(":task_e", task_e);
         return query.exec();
     }


    QSqlQueryModel* employe::afficher()
    {
        QSqlQueryModel* model = new QSqlQueryModel();
        model->setQuery("select * from employe");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("cin"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr(" nom "));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr(" prenom"));
         model->setHeaderData(3, Qt::Horizontal, QObject::tr("adresse"));
            model->setHeaderData(4, Qt::Horizontal, QObject::tr("email"));
         model->setHeaderData(5, Qt::Horizontal, QObject::tr("num_telephone"));
         model->setHeaderData(6, Qt::Horizontal, QObject::tr(" date de naissance "));
         model->setHeaderData(7, Qt::Horizontal, QObject::tr(" date d'embauche "));
         model->setHeaderData(8, Qt::Horizontal, QObject::tr("role"));
         model->setHeaderData(9, Qt::Horizontal, QObject::tr(" salaire"));
         model->setHeaderData(10, Qt::Horizontal, QObject::tr(" username"));
         model->setHeaderData(11, Qt::Horizontal, QObject::tr(" password"));
         model->setHeaderData(12, Qt::Horizontal, QObject::tr(" task"));
        return model;
    }
    bool employe::supprimer(int cin_e)
    {
        QSqlQuery query;
        query.prepare("DELETE FROM employe WHERE cin_e = :cin_e");
        query.bindValue(":cin_e", cin_e);
        return query.exec();
    }
    bool employe::checkIfemployeExists(int cin_e)
    {
        QSqlQuery query;
        query.prepare("SELECT cin_e FROM employe where cin_e=:cin_e");
        query.bindValue(":cin_e", cin_e);
        if (query.exec() && query.next()) {
            return true;
        } else {
            return false;
        }
    }
    bool employe::modifierE(int cin_e) {
        QSqlQuery query;
        query.prepare("UPDATE employe SET nom_e=:nom_e, prenom_e=:prenom_e, adresse_e=:adresse_e, email_e=:email_e, telephone_e=:telephone_e, daten_e=:daten_e, datee_e=:datee_e, salaire_e=:salaire_e, role_e=:role_e, user_e=:user_e, pas_e=:pas_e, task_e=:task_e WHERE cin_e=:cin_e");

        query.bindValue(":cin_e", cin_e);
        query.bindValue(":nom_e", nom_e);
        query.bindValue(":prenom_e", prenom_e);
        query.bindValue(":adresse_e", adresse_e);
        query.bindValue(":email_e", email_e);
        query.bindValue(":telephone_e", telephone_e);
        query.bindValue(":daten_e", daten_e);
        query.bindValue(":datee_e", datee_e);
        query.bindValue(":salaire_e", salaire_e);
        query.bindValue(":role_e", role_e);
        query.bindValue(":user_e", user_e);
        query.bindValue(":pas_e", pas_e);
        query.bindValue(":task_e", task_e);

        return query.exec();
    }



