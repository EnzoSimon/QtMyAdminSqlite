#include "ui_mainwindow.h"
#include "mainwindow.h"

#include <QDebug>
#include <QSqlQuery>
#include <QSqlError>

void MainWindow::on_pushButtonDeleteEntry_clicked()
{
    qDebug()<<"void MainWindow::on_pushButtonDeleteEntry_clicked()";

    // on va supprimer la ligne voulue
    QString txtDeleteRequest = "DELETE FROM "+ui->listWidgetTablesList->currentItem()->text()+" WHERE ";
    QStringList listeDesNomsDeChamp,listeDesValeursDeChamp, listeDesConditionsDuWhere;

    // récupération de la ligne actuelle
    int ligneASuppr=ui->tableWidgetDeleteEntry->currentRow();

    for (int counter = 0; counter < ui->tableWidgetDeleteEntry->horizontalHeader()->count(); counter++)
    {
        QString champ=ui->tableWidgetDeleteEntry->horizontalHeaderItem(counter)->text();
        QString valeur=ui->tableWidgetDeleteEntry->item(ligneASuppr,counter)->text().replace("'","''");
        // on ajoute à notre condition
        if(valeur.isEmpty()) {
            valeur += "NULL";
            listeDesConditionsDuWhere.append(champ+"="+valeur);
        } else {
            listeDesConditionsDuWhere.append(champ+"='"+valeur+"'");
        }
    }
    QString WHERE=listeDesConditionsDuWhere.join(" AND ");
    txtDeleteRequest += WHERE;

    QSqlQuery deleteRequest(txtDeleteRequest);
    qDebug()<<txtDeleteRequest;

    // on exécute la requête
    if(deleteRequest.exec()) {
        // la requête est fonctionnelle
        ui->statusBar->showMessage("The SQL request has been executed sucessfully.",8000);
        ui->statusBar->setStyleSheet("color: #1d912d;");
    } else {
        // la requête n'est pas fonctionnelle
        ui->statusBar->showMessage(deleteRequest.lastError().text(),8000);
        ui->statusBar->setStyleSheet("color: #a62929;");
    }
}
