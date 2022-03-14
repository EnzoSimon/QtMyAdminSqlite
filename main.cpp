#include "mainwindow.h"
#include "connexion.h"
#include <QApplication>
#include <QDebug>


int main(int argc, char *argv[])
{
    qDebug()<<"MAIN";
    QApplication a(argc, argv);

    // si l'utilisateur est connecté, on ouvre la MainWindow
    Connexion seConnecter;
    if(seConnecter.exec()==QDialog::Accepted)
    {
        qDebug()<<"ouverture de la MainWindow";
        QString mdp = ((Connexion*)(parent()))->dbMdp;
        QString dbUser = ((Connexion*)(parent()))->dbUser;
        QString dbName = ((Connexion*)(parent()))->dbName;

        MainWindow w(dbName,dbMdp,dbUser);
        w.show();
        return a.exec();
    }
    else {
        return 20;
    }
}
