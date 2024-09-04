#ifndef CLIENT_H
#define CLIENT_H
#include "QString"
#include<QString>
#include<QDate>
#include<QSqlQueryModel>
#include<QDate>

class client
{
public:
    client();
    client(int,QString,QString,QString,QString,QString,QString,int,QString,QString);
int getcin_c();
QString getnom_c();
QString getprenom_c();
QString getdaten_c();
QString getemail_c();
QString getadresse_c();
QString getcond_c();
int gettelephone_c();
QString getniv_c();
QString getgenre_c();



void setcin_c(int);
void setnom_c(QString);
void setprenom_c(QString);
void setdaten_c(QString);
void setemail_c(QString);
void setadresse_c(QString);
void setcond_c(QString);
void settelephone_c(int);
void setniv_c(QString);
void setgenre_c(QString);

bool ajouter();
QSqlQueryModel* afficher ();
bool supprimer (int);
bool modifierE(int);
 bool checkIfclientExists(int);
private:
    int cin_c , telephone_c;
    QString nom_c , prenom_c ,adresse_c,email_c,daten_c,cond_c,niv_c, genre_c ;

};

#endif // CLIENT_H
