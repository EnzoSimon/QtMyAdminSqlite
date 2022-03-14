#include "connexion.h"
#include "ui_connexion.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSqlDatabase>
#include <QDebug>

Connexion::Connexion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Connexion)
{
    ui->setupUi(this);
    ui->labelConnectionError->setVisible(0);
}

Connexion::~Connexion()
{
    delete ui;
}

void Connexion::reconnexionLabelTitle()
{
    ui->labelTitle->setVisible(0);
}

void Connexion::on_pushButton_clicked()
{
    // connexion à la base de données
    QSqlDatabase maBase = QSqlDatabase::addDatabase("QMYSQL");
    maBase.setHostName(ui->lineEditHostname->text());
    maBase.setDatabaseName(ui->lineEditDatabase->text());
    maBase.setUserName(ui->lineEditUsername->text());
    maBase.setPassword(ui->lineEditPassword->text());


    if(ui->lineEditHostname->text().isEmpty()){
        ui->lineEditHostname->setStyleSheet("background: #ed6b6b; color: white; border: 2px solid #a13838; ");
        ui->lineEditHostname->setPlaceholderText("Enter text !");
    }
    if(ui->lineEditDatabase->text().isEmpty()){
        ui->lineEditDatabase->setStyleSheet("background: #ed6b6b; color: white; border: 2px solid #a13838; ");
        ui->lineEditDatabase->setPlaceholderText("Enter text !");
    }
    if(ui->lineEditPassword->text().isEmpty()){
        ui->lineEditPassword->setStyleSheet("background: #ed6b6b; color: white; border: 2px solid #a13838; ");
        ui->lineEditPassword->setPlaceholderText("Enter text !");
    }
    if(ui->lineEditUsername->text().isEmpty()){
        ui->lineEditUsername->setStyleSheet("background: #ed6b6b; color: white; border: 2px solid #a13838; ");
        ui->lineEditUsername->setPlaceholderText("Enter text !");
    }


    // ouverture de la base
    bool ok = maBase.open();
    qDebug()<<ok;

    if(ok==true) {
        qDebug()<<"accept";
        dbName=ui->lineEditDatabase->text();
        dbUser=ui->lineEditUsername->text();
        dbMdp=ui->lineEditPassword->text();

        // on renvoie à la MainWindow que l'utilisateur est connecté
        accept();

    } else {

        ui->labelConnectionError->setVisible(1);

    }
}

void Connexion::on_pushButtonCancel_clicked()
{
    close();
}
