#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addtable.h"
#include <QDebug>
#include <QSqlQuery>

void MainWindow::on_pushButtonAddTable_clicked()
{
    AddTable newTable(ui->spinBoxColumnNumber->value(), ui->lineEditTableName->text());
    newTable.exec();
}
