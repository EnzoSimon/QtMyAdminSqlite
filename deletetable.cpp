#include "ui_mainwindow.h"
#include "mainwindow.h"

#include <QDebug>
#include <QSqlQuery>
#include <QSqlError>

void MainWindow::on_pushButtonDeleteTable_clicked()
{
    // on supprime la table
    QString txtDeleteTable = "DROP TABLE "+ui->listWidgetTablesList->currentItem()->text();
    QSqlQuery deleteTable;

    // on vérifie si la requête s'exécute
    if(deleteTable.exec(txtDeleteTable)) {
        // la requête est fonctionnelle
        ui->statusBar->showMessage(ui->listWidgetTablesList->currentItem()->text()+" has been deleted sucessfully.",8000);
        ui->statusBar->setStyleSheet("color: #1d912d;");
    } else {
        // la requête n'est pas fonctionnelle
        ui->statusBar->showMessage(deleteTable.lastError().text(),8000);
        ui->statusBar->setStyleSheet("color: #a62929;");
    }
}
