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

    afficherTable();
}


