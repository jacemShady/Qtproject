#include "pageemp.h"
#include "ui_pageemp.h"
#include<QLabel>
#include<QMessageBox>
#include<QVBoxLayout>
#include <QStandardItemModel>
#include <QStandardItem>
#include <QSqlQueryModel>
#include<QApplication>
#include <iostream>
#include<QIntValidator>
#include<QBoxLayout>
#include<QLineEdit>
#include<QComboBox>
#include<QMessageBox>
#include <QApplication>
#include <QDebug>
#include<QWidget>
#include <employe.h>
#include "mainwindow.h"
#include <mainwindow.h>
#include "pagecond.h"
#include "pagemenu.h"
#include <pagemenu.h>
#include <QSortFilterProxyModel>
#include <QPrinter>
#include <QPainter>
#include<QSqlRecord>
#include <QFileDialog>
#include <QMessageBox>
#include <QStandardItemModel>
#include <QDesktopServices>
#include <QTextDocumentWriter>
#include <QtCharts>
#include<QtCharts>
#include<QChartView>
#include<QPieSeries>
#include <cstdlib>
#include <ctime>
#include <QFile>
#include <QPrintDialog>
#include <QTimer>


pageemp::pageemp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pageemp),
    selectedEmployeeRow(-1), // Initialize selectedEmployeeRow
    E(new employe()),
    proxyModel(new QSortFilterProxyModel(this)),
    showLabel(true)


{


    ui->setupUi(this);


    ui->cin_e->setValidator(new QIntValidator(0, 99999999, this));
    ui->salaire_e->setValidator(new QIntValidator(0, 99999999, this));
    ui->telephone_e->setValidator(new QIntValidator(0, 99999999, this));
    // Create the model with three columns: one for each header and an empty column for spacing













    Stat_emp();



    // Assuming afficher() returns a QSqlQueryModel
    QSqlQueryModel *model = E->afficher();
    proxyModel->setSourceModel(model);

    QStandardItemModel *standardModel = new QStandardItemModel(model->rowCount(), model->columnCount(), this);

    // Set the horizontal header names to match the database column names
    for (int col = 0; col < model->columnCount(); ++col) {
        standardModel->setHorizontalHeaderItem(col, new QStandardItem(model->headerData(col, Qt::Horizontal).toString()));
    }

    // Populate the table with data
    for (int row = 0; row < model->rowCount(); ++row) {
        for (int col = 0; col < model->columnCount(); ++col) {
            QModelIndex index = model->index(row, col);
            QString data = model->data(index).toString();
            QStandardItem *item = new QStandardItem(data);
            standardModel->setItem(row, col, item);
        }
    }

    ui->tab_employes->setModel(standardModel);

    // In pageemp constructor or initialization

    QTimer *timer = new QTimer(this);
        connect(timer, &QTimer::timeout, this, &pageemp::Stat_emp);
        timer->start(5000);

    connect(ui->tab_employes->selectionModel(), SIGNAL(currentRowChanged(QModelIndex, QModelIndex)),
            this, SLOT(on_tableViewSelectionChanged(QModelIndex, QModelIndex)));
}

pageemp::~pageemp()
{
    delete ui;
    delete E;
}

void pageemp::on_pb_ajouter_clicked()
{
    QMessageBox msgBox;
    msgBox.setText("Confirmation");
    msgBox.setInformativeText("Are you sure you want to add?");
    msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Cancel);

    int reply = msgBox.exec();
    if (reply == QMessageBox::Cancel) {
        return;
    }
    int cin_e = ui->cin_e->text().toInt();
    QString nom_e = ui->nom_e->text();
    QString prenom_e = ui->prenom_e->text();
    QString adresse_e = ui->adresse_e->text();
    QString email_e = ui->email_e->text();
    int telephone_e = ui->telephone_e->text().toInt();
    QString daten_e = ui->daten_e->text();
    QString datee_e = ui->datee_e->text();
    int salaire_e = ui->salaire_e->text().toInt();
    QString role_e = ui->role_e->currentText();
    QString user_e = ui->user_e->text();
    QString pas_e = ui->pas_e->text();
    QString task_e = ui->task_e->currentText();

    if (ui->cin_e->text().isEmpty() || ui->nom_e->text().isEmpty()
        || ui->prenom_e->text().isEmpty() || ui->adresse_e->text().isEmpty()
        || ui->email_e->text().isEmpty() || ui->telephone_e->text().isEmpty()
        || ui->daten_e->text().isEmpty() || ui->datee_e->text().isEmpty() || ui->salaire_e->text().isEmpty() || ui->role_e->currentText().isEmpty()
        || ui->user_e->text().isEmpty() || ui->pas_e->text().isEmpty() || ui->task_e->currentText().isEmpty()) {
        QMessageBox::warning(this, tr("Champs manquants"),
                             tr("Veuillez remplir tous les champs."), QMessageBox::Ok);
        return;
    }
    // Date Format Validation
    QDate date;
    if (!date.fromString(daten_e, "yyyy-MM-dd").isValid()) {
        QMessageBox::warning(this, tr("Format de date incorrect"),
                             tr("Le format de la date de naissance est incorrect. Utilisez le format yyyy-MM-dd."), QMessageBox::Ok);
        return;
    }

    // Email Format Validation
    QRegularExpression emailRegex(R"(\b[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\.[A-Z|a-z]{2,}\b)");
    if (!emailRegex.match(email_e).hasMatch()) {
        QMessageBox::warning(this, tr("Adresse email incorrecte"),
                             tr("Veuillez entrer une adresse email valide."), QMessageBox::Ok);
        return;
    }

    // Character-only Validation
    QRegularExpression characterRegex("^[a-zA-Zéèêëàâäîïôöûüç -]*$");

    if (!characterRegex.match(nom_e).hasMatch() || !characterRegex.match(prenom_e).hasMatch() ||
        !characterRegex.match(adresse_e).hasMatch()) {
        QMessageBox::warning(this, tr("Caractères invalides"),
                             tr("Veuillez utiliser uniquement des caractères alphabétiques pour le nom, le prénom et l'adresse."), QMessageBox::Ok);
        return;
    }
    employe E(cin_e, nom_e, prenom_e, adresse_e, email_e, telephone_e, daten_e, datee_e, role_e, salaire_e,user_e,pas_e,task_e);
    bool test = E.ajouter();
    if (test)
    {
        ui->tab_employes->setModel(E.afficher());

        QMessageBox msgBox(QMessageBox::Information, QObject::tr("OK"),
                           QObject::tr("Ajout effectué. \nClick Cancel to exit."), QMessageBox::Cancel, this);

        // Connect the finished signal to a custom slot
        connect(&msgBox, SIGNAL(finished(int)), this, SLOT(handleMessageBoxResult(int)));

        msgBox.exec();
    }
    else
    {
        QMessageBox msgBox(QMessageBox::Critical, QObject::tr("NOT OK"),
                           QObject::tr("Ajout non effectué. \nClick Cancel to exit."), QMessageBox::Cancel, this);

        // Connect the finished signal to a custom slot
        connect(&msgBox, SIGNAL(finished(int)), this, SLOT(handleMessageBoxResult(int)));

        msgBox.exec();
    }
}

void pageemp::on_pb_supprimer_clicked()
{
    QMessageBox msgBox;
    msgBox.setText("Confirmation");
    msgBox.setInformativeText("Are you sure you want to delete?");
    msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Cancel);

    int reply = msgBox.exec();
    if (reply == QMessageBox::Cancel) {
        return;
    }
    employe E;

    int cin_e = ui->cin_e->text().toInt();
    E.setcin_e(cin_e);

    bool exists = E.checkIfemployeExists(cin_e);
    if (!exists) {
        QMessageBox::critical(nullptr, QObject::tr("Erreur"),
                              QObject::tr("L'employé n'a pas été trouvé dans la base de données.").arg(cin_e),
                              QMessageBox::Cancel);
        return;
    }

    bool test = E.supprimer(cin_e);
    if (test)
    {
        QMessageBox msgBox(QMessageBox::Information, QObject::tr("OK"),
                           QObject::tr("Suppression effectuée. \nClick Cancel to exit."), QMessageBox::Cancel, this);

        // Connect the finished signal to a custom slot
        connect(&msgBox, SIGNAL(finished(int)), this, SLOT(handleMessageBoxResult(int)));

        msgBox.exec();

        ui->tab_employes->setModel(E.afficher());

    }
    else
    {
        QMessageBox msgBox(QMessageBox::Critical, QObject::tr("Erreur"),
                           QObject::tr("Suppression non effectuée. \nClick Cancel to exit."), QMessageBox::Cancel, this);

        // Connect the finished signal to a custom slot
        connect(&msgBox, SIGNAL(finished(int)), this, SLOT(handleMessageBoxResult(int)));

        msgBox.exec();
    }
}

void pageemp::on_pb_modifier_2_clicked()
{
    QMessageBox msgBox;
    msgBox.setText("Confirmation");
    msgBox.setInformativeText("Are you sure you want to modify?");
    msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Cancel);

    int reply = msgBox.exec();
    if (reply == QMessageBox::Cancel) {
        return;
    }

    if (selectedEmployeeRow == -1) {
        // No employee selected
        QMessageBox::warning(this, tr("Aucun employé sélectionné"),
                             tr("Veuillez sélectionner un employé à modifier."), QMessageBox::Ok);
        return;
    }

    int cin_e = ui->cin_e->text().toInt();
    QString nom_e = ui->nom_e->text();
    QString prenom_e = ui->prenom_e->text();
    QString adresse_e = ui->adresse_e->text();
    QString email_e = ui->email_e->text();
    int telephone_e = ui->telephone_e->text().toInt();
    QString daten_e = ui->daten_e->text();
    QString datee_e = ui->datee_e->text();
    QString role_e = ui->role_e->currentText();
    int salaire_e = ui->salaire_e->text().toInt();
    QString user_e = ui->user_e->text();
    QString pas_e = ui->pas_e->text();
    QString task_e = ui->task_e->currentText();

    if (ui->cin_e->text().isEmpty() || ui->nom_e->text().isEmpty()
        || ui->prenom_e->text().isEmpty() || ui->adresse_e->text().isEmpty()
        || ui->email_e->text().isEmpty() || ui->telephone_e->text().isEmpty()
        || ui->daten_e->text().isEmpty() || ui->datee_e->text().isEmpty() || ui->salaire_e->text().isEmpty()
        || ui->role_e->currentText().isEmpty() || ui->user_e->text().isEmpty()
        || ui->pas_e->text().isEmpty() || ui->task_e->currentText().isEmpty()) {
        QMessageBox::warning(this, tr("Champs manquants"),
                             tr("Veuillez remplir tous les champs."), QMessageBox::Ok);
        return;
    }

    employe E(cin_e, nom_e, prenom_e, adresse_e, email_e, telephone_e, daten_e, datee_e, role_e, salaire_e , user_e , pas_e , task_e);
    bool test = E.modifierE(cin_e); // Pass cin_e instead of selectedEmployeeRow
    if (test)
    {
        ui->tab_employes->setModel(E.afficher());

        QMessageBox msgBox(QMessageBox::Information, QObject::tr("OK"),
                           QObject::tr("Modification effectuée. \nClick Cancel to exit."), QMessageBox::Cancel, this);

        // Connect the finished signal to a custom slot
        connect(&msgBox, &QMessageBox::finished, this, &pageemp::handleMessageBoxResult);

        msgBox.exec();
    }
    else
    {
        QMessageBox msgBox(QMessageBox::Critical, QObject::tr("Erreur"),
                           QObject::tr("employe non trouvé ou modification non effectuée\nClick Cancel to exit."), QMessageBox::Cancel, this);

        // Connect the finished signal to a custom slot
        connect(&msgBox, SIGNAL(finished(int)), this, SLOT(handleMessageBoxResult(int)));

        msgBox.exec();
    }
}

void pageemp::handleMessageBoxResult(int result)
{
    if (result == QMessageBox::Cancel)
    {
        // User clicked Cancel, do something if needed
    }
}


void pageemp::on_tableViewSelectionChanged(const QModelIndex &current, const QModelIndex &previous)
{
    Q_UNUSED(previous);

    // Get the selected row
    selectedEmployeeRow = current.row();

    // Fill the line edits with the data from the selected row
    ui->cin_e->setText(ui->tab_employes->model()->index(selectedEmployeeRow, 0).data().toString());
    ui->nom_e->setText(ui->tab_employes->model()->index(selectedEmployeeRow, 1).data().toString());
    ui->prenom_e->setText(ui->tab_employes->model()->index(selectedEmployeeRow, 2).data().toString());
    ui->adresse_e->setText(ui->tab_employes->model()->index(selectedEmployeeRow, 3).data().toString());
    ui->email_e->setText(ui->tab_employes->model()->index(selectedEmployeeRow, 4).data().toString());
    ui->telephone_e->setText(ui->tab_employes->model()->index(selectedEmployeeRow, 5).data().toString());
    ui->daten_e->setText(ui->tab_employes->model()->index(selectedEmployeeRow, 6).data().toString());
    ui->datee_e->setText(ui->tab_employes->model()->index(selectedEmployeeRow, 7).data().toString());
    ui->role_e->setCurrentText(ui->tab_employes->model()->index(selectedEmployeeRow, 8).data().toString());
    ui->salaire_e->setText(ui->tab_employes->model()->index(selectedEmployeeRow, 9).data().toString());
    ui->user_e->setText(ui->tab_employes->model()->index(selectedEmployeeRow, 10).data().toString());
    ui->pas_e->setText(ui->tab_employes->model()->index(selectedEmployeeRow, 11).data().toString());
    ui->task_e->setCurrentText(ui->tab_employes->model()->index(selectedEmployeeRow, 12).data().toString());


    QString task = ui->tab_employes->model()->index(selectedEmployeeRow, 12).data().toString();
        QSqlQuery query;


        }

void pageemp::on_logoutpb_clicked()
{
    close();
    Mainw = new MainWindow(this);
    Mainw->show();
}



void pageemp::on_condpb_clicked()
{
    close();
  pagecond = new Pagecond(this);
  pagecond->show();
}


void pageemp::on_radioButton_clicked()
{
    // Clear the existing proxy model
    delete proxyModel;
    proxyModel = nullptr;

    // Create a new proxy model
    proxyModel = new QSortFilterProxyModel(this);
    proxyModel->setSourceModel(E->afficher());

    // Set the filter case sensitivity based on the radio button state
    Qt::CaseSensitivity caseSensitivity = ui->radioButton->isChecked() ?
                                              Qt::CaseInsensitive : Qt::CaseSensitive;
    proxyModel->setFilterCaseSensitivity(caseSensitivity);

    // Set the filter key column (in this case, the column for "nom")
    proxyModel->setFilterKeyColumn(1);

    // Set the proxy model for the table view
    ui->tab_employes->setModel(proxyModel);
}

void pageemp::on_radioButton_2_clicked()
{
    // Clear the existing proxy model
    delete proxyModel;
    proxyModel = nullptr;

    // Create a new proxy model
    proxyModel = new QSortFilterProxyModel(this);
    proxyModel->setSourceModel(E->afficher());

    // Set the filter case sensitivity based on the radio button state
    Qt::CaseSensitivity caseSensitivity = ui->radioButton_2->isChecked() ?
                                              Qt::CaseInsensitive : Qt::CaseSensitive;
    proxyModel->setFilterCaseSensitivity(caseSensitivity);

    // Set the filter key column (in this case, the column for "prenom")
    proxyModel->setFilterKeyColumn(2);

    // Set the proxy model for the table view
    ui->tab_employes->setModel(proxyModel);
}

void pageemp::on_radioButton_3_clicked()
{
    // Clear the existing proxy model
    delete proxyModel;
    proxyModel = nullptr;

    // Create a new proxy model
    proxyModel = new QSortFilterProxyModel(this);
    proxyModel->setSourceModel(E->afficher());

    // Set the filter case sensitivity based on the radio button state
    Qt::CaseSensitivity caseSensitivity = ui->radioButton_3->isChecked() ?
                                              Qt::CaseInsensitive : Qt::CaseSensitive;
    proxyModel->setFilterCaseSensitivity(caseSensitivity);

    // Set the filter key column (in this case, the column for "CIN")
    proxyModel->setFilterKeyColumn(0);

    // Set the proxy model for the table view
    ui->tab_employes->setModel(proxyModel);
}
void pageemp::on_lineEdit_cursorPositionChanged(int arg1, int arg2)
{
    // Update the filter based on the contents of the line edit
    if (proxyModel != nullptr)
    {
        proxyModel->setFilterRegExp(ui->lineEdit->text());
    }
}

void pageemp::on_sortAscButton_clicked()
{
     QSqlQueryModel *sortedModel = new QSqlQueryModel(this);
           sortedModel->setQuery("SELECT * FROM employe ORDER BY salaire_e ASC");
           // ... set header data for other columns ...
    ui->tab_employes->setModel(sortedModel);
}

void pageemp::on_sortDescButton_clicked()
{
    QSqlQueryModel *sortedModel = new QSqlQueryModel(this);
    sortedModel->setQuery("SELECT * FROM employe ORDER BY salaire_e DESC");
    ui->tab_employes->setModel(sortedModel);
}


void pageemp::on_nomasc_clicked()
{
    // Create a new QSqlQueryModel
    QSqlQueryModel *sortedModel = new QSqlQueryModel(this);

    // Set the query to sort by 'nom_e' in ascending order
    sortedModel->setQuery("SELECT * FROM EMPLOYE ORDER BY nom_e ASC");

    // Update the table view with the sorted model
    ui->tab_employes->setModel(sortedModel);
}



void pageemp::on_pb_pdf_clicked()
{
    QPrinter printer(QPrinter::PrinterResolution);
    printer.setOutputFormat(QPrinter::PdfFormat);
    QString fileName = QFileDialog::getSaveFileName(this, "Save PDF", QString(), "PDF Files (*.pdf)");
    if (fileName.isEmpty())
        return;
    printer.setOutputFileName(fileName);

    // Create a painter
    QPainter painter;
    if (!painter.begin(&printer))
    {
        QMessageBox::warning(this, "Warning", "Failed to open PDF file for writing.");
        return;
    }

    // Get the model from the table view
    QStandardItemModel *model = qobject_cast<QStandardItemModel*>(ui->tab_employes->model());
    if (!model)
    {
        QMessageBox::warning(this, "Warning", "Failed to retrieve table model.");
        return;
    }

    // Set up font and metrics
    QFont font = painter.font();
    font.setPointSize(10); // Adjust as needed
    painter.setFont(font);
    QFontMetrics fontMetrics(font);

    // Calculate cell width and height
    int cellWidth = 120; // Adjust as needed
    int cellHeight = fontMetrics.height() + 5; // Add some extra space for better readability

    // Draw headers
    painter.setPen(Qt::black);
    for (int column = 0; column < model->columnCount(); ++column)
    {
        QString headerText = model->headerData(column, Qt::Horizontal, Qt::DisplayRole).toString();
        QRect headerRect(column * cellWidth, 0, cellWidth, cellHeight);
        painter.drawText(headerRect, Qt::AlignCenter, headerText);
    }

    // Draw grid lines and cell contents
    for (int row = 0; row < model->rowCount(); ++row)
    {
        for (int column = 0; column < model->columnCount(); ++column)
        {
            QModelIndex index = model->index(row, column);
            QString text = model->data(index, Qt::DisplayRole).toString();

            // Draw text in the current cell
            QRect cellRect(column * cellWidth, (row + 1) * cellHeight, cellWidth, cellHeight);
            painter.drawText(cellRect, Qt::AlignLeft | Qt::AlignVCenter, text);

            // Draw horizontal grid lines
            painter.drawLine(0, (row + 1) * cellHeight, model->columnCount() * cellWidth, (row + 1) * cellHeight);
        }
    }

    // Draw vertical grid lines
    for (int column = 0; column < model->columnCount() + 1; ++column)
    {
        painter.drawLine(column * cellWidth, 0, column * cellWidth, (model->rowCount() + 1) * cellHeight);
    }

    // End painting
    painter.end();

    QMessageBox::information(this, "PDF Created", "PDF file has been successfully created.");
}






void pageemp::on_refrech_pb_clicked()
{
    // Clear the line edits
    ui->cin_e->clear();
    ui->nom_e->clear();
    ui->prenom_e->clear();
    ui->adresse_e->clear();
    ui->email_e->clear();
    ui->telephone_e->clear();
    ui->daten_e->clear();
    ui->datee_e->clear();
    ui->role_e->setCurrentIndex(-1); // Clear selection
    ui->salaire_e->clear();
    ui->user_e->clear();
    ui->pas_e->clear();

    // Reset selectedEmployeeRow to -1
    selectedEmployeeRow = -1;

    // Optionally, re-enable the signal-slot connection for handling selection changes
    connect(ui->tab_employes->selectionModel(), SIGNAL(currentRowChanged(QModelIndex, QModelIndex)),
            this, SLOT(on_tableViewSelectionChanged(QModelIndex, QModelIndex)));
}



void pageemp::Stat_emp()
{
    QSqlQuery q1, q2, q3;
    qreal tot = 0, c1 = 0, c2 = 0;

    // Execute queries
    if (!q1.exec("SELECT COUNT(*) FROM EMPLOYE")) {
        qDebug() << "Error executing query q1:" << q1.lastError().text();
        return;
    }
    if (!q2.exec("SELECT COUNT(*) FROM EMPLOYE WHERE ROLE_E = 'Ressource Humaine'")) {
        qDebug() << "Error executing query q2:" << q2.lastError().text();
        return;
    }
    if (!q3.exec("SELECT COUNT(*) FROM EMPLOYE WHERE ROLE_E = 'Receptioniste'")) {
        qDebug() << "Error executing query q3:" << q3.lastError().text();
        return;
    }

    // Retrieve counts
    if (q1.next()) {
        tot = q1.value(0).toDouble();
    }
    if (q2.next()) {
        c1 = q2.value(0).toDouble();
    }
    if (q3.next()) {
        c2 = q3.value(0).toDouble();
    }

    // Calculate percentages
    qreal percentage_c1 = (tot != 0) ? c1 / tot : 0;
    qreal percentage_c2 = (tot != 0) ? c2 / tot : 0;

    // Create series
    QPieSeries *series = new QPieSeries();
    series->setHoleSize(0.35);

    // Append slices
    QPieSlice *resourceHumaineSlice = series->append("Ressource Humaine", percentage_c1);
    QPieSlice *receptionisteSlice = series->append("Receptioniste", percentage_c2);

    // Set colors
    resourceHumaineSlice->setBrush(QColor("#0072BB")); // Blue color for Resource Humaine slice
    receptionisteSlice->setBrush(QColor("#00AEEF"));   // Light blue color for Receptioniste slice

    // Set up chart
    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setAnimationOptions(QChart::SeriesAnimations);
    chart->setTitle("Répartition par rôle");

    // Set up chart view
    QChartView *chartview = new QChartView(chart, ui->lab_chart_pie);
    chartview->setRenderHint(QPainter::Antialiasing);
    chartview->setMinimumSize(600, 600);
    chartview->show();
}

void pageemp::on_statrole_clicked()
{
    QDialog *dialog = new QDialog(this);
    QVBoxLayout *layout = new QVBoxLayout(dialog);

    // Call Stat_emp() to display the statistics
    Stat_emp();

    // Add your chart view to the layout
    layout->addWidget(ui->lab_chart_pie); // Assuming lab_chart_pie is the chart view for Stat_emp()

    // Optionally, set dialog properties such as window title and size
    dialog->setWindowTitle("Employee Statistics");
    dialog->resize(800, 600); // Adjust size as needed

    // Show the dialog
    dialog->exec();
}

