#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sqltextrequest.cpp"
#include "tableinsert.cpp"
#include "tablelist.cpp"
#include "changedatabase.cpp"
#include "deletesqlentry.cpp"
#include "deletetable.cpp"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    afficherTable();

    // on désactive le bouton au démarrage de l'appli
    ui->pushButtonDeleteTable->setEnabled(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_action_Close_triggered()
{
    close();
}

void MainWindow::on_actionChange_Database_triggered()
{
    on_pushButtonChangeDatabase_clicked();
}

