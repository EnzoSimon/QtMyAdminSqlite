#ifndef CONNEXION_H
#define CONNEXION_H

#include <QDialog>

namespace Ui {
class Connexion;
}

class Connexion : public QDialog
{
    Q_OBJECT

public:
    explicit Connexion(QWidget *parent = nullptr);
    QString dbUser, dbMdp, dbHost;
    ~Connexion();

    void reconnexionLabelTitle();

    QString getMdp();
    QString getHost();
    QString getUser();

private slots:
    void on_pushButton_clicked();

    void on_pushButtonCancel_clicked();

    void on_comboBoxTypeDatabase_currentTextChanged(const QString &arg1);

    void on_pushButtonBrowse_clicked();

private:
    Ui::Connexion *ui;
};

#endif // CONNEXION_H
