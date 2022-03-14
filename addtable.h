#ifndef ADDTABLE_H
#define ADDTABLE_H

#include <QDialog>

namespace Ui {
class AddTable;
}

class AddTable : public QDialog
{
    Q_OBJECT

public:
    explicit AddTable(int theColumnNumber, QString theTableName, QWidget *parent = nullptr);
    ~AddTable();

private slots:
    void on_pushButtonCreateTable_clicked();

private:
    Ui::AddTable *ui;
    QString tableName;
    int columnCount;
};

#endif // ADDTABLE_H
