#include "pagecond.h"
#include "ui_pagecond.h"
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
#include <cond.h>
#include "mainwindow.h"
#include "pagecond.h"
#include "pagemenu.h"
#include <pagemenu.h>
#include <QSortFilterProxyModel>
#include <QPrinter>
#include <QPainter>
#include <QPrintDialog>
#include <QFileDialog>
#include <QMessageBox>
#include <QStandardItemModel>
#include <QDesktopServices>
#include <QTextDocumentWriter>
#include <QtCharts>
#include<QtCharts>
#include<QChartView>
#include<QPieSeries>
#include <iostream>
#include <fstream>
#include <QSqlTableModel>
#include <QDir>
#include <QPdfWriter>
#include <QTextDocument>
#include <QDesktopServices>
#include <QDate>
#include <QSqlError>
#include <QtCharts/QChart>
#include <QPieSeries>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <fstream>
#include <QMessageBox>
#include <QIntValidator>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QFile>
#include <QSortFilterProxyModel>
#include <QPdfWriter>
#include <QPainter>
#include <QFileDialog>
#include <QTextDocument>
#include <QTextEdit>
#include <QTextStream>
#include<QWidget>
#include <QtSvg/QSvgRenderer>
#include<QDirModel>
#include <QTimer>

#include "qrcode.h"
using qrcodegen::QrCode;
using qrcodegen::QrSegment;
Pagecond::Pagecond(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Pagecond)
{
    ui->setupUi(this);


    ui->cin_c->setValidator(new QIntValidator(0, 99999999, this));
    tableView = findChild<QTableView*>("tab_cond");
      if (!tableView) {
          qDebug() << "Could not find tab_cond QTableView!";
          return;
      }

    S = new cond(); // Initialize the cond object

    QSqlQueryModel *model = S->afficher();
    int numRows = model->rowCount();
    int numCols = model->columnCount();

    ui->tab_cond->setRowCount(numRows);
    ui->tab_cond->setColumnCount(numCols);

    // Set the horizontal header labels to match the database column names
    QStringList headerLabels;
    for (int col = 0; col < numCols; ++col) {
        headerLabels << model->headerData(col, Qt::Horizontal).toString();
    }
    ui->tab_cond->setHorizontalHeaderLabels(headerLabels);

    for (int row = 0; row < numRows; ++row) {
        for (int col = 0; col < numCols; ++col) {
            QModelIndex index = model->index(row, col);
            QString data = model->data(index).toString();
            QTableWidgetItem *item = new QTableWidgetItem(data);
            ui->tab_cond->setItem(row, col, item);
        }
    }
    refreshTimer = new QTimer(this);
       connect(refreshTimer, &QTimer::timeout, this, &Pagecond::Stat);
       refreshTimer->start(5000);
    connect(ui->sortAscButton, SIGNAL(clicked()), this, SLOT(on_sortAscButton_clicked()));
    connect(ui->sortDescButton, SIGNAL(clicked()), this, SLOT(on_sortDescButton_clicked()));
    connect(ui->QR, SIGNAL(clicked()), this, SLOT(on_QR_clicked()));

    connect(ui->tab_cond, SIGNAL(itemClicked(QTableWidgetItem*)), this, SLOT(on_tab_cond_itemClicked(QTableWidgetItem*)));
}

Pagecond::~Pagecond()
{
    delete ui;
    delete S; // Don't forget to delete S
}

void Pagecond::on_pb_ajouter_clicked()
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
    // Retrieve values from UI elements
    QString cin_c_str = ui->cin_c->text();
    QString nom_c = ui->nom_c->text();
    QString prenom_c = ui->prenom_c->text();
    QString daten_c = ui->daten_c->text();
    QString Nation_c = ui->Nation_c->text();
    QString cin_e_str = ui->cin_e->text();
    QString genre_c = ui->genre_c->currentText();

    // Input validation
    if (cin_c_str.isEmpty() || nom_c.isEmpty() || prenom_c.isEmpty() ||
        daten_c.isEmpty()|| Nation_c.isEmpty()|| genre_c.isEmpty() ||
        cin_e_str.isEmpty()) {
        QMessageBox::warning(this, tr("Champs manquants"),
                             tr("Veuillez remplir tous les champs."), QMessageBox::Ok);
        return;
    }

    // Validate id_a (should be a number)
    bool cin_c_ok;
    int cin_c = cin_c_str.toInt(&cin_c_ok);
    if (!cin_c_ok) {
        QMessageBox::warning(this, tr("Erreur de saisie"),
                             tr("Le cin doit être un nombre valide."), QMessageBox::Ok);
        return;
    }



    // Validate cin_e (should be a number)
    bool cin_e_ok;
    int cin_e = cin_e_str.toInt(&cin_e_ok);
    if (!cin_e_ok) {
        QMessageBox::warning(this, tr("Erreur de saisie"),
                             tr("Le numéro de carte d'identité doit être un nombre valide."), QMessageBox::Ok);
        return;
    }

    // Validate nom_a (should contain only characters)
       QRegExp rx("^[a-zA-Z]+$"); // Regular expression for only characters
       if (!nom_c.contains(rx)) {
           QMessageBox::warning(this, tr("Erreur de saisie"),
                                tr("Le nom ne doit contenir que des lettres."), QMessageBox::Ok);
           return;
       }

       // Validate description_a (should contain only characters)
       rx.setPattern("^[a-zA-Z]+$"); // Regular expression for only characters
       if (!prenom_c.contains(rx)) {
           QMessageBox::warning(this, tr("Erreur de saisie"),
                                tr("La description ne doit contenir que des lettres."), QMessageBox::Ok);
           return;
       }

    // If all validations pass, proceed with adding the activity
    cond S(cin_c, nom_c, prenom_c, daten_c, Nation_c, genre_c);
    S.setcin_e(cin_e);
    bool test = S.ajouter();
    if (test)
    {
        refreshTable();
        QMessageBox msgBox(QMessageBox::Information, QObject::tr("OK"),
                           QObject::tr("Ajout effectué. \nCliquez sur Annuler pour quitter."), QMessageBox::Cancel, this);

        // Connect the finished signal to a custom slot
        connect(&msgBox, SIGNAL(finished(int)), this, SLOT(handleMessageBoxResult(int)));

        msgBox.exec();
    }
    else
    {
        QMessageBox msgBox(QMessageBox::Critical, QObject::tr("NON OK"),
                           QObject::tr("Ajout non effectué. \nCliquez sur Annuler pour quitter."), QMessageBox::Cancel, this);

        // Connect the finished signal to a custom slot
        connect(&msgBox, SIGNAL(finished(int)), this, SLOT(handleMessageBoxResult(int)));

        msgBox.exec();
    }
}


void Pagecond::on_pb_supprimer_clicked()
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
    cond S;

    int cin_c = ui->cin_c->text().toInt();
    S.setcin_c(cin_c);

    bool exists = S.checkIfcondExists(cin_c);
    if (!exists) {
        QMessageBox::critical(nullptr, QObject::tr("Erreur"),
                              QObject::tr("Le condidat n'a pas été trouvé dans la base de données.").arg(cin_c),
                              QMessageBox::Cancel);
        return;
    }

    bool test = S.supprimer(cin_c);
    if (test)
    {
        refreshTable();
        QMessageBox msgBox(QMessageBox::Information, QObject::tr("OK"),
                           QObject::tr("Suppression effectuée. \nClick Cancel to exit."), QMessageBox::Cancel, this);

        // Connect the finished signal to a custom slot
        connect(&msgBox, SIGNAL(finished(int)), this, SLOT(handleMessageBoxResult(int)));

        msgBox.exec();
    }
    else
    {
        QMessageBox msgBox(QMessageBox::Critical, QObject::tr("Erreur"),
                           QObject::tr("Suppression non effectuée. \nClick Cancel to exit.."), QMessageBox::Cancel, this);

        // Connect the finished signal to a custom slot
        connect(&msgBox, SIGNAL(finished(int)), this, SLOT(handleMessageBoxResult(int)));

        msgBox.exec();
    }
}

void Pagecond::on_pb_modifier_2_clicked()
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
    // Retrieve values from UI elements
    int cin_c = ui->cin_c->text().toInt();
    QString nom_c = ui->nom_c->text();
    QString prenom_c = ui->prenom_c->text();
    QString daten_c = ui->daten_c->text();
    QString Nation_c = ui->Nation_c->text();
    QString genre_c = ui->genre_c->currentText();

    // Input validation
    if (ui->cin_c->text().isEmpty() || ui->nom_c->text().isEmpty() ||
        ui->prenom_c->text().isEmpty() || ui->daten_c->text().isEmpty() ||
           ui->Nation_c->text().isEmpty()|| ui->genre_c->currentText().isEmpty()) {
        QMessageBox::warning(this, tr("Champs manquants"),
                             tr("Veuillez remplir tous les champs."), QMessageBox::Ok);
        return;
    }

    // Validate id_a (should be a number)
    bool cin_c_ok;
    cin_c = ui->cin_c->text().toInt(&cin_c_ok);
    if (!cin_c_ok) {
        QMessageBox::warning(this, tr("Erreur de saisie"),
                             tr("Le condidat doit être un nombre valide."), QMessageBox::Ok);
        return;
    }





    QRegExp rx("^[a-zA-Z]+$"); // Regular expression for only characters
    if (!nom_c.contains(rx)) {
        QMessageBox::warning(this, tr("Erreur de saisie"),
                             tr("Le nom ne doit contenir que des lettres."), QMessageBox::Ok);
        return;
    }


    rx.setPattern("^[a-zA-Z]+$"); // Regular expression for only characters
    if (!prenom_c.contains(rx)) {
        QMessageBox::warning(this, tr("Erreur de saisie"),
                             tr("La description ne doit contenir que des lettres."), QMessageBox::Ok);
        return;
    }

    // Retrieve cin_e
    int cin_e = ui->cin_e->text().toInt();

    // Proceed with modifying the activity
    cond S(cin_c, nom_c, prenom_c, daten_c, Nation_c, genre_c);
    S.setcin_e(cin_e);
    bool test = S.modifierE(cin_c);
    if (test)
    {
        refreshTable();
        QMessageBox msgBox(QMessageBox::Information, QObject::tr("OK"),
                           QObject::tr("Modification effectuée. \nCliquez sur Annuler pour quitter."), QMessageBox::Cancel, this);

        // Connect the finished signal to a custom slot
        connect(&msgBox, SIGNAL(finished(int)), this, SLOT(handleMessageBoxResult(int)));

        msgBox.exec();
    }
    else
    {
        QMessageBox msgBox(QMessageBox::Critical, QObject::tr("Erreur"),
                           QObject::tr("cond non trouvé ou modification non effectuée\nCliquez sur Annuler pour quitter."), QMessageBox::Cancel, this);

        // Connect the finished signal to a custom slot
        connect(&msgBox, SIGNAL(finished(int)), this, SLOT(handleMessageBoxResult(int)));

        msgBox.exec();
    }
}

void Pagecond::on_tab_cond_itemClicked(QTableWidgetItem *item)
{
    int row = item->row();

    ui->cin_c->setText(ui->tab_cond->item(row, 0)->text());
    ui->cin_e->setText(ui->tab_cond->item(row, 6)->text());
    ui->nom_c->setText(ui->tab_cond->item(row, 1)->text());
    ui->prenom_c->setText(ui->tab_cond->item(row, 2)->text());
    ui->daten_c->setText(ui->tab_cond->item(row, 3)->text());
    ui->Nation_c->setText(ui->tab_cond->item(row, 5)->text());
    ui->genre_c->setCurrentText(ui->tab_cond->item(row, 4)->text());
}

void Pagecond::on_logoutpb3_clicked()
{
    hide();
    Mainw = new MainWindow(this);
    Mainw->show();
}



void Pagecond::on_employe3pb_clicked()
{
    hide();
    Pageemp = new pageemp(this);
    Pageemp->show();
}


void Pagecond::on_back3pb_clicked()
{

}

void Pagecond::handleMessageBoxResult(int result)
{
    if (result == QMessageBox::Cancel)
    {
        // User clicked Cancel, do something if needed
    }
}

void Pagecond::refreshTable()
{
    // Refresh the table view with updated data
    QSqlQueryModel *model = S->afficher();

    int numRows = model->rowCount();
    int numCols = model->columnCount();

    ui->tab_cond->setRowCount(numRows);
    ui->tab_cond->setColumnCount(numCols);

    // Set the horizontal header labels to match the database column names
    QStringList headerLabels;
    for (int col = 0; col < numCols; ++col) {
        headerLabels << model->headerData(col, Qt::Horizontal).toString();
    }
    ui->tab_cond->setHorizontalHeaderLabels(headerLabels);

    // Populate the table with data
    for (int row = 0; row < numRows; ++row) {
        for (int col = 0; col < numCols; ++col) {
            QModelIndex index = model->index(row, col);
            QString data = model->data(index).toString();
            QTableWidgetItem *item = new QTableWidgetItem(data);
            ui->tab_cond->setItem(row, col, item);
        }
    }
}





void Pagecond::on_pb_pdf_clicked()
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
    QAbstractItemModel *model = ui->tab_cond->model();
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




void Pagecond::on_refrech_pb_clicked()
{

       ui->cin_c->clear();
       ui->nom_c->clear();
       ui->prenom_c->clear();
       ui->daten_c->clear();
       ui->Nation_c->clear();
       ui->genre_c->clear();


   }






void Pagecond::on_lineEdit_textChanged(const QString &arg1)
{
    QString filterText = arg1.trimmed(); // Retrieve the text entered in the QLineEdit widget

    // Determine the filter type based on the selected radio button
    int filterColumn = -1;
    if (ui->radioButtonNom->isChecked()) {
        filterColumn = 1; // Assuming `nom` is in column 1
    } else if (ui->radioButtonPrenom->isChecked()) {
        filterColumn = 2; // Assuming `prenom` is in column 2
    } else if (ui->radioButtonCin->isChecked()) {
        filterColumn = 0; // Assuming `cin` is in column 0
    }

    if (filterColumn == -1) {
        return; // No filter column selected, exit early
    }

    // Get the original model
    QSqlQueryModel *originalModel = S->afficher();
    int numRows = originalModel->rowCount();
    int numCols = originalModel->columnCount();

    // Create a new model to hold the filtered data
    QStandardItemModel *filteredModel = new QStandardItemModel(this);

    // Set the horizontal header labels to match the database column names
    QStringList headerLabels;
    for (int col = 0; col < numCols; ++col) {
        headerLabels << originalModel->headerData(col, Qt::Horizontal).toString();
    }
    filteredModel->setHorizontalHeaderLabels(headerLabels);

    // Iterate over the original model, filter the data, and populate the filtered model
    for (int row = 0; row < numRows; ++row) {
        QModelIndex index = originalModel->index(row, filterColumn);
        QString data = originalModel->data(index).toString();
        if (data.contains(filterText, Qt::CaseInsensitive)) { // Case-insensitive match
            QList<QStandardItem *> items;
            for (int col = 0; col < numCols; ++col) {
                items.append(new QStandardItem(originalModel->data(originalModel->index(row, col)).toString()));
            }
            filteredModel->appendRow(items);
        }
    }

    // Clear the existing items in the table
    ui->tab_cond->clearContents();
    ui->tab_cond->setRowCount(0);

    // Populate the table with the filtered data
    ui->tab_cond->setRowCount(filteredModel->rowCount());
    ui->tab_cond->setColumnCount(filteredModel->columnCount());
    for (int row = 0; row < filteredModel->rowCount(); ++row) {
        for (int col = 0; col < filteredModel->columnCount(); ++col) {
            QString data = filteredModel->data(filteredModel->index(row, col)).toString();
            QTableWidgetItem *item = new QTableWidgetItem(data);
            ui->tab_cond->setItem(row, col, item);
        }
    }

    // Clean up the memory allocated for the filtered model
    delete filteredModel;
}


void Pagecond::on_sortAscButton_clicked()
{
    // Retrieve the original data from the database
    QSqlQueryModel *originalModel = S->afficher();

    // Sort the data by the id_a column in ascending order
    originalModel->setQuery("SELECT * FROM cond ORDER BY cin_c ASC");
refreshTable(originalModel);

}
void Pagecond::on_nomasc_clicked()
{
    // Retrieve the original data from the database, sorted by `nom_c` in ascending order
    QSqlQueryModel *sortedModel = new QSqlQueryModel();
    sortedModel->setQuery("SELECT * FROM cond ORDER BY nom_c ASC");

    // Check for query execution errors
    if (sortedModel->lastError().isValid()) {
        QMessageBox::critical(this, "Error", sortedModel->lastError().text());
        return;
    }

    // Refresh the table with the sorted data
    int numRows = sortedModel->rowCount();
    int numCols = sortedModel->columnCount();

    ui->tab_cond->setRowCount(numRows);
    ui->tab_cond->setColumnCount(numCols);

    // Set the horizontal header labels to match the database column names
    QStringList headerLabels;
    for (int col = 0; col < numCols; ++col) {
        headerLabels << sortedModel->headerData(col, Qt::Horizontal).toString();
    }
    ui->tab_cond->setHorizontalHeaderLabels(headerLabels);

    // Populate the table with data
    for (int row = 0; row < numRows; ++row) {
        for (int col = 0; col < numCols; ++col) {
            QModelIndex index = sortedModel->index(row, col);
            QString data = sortedModel->data(index).toString();
            QTableWidgetItem *item = new QTableWidgetItem(data);
            ui->tab_cond->setItem(row, col, item);
        }
    }

    // Clean up the memory allocated for the sorted model
    delete sortedModel;
}


void Pagecond::on_sortDescButton_clicked()
{
    // Retrieve the original data from the database
    QSqlQueryModel *originalModel = S->afficher();

    // Sort the data by the id_a column in descending order
    originalModel->setQuery("SELECT * FROM cond ORDER BY cin_c DESC");

 refreshTable(originalModel);

}
void Pagecond::refreshTable(QSqlQueryModel *model)
{
    int numRows = model->rowCount();
    int numCols = model->columnCount();

    ui->tab_cond->setRowCount(numRows);
    ui->tab_cond->setColumnCount(numCols);

    // Set the horizontal header labels to match the database column names
    QStringList headerLabels;
    for (int col = 0; col < numCols; ++col) {
        headerLabels << model->headerData(col, Qt::Horizontal).toString();
    }
    ui->tab_cond->setHorizontalHeaderLabels(headerLabels);

    // Populate the table with data
    for (int row = 0; row < numRows; ++row) {
        for (int col = 0; col < numCols; ++col) {
            QModelIndex index = model->index(row, col);
            QString data = model->data(index).toString();
            QTableWidgetItem *item = new QTableWidgetItem(data);
            ui->tab_cond->setItem(row, col, item);
        }
    }
}

void Pagecond::on_QR_clicked()
{
    if(ui->tab_cond->currentIndex().row() == -1) {
        QMessageBox::information(nullptr, QObject::tr("qr"),
                                 QObject::tr("Veuillez Choisir un identifiant.\n"
                                             "Click Ok to exit."), QMessageBox::Ok);
    } else {
        // Retrieve data from the selected row in the table
        QModelIndex currentIndex = ui->tab_cond->currentIndex();
        QString cin_c = ui->tab_cond->model()->index(currentIndex.row(), 0).data().toString();
        QString nom_c = ui->tab_cond->model()->index(currentIndex.row(), 1).data().toString();
        QString prenom_c = ui->tab_cond->model()->index(currentIndex.row(), 2).data().toString();
        QString daten_c = ui->tab_cond->model()->index(currentIndex.row(), 3).data().toString();
        QString genre_c = ui->tab_cond->model()->index(currentIndex.row(), 4).data().toString();
        QString nation_c = ui->tab_cond->model()->index(currentIndex.row(), 5).data().toString();
        QString cin_e = ui->tab_cond->model()->index(currentIndex.row(), 6).data().toString();

        // Concatenate data into a single string (or use a suitable format)
        QString qrData = "CIN_C: " + cin_c + "\n"
                         + "NOM_C: " + nom_c + "\n"
                         + "PRENOM_C: " + prenom_c + "\n"
                         + "DATEN_C: " + daten_c + "\n"
                         + "GENRE_C: " + genre_c + "\n"
                         + "NATION_C: " + nation_c + "\n"
                         + "CIN_E: " + cin_e;

        // Use the data to generate the QR code
        const QrCode qr = QrCode::encodeText(qrData.toStdString().c_str(), QrCode::Ecc::LOW);

        // Save the QR code to a file
        std::ofstream myfile;
        myfile.open("qrcode.svg");
        myfile << qr.toSvgString(1);
        myfile.close();

        // Load the QR code image
        QPixmap pix("qrcode.svg");

        // Scale the image as needed
        QPixmap scaledPix = pix.scaled(200, 200);

        // Display the QR code image
        ui->QRCODE_3->setPixmap(scaledPix);
    }
}

void Pagecond::Stat()
{
    QSqlQuery q1;
    qreal total = 0, countHomme = 0, countFemme = 0;

    // Execute query to get count of 'homme'
    if (!q1.exec("SELECT COUNT(*) FROM cond WHERE genre_c = 'homme'")) {
        qDebug() << "Error executing query for homme:" << q1.lastError().text();
        return;
    }
    if (q1.next()) {
        countHomme = q1.value(0).toDouble();
        total += countHomme;
    }

    // Execute query to get count of 'femme'
    if (!q1.exec("SELECT COUNT(*) FROM cond WHERE genre_c = 'femme'")) {
        qDebug() << "Error executing query for femme:" << q1.lastError().text();
        return;
    }
    if (q1.next()) {
        countFemme = q1.value(0).toDouble();
        total += countFemme;
    }

    // Calculate percentages
    qreal percentageHomme = (total != 0) ? countHomme / total : 0;
    qreal percentageFemme = (total != 0) ? countFemme / total : 0;

    // Create series
    QPieSeries *series = new QPieSeries();
    series->setHoleSize(0.35);

    // Append slices
    QPieSlice *sliceHomme = series->append("Homme", percentageHomme);
    QPieSlice *sliceFemme = series->append("Femme", percentageFemme);

    // Set colors
    sliceHomme->setBrush(QColor("#0072BB")); // Blue color
    sliceFemme->setBrush(QColor(Qt::red));   // Red color

    // Set up chart
    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setAnimationOptions(QChart::SeriesAnimations);
    chart->setTitle("Distribution by Gender");

    // Set up chart view
    QChartView *chartview = new QChartView(chart, ui->lab_chart);
    chartview->setRenderHint(QPainter::Antialiasing);
    chartview->setMinimumSize(600, 600);
    chartview->show();
}

void Pagecond::on_stat_clicked()
{
    QDialog *dialog = new QDialog(this);
    QVBoxLayout *layout = new QVBoxLayout(dialog);

    Pagecond *dialogStats = new Pagecond();
    dialogStats->Stat();

    // Add the chart view to the layout
    layout->addWidget(dialogStats->ui->lab_chart);

    dialog->setWindowTitle("Activity Statistics");
    dialog->resize(800, 600);

    // Show the dialog
    dialog->exec();
}


void Pagecond::disableEmploye3pb()
{
    ui->employe3pb->setEnabled(false);
}


void Pagecond::on_lineEditd_textChanged(const QString &arg1)
{

}

void Pagecond::on_filterRadioButtons_toggled(bool checked)
{
}

void Pagecond::on_radioButtonNom_clicked()
{
    QString nom = ui->lineEdit->text().trimmed();  // Get the search text

    // Get the original model
    QSqlQueryModel *originalModel = S->afficher();
    int numRows = originalModel->rowCount();
    int numCols = originalModel->columnCount();

    // Create a new model to hold the filtered data
    QStandardItemModel *filteredModel = new QStandardItemModel(this);

    // Set the horizontal header labels to match the database column names
    QStringList headerLabels;
    for (int col = 0; col < numCols; ++col) {
        headerLabels << originalModel->headerData(col, Qt::Horizontal).toString();
    }
    filteredModel->setHorizontalHeaderLabels(headerLabels);

    // Clear the table first
    ui->tab_cond->clearContents();
    ui->tab_cond->setRowCount(0);

    // Filter by `nom`
    for (int row = 0; row < numRows; ++row) {
        QModelIndex index = originalModel->index(row, 1); // Assuming `nom` is in column 1
        QString data = originalModel->data(index).toString();
        if (data.contains(nom, Qt::CaseInsensitive)) {  // Case-insensitive match
            QList<QStandardItem *> items;
            for (int col = 0; col < numCols; ++col) {
                items.append(new QStandardItem(originalModel->data(originalModel->index(row, col)).toString()));
            }
            filteredModel->appendRow(items);
        }
    }

    // Update the table
    ui->tab_cond->setRowCount(filteredModel->rowCount());
    ui->tab_cond->setColumnCount(filteredModel->columnCount());
    for (int row = 0; row < filteredModel->rowCount(); ++row) {
        for (int col = 0; col < filteredModel->columnCount(); ++col) {
            QString data = filteredModel->data(filteredModel->index(row, col)).toString();
            QTableWidgetItem *item = new QTableWidgetItem(data);
            ui->tab_cond->setItem(row, col, item);
        }
    }

    delete filteredModel;
}



void Pagecond::on_radioButtonPrenom_clicked()
{
    QString prenom = ui->lineEdit->text().trimmed();  // Get the search text

    // Get the original model
    QSqlQueryModel *originalModel = S->afficher();
    int numRows = originalModel->rowCount();
    int numCols = originalModel->columnCount();

    // Create a new model to hold the filtered data
    QStandardItemModel *filteredModel = new QStandardItemModel(this);

    // Set the horizontal header labels to match the database column names
    QStringList headerLabels;
    for (int col = 0; col < numCols; ++col) {
        headerLabels << originalModel->headerData(col, Qt::Horizontal).toString();
    }
    filteredModel->setHorizontalHeaderLabels(headerLabels);

    // Clear the table first
    ui->tab_cond->clearContents();
    ui->tab_cond->setRowCount(0);

    // Filter by `prenom`
    for (int row = 0; row < numRows; ++row) {
        QModelIndex index = originalModel->index(row, 2); // Assuming `prenom` is in column 2
        QString data = originalModel->data(index).toString();
        if (data.contains(prenom, Qt::CaseInsensitive)) {  // Case-insensitive match
            QList<QStandardItem *> items;
            for (int col = 0; col < numCols; ++col) {
                items.append(new QStandardItem(originalModel->data(originalModel->index(row, col)).toString()));
            }
            filteredModel->appendRow(items);
        }
    }

    // Update the table
    ui->tab_cond->setRowCount(filteredModel->rowCount());
    ui->tab_cond->setColumnCount(filteredModel->columnCount());
    for (int row = 0; row < filteredModel->rowCount(); ++row) {
        for (int col = 0; col < filteredModel->columnCount(); ++col) {
            QString data = filteredModel->data(filteredModel->index(row, col)).toString();
            QTableWidgetItem *item = new QTableWidgetItem(data);
            ui->tab_cond->setItem(row, col, item);
        }
    }

    delete filteredModel;
}

void Pagecond::on_radioButtonCin_clicked()
{
    QString cin = ui->lineEdit->text().trimmed();  // Get the search text

    // Get the original model
    QSqlQueryModel *originalModel = S->afficher();
    int numRows = originalModel->rowCount();
    int numCols = originalModel->columnCount();

    // Create a new model to hold the filtered data
    QStandardItemModel *filteredModel = new QStandardItemModel(this);

    // Set the horizontal header labels to match the database column names
    QStringList headerLabels;
    for (int col = 0; col < numCols; ++col) {
        headerLabels << originalModel->headerData(col, Qt::Horizontal).toString();
    }
    filteredModel->setHorizontalHeaderLabels(headerLabels);

    // Clear the table first
    ui->tab_cond->clearContents();
    ui->tab_cond->setRowCount(0);

    // Filter by `cin`
    for (int row = 0; row < numRows; ++row) {
        QModelIndex index = originalModel->index(row, 0); // Assuming `cin` is in column 0
        QString data = originalModel->data(index).toString();
        if (data.contains(cin, Qt::CaseInsensitive)) {  // Case-insensitive match
            QList<QStandardItem *> items;
            for (int col = 0; col < numCols; ++col) {
                items.append(new QStandardItem(originalModel->data(originalModel->index(row, col)).toString()));
            }
            filteredModel->appendRow(items);
        }
    }

    // Update the table
    ui->tab_cond->setRowCount(filteredModel->rowCount());
    ui->tab_cond->setColumnCount(filteredModel->columnCount());
    for (int row = 0; row < filteredModel->rowCount(); ++row) {
        for (int col = 0; col < filteredModel->columnCount(); ++col) {
            QString data = filteredModel->data(filteredModel->index(row, col)).toString();
            QTableWidgetItem *item = new QTableWidgetItem(data);
            ui->tab_cond->setItem(row, col, item);
        }
    }

    delete filteredModel;
}

