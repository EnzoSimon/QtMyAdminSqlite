#include <QDebug>
#include <QApplication>


// insertion de la mainWindow
#include "mainwindow.h"
#include "ui_mainwindow.h"

// insertion de la mainWindow
#include "connexion.h"
#include "ui_connexion.h"

void MainWindow::on_pushButtonChangeDatabase_clicked()
{
    qDebug()<<"void MainWindow::on_pushButton_clicked()";



    Connexion fenConnexion(this);
    fenConnexion.reconnexionLabelTitle();
    fenConnexion.exec();

    //Initialisation de tous les tableaux de l'application
    ui->listWidgetTablesList->clear();

    //Initialisation du tableau tableWidgetSelect
    ui->tableWidgetSelect->clear();
    ui->tableWidgetSelect->setRowCount(0);
    ui->tableWidgetSelect->setColumnCount(0);
    ui->tableWidgetSelect->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    //Initialisation du tableau tableWidgetStructure
    ui->tableWidgetStructure->clear();
    ui->tableWidgetStructure->setRowCount(0);
    ui->tableWidgetStructure->setColumnCount(0);
    ui->tableWidgetStructure->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    //Initialisation du tableau tableWidgetDeleteEntry
    ui->tableWidgetDeleteEntry->clear();
    ui->tableWidgetDeleteEntry->setRowCount(0);
    ui->tableWidgetDeleteEntry->setColumnCount(0);
    ui->tableWidgetDeleteEntry->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    //Initialisation du tableau tableWidgetRequestInsert
    ui->tableWidgetRequestInsert->clear();
    ui->tableWidgetRequestInsert->setRowCount(0);
    ui->tableWidgetRequestInsert->setColumnCount(0);
    ui->tableWidgetRequestInsert->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    afficherTable();
}


