#include "cond.h"
#include <QSqlQuery>
#include <QtDebug>
#include<QObject>
#include <QIntValidator>
#include<QSqlError>
#include<QString>
#include<QComboBox>
cond::cond()
{
     cin_c =0 ;
     nom_c="";
     prenom_c="";
     daten_c ="" ;
     Nation_c="";
     genre_c="";


    }
     cond::cond(int  cin_c,QString  nom_c ,QString  prenom_c,QString  daten_c,QString Nation_c,QString genre_c)
      {
        this->cin_c = cin_c ;
      this->nom_c=nom_c ;
         this->prenom_c=prenom_c ;
          this-> daten_c =  daten_c ;
         this-> Nation_c =  Nation_c ;
         this-> genre_c =  genre_c ;

      }

    int cond::getcin_c(){return cin_c ;}
    QString cond::getnom_c(){return nom_c ;}
    QString cond::getprenom_c(){return prenom_c ;}
     QString cond::getdaten_c(){return daten_c ;}
     QString cond::getNation_c(){return Nation_c ;}
     QString cond::getgenre_c(){return genre_c ;}



    void cond::setcin_c(int cin_c ){this->cin_c =cin_c ;}
    void cond::setnom_c(QString nom_c ){this->nom_c =nom_c ;}
  void cond:: setprenom_c(QString prenom_c ){this->prenom_c =prenom_c ;}
    void cond:: setdaten_c(QString daten_c ){this->daten_c =daten_c ;}
    void cond:: setNation_c(QString Nation_c ){this->Nation_c =Nation_c ;}
    void cond:: setgenre_c(QString genre_c ){this->genre_c =genre_c ;}


    bool cond::ajouter()
    {
        QSqlQuery query;
        QString cin_string = QString::number(cin_c);

        query.prepare("INSERT INTO cond (cin_c, cin_e, nom_c, prenom_c, daten_c, Nation_c, genre_c) "
                      "VALUES (:cin_c, :cin_e, :nom_c, :prenom_c, :daten_c,:Nation_c, :genre_c)");


        query.bindValue(":cin_c", cin_string);
        query.bindValue(":cin_e", cin_e);
        query.bindValue(":nom_c", nom_c);
        query.bindValue(":prenom_c", prenom_c);
        query.bindValue(":daten_c", daten_c);
        query.bindValue(":Nation_c", Nation_c);
        query.bindValue(":genre_c", genre_c);

        return query.exec();
    }

    QSqlQueryModel* cond::afficher()
    {
        QSqlQueryModel* model = new QSqlQueryModel();
        model->setQuery("select * from cond");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("cin_c"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr(" cin "));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr(" nom"));
         model->setHeaderData(3, Qt::Horizontal, QObject::tr("prenom"));
            model->setHeaderData(4, Qt::Horizontal, QObject::tr("daten"));
                model->setHeaderData(5, Qt::Horizontal, QObject::tr("Nation"));
                model->setHeaderData(6, Qt::Horizontal, QObject::tr("genre"));


        return model;
    }
    bool cond::supprimer(int cin_c)
    {
        QSqlQuery query;
        query.prepare("DELETE FROM cond WHERE cin_c= :cin_c");
        query.bindValue(":cin_c", cin_c);
        return query.exec();
    }
    bool cond::checkIfcondExists(int cin_c)
    {
        QSqlQuery query;
        query.prepare("SELECT cin_c FROM cond where cin_c=:cin_c");
        query.bindValue(":cin_c", cin_c);
        if (query.exec() && query.next()) {
            return true;
        } else {
            return false;
        }
    }
    bool cond::modifierE(int cin_c)
    {
        QSqlQuery query;
        query.prepare("UPDATE cond SET cin_e=:cin_e, nom_c=:nom_c, prenom_c=:prenom_c, daten_c=:daten_c, Nation_c=:Nation_c, genre_c=:genre_c WHERE cin_c=:cin_c ");

        query.bindValue(":cin_c", QString::number(cin_c));
        query.bindValue(":cin_e", cin_e);  // Bind the cin_e value
        query.bindValue(":nom_c", nom_c);
        query.bindValue(":prenom_c", prenom_c);
        query.bindValue(":daten_c", daten_c);
        query.bindValue(":Nation_c", Nation_c);
        query.bindValue(":genre_c", genre_c);

        return query.exec();
    }

    int cond::getcin_e() { return cin_e; }
    void cond::setcin_e(int cin_e) { this->cin_e = cin_e; }

    QSqlQueryModel* cond::rechercheParNom(QString nom)
    {
        QSqlQueryModel* model = new QSqlQueryModel();
        QSqlQuery query;
        query.prepare("SELECT * FROM cond WHERE nom_c LIKE :nom");
        query.bindValue(":nom", "%" + nom + "%"); // Search for partial matches

        if (query.exec()) {
            model->setQuery(query);
            model->setHeaderData(0, Qt::Horizontal, QObject::tr("cin"));
            model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
            model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom"));
            model->setHeaderData(3, Qt::Horizontal, QObject::tr("daten"));
            model->setHeaderData(4, Qt::Horizontal, QObject::tr("Nation"));
            model->setHeaderData(5, Qt::Horizontal, QObject::tr("genre"));
        } else {
            qDebug() << "Error executing query: " << query.lastError().text();
        }

        return model;
    }
