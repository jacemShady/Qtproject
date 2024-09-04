#include "client.h"
#include <QSqlQuery>
#include <QtDebug>
#include<QObject>
#include <QIntValidator>
#include<QSqlError>
#include<QString>
#include<QComboBox>
client::client()
{
     cin_c =0 ;
     telephone_c=0 ;
     nom_c="";
     prenom_c="";
     adresse_c ="";
     email_c="";
     daten_c="";
     cond_c="";
      niv_c ="";
      genre_c ="";


    }
     client::client (int  cin_c,QString  nom_c ,QString  prenom_c,QString daten_c,QString email_c,QString adresse_c,QString cond_c,int telephone_c,QString niv_c,QString genre_c)
      {
        this->cin_c = cin_c ;
      this->nom_c=nom_c ;
         this->prenom_c=prenom_c ;
         this->daten_c = daten_c;
                  this->email_c = email_c ;
         this->adresse_c = adresse_c;

          this->cond_c = cond_c ;
          this-> telephone_c =  telephone_c ;

         this->niv_c = niv_c;
         this->genre_c =genre_c;

      }
    int client::getcin_c(){return cin_c ;}
    QString client::getnom_c(){return nom_c ;}
    QString client::getprenom_c(){return prenom_c ;}


     QString client::getadresse_c(){return adresse_c ;}
     QString client::getemail_c(){return email_c ;}
    int client::gettelephone_c(){return telephone_c ;}
    QString client::getdaten_c(){return daten_c ;}
    QString client::getcond_c(){return cond_c ;}
    QString client::getniv_c(){return niv_c ;}
     QString client::getgenre_c(){return genre_c ;}


    void client:: setcin_c(int cin_c ){this->cin_c =cin_c ;}
    void client:: setnom_c(QString nom_c ){this->nom_c =nom_c ;}
  void client:: setprenom_c(QString prenom_c ){this->prenom_c =prenom_c ;}
    void client:: setadresse_c(QString adresse_c ){this->adresse_c =adresse_c ;}
    void client:: setemail_c(QString email_c ){this->email_c =email_c ;}
 void client:: settelephone_c(int telephone_c ){this->telephone_c =telephone_c ;}
 void client:: setdaten_c(QString daten_c){this->daten_c =daten_c ;}
void client:: setcond_c(QString cond_c ){this->cond_c =cond_c;}
void client:: setniv_c(QString niv_c ){this->niv_c=niv_c ;}
  void client:: setgenre_c(QString genre_c ){this->genre_c =genre_c ;}

  bool client::ajouter()
  {
      QSqlQuery query;
      QString cin_string = QString::number(cin_c);

      query.prepare("INSERT INTO clients (cin_c, nom_c, prenom_c, daten_c, email_c, adresse_c, cond_c, telephone_c, niv_c, genre_c) "
                    "VALUES (:cin_c, :nom_c, :prenom_c, :daten_c, :email_c, :adresse_c, :cond_c, :telephone_c, :niv_c, :genre_c)");
      query.bindValue(":cin_c", QString::number(cin_c));

      query.bindValue(":nom_c", nom_c);
      query.bindValue(":prenom_c", prenom_c);
      query.bindValue(":daten_c", daten_c);
      query.bindValue(":email_c", email_c);
      query.bindValue(":adresse_c", adresse_c);
      query.bindValue(":cond_c", cond_c);
      query.bindValue(":telephone_c", telephone_c);
      query.bindValue(":niv_c", niv_c);
      query.bindValue(":genre_c", genre_c);

      return query.exec();
  }



    QSqlQueryModel* client::afficher()
    {
        QSqlQueryModel* model = new QSqlQueryModel();
        model->setQuery("select * from clients");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("cin"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr(" nom "));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr(" prenom"));
         model->setHeaderData(3, Qt::Horizontal, QObject::tr("email"));
            model->setHeaderData(4, Qt::Horizontal, QObject::tr("adresse"));
         model->setHeaderData(5, Qt::Horizontal, QObject::tr("num_telephone"));
         model->setHeaderData(6, Qt::Horizontal, QObject::tr(" date de naissance "));
         model->setHeaderData(7, Qt::Horizontal, QObject::tr(" condition physique "));
         model->setHeaderData(8, Qt::Horizontal, QObject::tr("niveau scolaire"));
         model->setHeaderData(9, Qt::Horizontal, QObject::tr(" genre"));

        return model;
    }
    bool client::supprimer(int cin_c)
    {
        QSqlQuery query;
        query.prepare("DELETE FROM clients WHERE cin_c = :cin_c");
        query.bindValue(":cin_c", cin_c);
        return query.exec();
    }

    bool client::checkIfclientExists(int cin_c)
    {
        QSqlQuery query;
        query.prepare("SELECT cin_c FROM clients where cin_c=:cin_c");
        query.bindValue(":cin_c", cin_c);
        if (query.exec() && query.next()) {
            return true;
        } else {
            return false;
        }
    }
    bool client::modifierE(int cin_c)
     {
        QSqlQuery query;
              query.prepare("UPDATE clients SET nom_c=:nom_c , prenom_c=:prenom_c,adresse_c=:adresse_c, email_c=:email_c,cond_c=:cond_c,telephone_c=:telephone_c,daten_c=:daten_c,niv_c=:niv_c, genre_c=:genre_c WHERE cin_c=:cin_c  " );
              query.bindValue(":cin_c",QString::number(cin_c));
             query.bindValue(":nom_c",nom_c);
             query.bindValue(":prenom_c",prenom_c);
             query.bindValue(":adresse_c",adresse_c);
               query.bindValue(":email_c",email_c);
                  query.bindValue(":telephone_c",telephone_c);
    query.bindValue(":daten_c", daten_c);
        query.bindValue(":cond_c", cond_c);
    query.bindValue(":niv_c",niv_c);
 query.bindValue(":genre_c", genre_c);
              return  query.exec();



     }
