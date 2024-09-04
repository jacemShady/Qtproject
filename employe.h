#ifndef EMPLOYE_H
#define EMPLOYE_H
#include<QString>
#include<QDate>
#include<QSqlQueryModel>
#include<QDate>

class employe
{
public:
    employe();
    employe(int,QString,QString,QString,QString,int,QString,QString,QString,int,QString,QString,QString);
int getcin_e();
QString getnom_e();
QString getprenom_e();
QString getadresse_e();
QString getemail_e();
int gettelephone_e();
QString getdaten_e();
QString getdatee_e();
QString getrole_e();
int getsalaire_e();
QString getuser_e();
QString getpas_e();
QString gettask_e();

void setcin_e(int);
void setnom_e(QString);
void setprenom_e(QString);
void setadresse_e(QString);
void setemail_e(QString);
void settelephone_e(int);
void setdaten_e(QString);
void setdatee_e(QString);
void setrole_e(QString);
void setsalaire_e(int);
void setuser_e(QString);
void setpas_e(QString);
void settask_e(QString);
bool ajouter();
QSqlQueryModel* afficher ();
bool supprimer (int);
bool modifierE(int);
 bool checkIfemployeExists(int);

private:
    int cin_e , telephone_e,salaire_e ;
    QString nom_e , prenom_e ,adresse_e,email_e,daten_e,datee_e,role_e,user_e,pas_e ,task_e;

};

#endif // EMPLOYE_H
