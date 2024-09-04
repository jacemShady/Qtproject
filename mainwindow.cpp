#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QTimer>
#include <cstdlib>
#include <ctime>
#include <QFile>

#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)

{
    ui->setupUi(this);


}
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonlog_clicked()
{

    QString username = ui->lineEdituserr->text();
    QString password = ui->lineEdipasswordd->text();

    int userType = -1;
    QString nom, prenom, role;


    QSqlQuery query;
    query.prepare("SELECT ROLE_E, NOM_E, PRENOM_E FROM EMPLOYE WHERE USER_E = :username AND PAS_E = :password");
    query.bindValue(":username", username);
    query.bindValue(":password", password);
    if (!query.exec()) {
        qDebug() << "Error executing query:" << query.lastError().text();
        return;
    }

    if (query.next()) {
        role = query.value(0).toString();
        nom = query.value(1).toString();
        prenom = query.value(2).toString();

        // Determine user type based on role
        if (role == "Ressource Humaine") {
            userType = 1;
        } else if (role == "Receptioniste") {
            userType = 2;
        }
    }

    switch (userType) {
        case 1:
        {



                hide();
                Pagemenu = new pagemenu(this, userType, nom, prenom, role);
                Pagemenu->show();

           break;
        }
        case 2:
        {

        hide();
        Pagemenu = new pagemenu(this, userType, nom, prenom, role);
        Pagemenu->show();;
         break;
        }

        default:

            QMessageBox::warning(this, "Login", "Username and password are not correct");
            return;
    }
}

void MainWindow::on_forgot_pb_clicked()
{
     ui->stackedWidget->setCurrentIndex(1);
}




void MainWindow::on_cont_pb_clicked()
{
    // Get the existing password from pas1 and the new password from pas2 fields
    QString existingPassword = ui->pas1->text().trimmed(); // Assuming pas1 is a QLineEdit
    QString newPassword = ui->pas2->text().trimmed(); // Assuming pas2 is a QLineEdit

    // Retrieve the existing password for the provided email from the database
    QString storedPassword;
    QSqlQuery query;
    query.prepare("SELECT PAS_E FROM EMPLOYE WHERE EMAIL_E = :email");
    query.bindValue(":email", currentEmail); // Use the stored email

    if (query.exec() && query.next()) {
        storedPassword = query.value(0).toString();
    } else {
        QMessageBox::warning(this, tr("Error"), tr("Failed to retrieve existing password."));
        return;
    }

    // Check if the existing password matches the one provided
    if (existingPassword != storedPassword) {
        QMessageBox::warning(this, tr("Error"), tr("Incorrect existing password."));
        return;
    }

    // Execute SQL query to update the password in the EMPLOYE table
    query.prepare("UPDATE EMPLOYE SET PAS_E = :newPassword WHERE EMAIL_E = :email");
    query.bindValue(":newPassword", newPassword);
    query.bindValue(":email", currentEmail); // Use the stored email

    if (query.exec()) {
        QMessageBox::information(this, tr("Password Updated"), tr("Password updated successfully."));
        ui->stackedWidget->setCurrentIndex(0); // Change index after updating password
    } else {
        QMessageBox::warning(this, tr("Error"), tr("Failed to update password."));
    }

    ui->stackedWidget->setCurrentIndex(0);
}



void MainWindow::on_sendBtn_clicked()
{
    currentEmail = ui->rcpt->text().trimmed(); // Get the email from the rcpt field
    ui->stackedWidget->setCurrentIndex(2);
}
