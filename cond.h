#ifndef COND_H
#define COND_H
#include "QString"
#include<QString>
#include<QDate>
#include<QSqlQueryModel>
#include<QDate>

class cond
{
public:
    cond();
    cond(int,QString,QString,QString,QString,QString);

int getcin_c();
QString getnom_c();
QString getprenom_c();
QString getdaten_c();
QString getNation_c();
QString getgenre_c();


void setcin_e(int);
void setnom_c(QString);
void setprenom_c(QString);;
void setdaten_c(QString);
void setNation_c(QString);
void setgenre_c(QString);
bool ajouter();
QSqlQueryModel* afficher ();
int getcin_e();
void setcin_c(int cin_c);
bool supprimer (int);
bool modifierE(int);
QSqlQueryModel* rechercheParNom(QString nom);
 bool checkIfcondExists(int);
private:
    int cin_c,cin_e  ;
    QString nom_c, prenom_c ,daten_c , Nation_c ,genre_c;

};


#endif // COND_H
