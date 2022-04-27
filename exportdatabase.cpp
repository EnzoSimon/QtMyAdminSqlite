#include "ui_mainwindow.h"
#include "mainwindow.h"

#include <QDebug>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlDatabase>



void MainWindow::on_pushButtonExportDatabase_clicked()
{
    qDebug()<<"void MainWindow::on_pushButtonExportDatabase_clicked()";

    QString fileName;

    fileName = ui->lineEditExportFileName->text();

    QString exportCmd="mysqldump --host "+QSqlDatabase::database().hostName()+" -u "+QSqlDatabase::database().userName()+" -p"+QSqlDatabase::database().password()+" "+QSqlDatabase::database().databaseName()+" > /home/esimon/Documents/"+fileName+".sql";
    qDebug()<<exportCmd;
    system(exportCmd.toStdString().c_str());

    ui->lineEditExportFileName->clear();

    ui->statusBar->showMessage("Requete réussie !",4000);
    ui->statusBar->setStyleSheet("color: #1d912d;");
}

