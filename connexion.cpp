#include "connexion.h"
#include "ui_connexion.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QSqlDatabase>
#include <QDebug>

Connexion::Connexion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Connexion)
{
    ui->setupUi(this);
    ui->labelConnectionError->setVisible(0);
    ui->pushButtonBrowse->setVisible(0);

    //Affichage des type de database
    ui->comboBoxTypeDatabase->addItems(QSqlDatabase::database().drivers());
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
        QSqlDatabase maBase = QSqlDatabase::addDatabase(ui->comboBoxTypeDatabase->currentText());
        maBase.setDatabaseName(ui->lineEditDatabase->text());

        if(ui->comboBoxTypeDatabase->currentText() !="QSQLITE"){
        maBase.setUserName(ui->lineEditUsername->text());
        maBase.setPassword(ui->lineEditPassword->text());
        maBase.setHostName(ui->lineEditHostname->text());
        }


        if(ui->lineEditDatabase->text().isEmpty()){
            ui->lineEditDatabase->setStyleSheet("background: #ed6b6b; color: white; border: 2px solid #a13838; ");
            ui->lineEditDatabase->setPlaceholderText("Enter text !");
        }


        // ouverture de la base
        bool ok = maBase.open();
        qDebug()<<ok;

        if(ok==true) {
            qDebug()<<"accept";
            dbHost=ui->lineEditHostname->text();
            dbUser=ui->lineEditUsername->text();
            dbMdp=ui->lineEditPassword->text();

            qDebug()<<dbHost<<dbUser<<dbMdp;

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

void Connexion::on_comboBoxTypeDatabase_currentTextChanged(const QString &arg1)
{
    if(ui->comboBoxTypeDatabase->currentText()=="QSQLITE" ){
        ui->lineEditHostname->setVisible(0);
        ui->lineEditPassword->setVisible(0);
        ui->lineEditUsername->setVisible(0);
        ui->labelHostname->setVisible(0);
        ui->labelPassword->setVisible(0);
        ui->labelUsername->setVisible(0);

        ui->pushButtonBrowse->setVisible(1);

        ui->lineEditDatabase->setText("");

    }else if(ui->comboBoxTypeDatabase->currentText()=="QMYSQL" || ui->comboBoxTypeDatabase->currentText()=="QMYSQL3"){
        ui->lineEditHostname->setVisible(1);
        ui->lineEditPassword->setVisible(1);
        ui->lineEditUsername->setVisible(1);
        ui->labelHostname->setVisible(1);
        ui->labelPassword->setVisible(1);
        ui->labelUsername->setVisible(1);
        ui->pushButtonBrowse->setVisible(0);
    }
}


void Connexion::on_pushButtonBrowse_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this,
        tr("Select Your Database"), "home/", tr("Sqlite Files (*.sqlite)"));

    ui->lineEditDatabase->setText(fileName);


}

QString Connexion::getMdp()
{
    return dbMdp;
}

QString Connexion::getHost()
{
    return dbHost;
}

QString Connexion::getUser()
{
    return dbUser;
}
