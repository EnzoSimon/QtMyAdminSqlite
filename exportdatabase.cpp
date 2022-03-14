#include "ui_mainwindow.h"
#include "mainwindow.h"

#include <QDebug>
#include <QSqlQuery>
#include <QSqlError>



void MainWindow::on_pushButtonExportDatabase_clicked()
{
    qDebug()<<"void MainWindow::on_pushButtonExportDatabase_clicked()";

    QString dbName, dbUser, userPasswd, fileName;

    fileName = ui->lineEditExportFileName->text();


    QString exportCmd="mysqldump -u "+dbUser+" -p "+dbName+" > /Téléchargement/"+fileName+".sql";
    system(exportCmd.toStdString().c_str());

    QString mdpCmd=userPasswd;
    system(exportCmd.toStdString().c_str());
}

