#include "addtable.h"
#include "mainwindow.h"
#include "ui_addtable.h"
#include <QStringList>
#include <QComboBox>
#include <QCheckBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QLineEdit>
#include <QDebug>

AddTable::AddTable(int theColumnNumber, QString theTableName, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddTable)
{
    ui->setupUi(this);

    ui->labelError->setVisible(false);

    tableName = theTableName;
    columnCount = theColumnNumber;

    //Table initialization
    QStringList tableLabels;
    tableLabels << "Name" << "Type" << "Lenght/Values" << "Default" << "Attributes" << "Null" << "Index" << "A.I";
    ui->tableWidgetAddTable->clear();
    ui->tableWidgetAddTable->setHorizontalHeaderLabels(tableLabels);
    ui->tableWidgetAddTable->setRowCount(theColumnNumber);
    ui->tableWidgetAddTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    for(int i=0 ; i<=theColumnNumber ; i++)
    {
        QLineEdit* nameLineEdit = new QLineEdit();
        ui->tableWidgetAddTable->setCellWidget(i,0,nameLineEdit);

        QComboBox* typeComboBox = new QComboBox();
        QStringList typeLabels;
        typeLabels << "INT" << "VARCHAR" << "BOOL" << "DATE" << "DATETIME" << "TIME";
        typeComboBox->addItems(typeLabels);
        ui -> tableWidgetAddTable -> setCellWidget(i,1,typeComboBox);

        QLineEdit* valueLineEdit = new QLineEdit();
        ui->tableWidgetAddTable->setCellWidget(i,2,valueLineEdit);

        QComboBox* defaultComboBox = new QComboBox();
        QStringList defaultLabels;
        defaultLabels << "" << "As defined" << "NULL" << "CURRENT_TIMESTAMP";
        defaultComboBox->addItems(defaultLabels);
        ui -> tableWidgetAddTable -> setCellWidget(i,3,defaultComboBox);

        QComboBox* attributesComboBox = new QComboBox();
        QStringList attributesLabels;
        attributesLabels << "" << "BINARY" << "UNSIGNED" << "UNSIGNED ZEROFILL" << "On update CURRENT_TIMESTAMP";
        attributesComboBox->addItems(attributesLabels);
        ui -> tableWidgetAddTable -> setCellWidget(i,4,attributesComboBox);

        QCheckBox* nullCheckBox = new QCheckBox();
        ui -> tableWidgetAddTable -> setCellWidget(i,5,nullCheckBox);

        QComboBox* indexComboBox = new QComboBox();
        QStringList indexLabels;
        indexLabels << "" << "PRIMARY KEY" << "UNIQUE" << "INDEX" << "FULLTEXT" << "SPATIAL";
        indexComboBox->addItems(indexLabels);
        ui -> tableWidgetAddTable -> setCellWidget(i,6,indexComboBox);

        QCheckBox* aiCheckBox = new QCheckBox();
        ui -> tableWidgetAddTable -> setCellWidget(i,7,aiCheckBox);
    }
}

AddTable::~AddTable()
{
    delete ui;
}

void AddTable::on_pushButtonCreateTable_clicked()
{
    //QSqlQuery createTableRequest;

    QString request = "CREATE TABLE "+tableName+" (";

    for(int i=0 ; i<columnCount ; i++)
    {
        if(i != 0)
        {
            request += ",";
        }

        request += ((QLineEdit *)(ui->tableWidgetAddTable->cellWidget(i,0)))->text()+" "+((QComboBox *)(ui->tableWidgetAddTable->cellWidget(i,1)))->currentText();

        if(!(((QLineEdit *)(ui->tableWidgetAddTable->cellWidget(i,2)))->text().isEmpty()))
        {
            request += "("+((QLineEdit *)(ui->tableWidgetAddTable->cellWidget(i,2)))->text()+")";
        }

        if(!(((QComboBox *)(ui->tableWidgetAddTable->cellWidget(i,4)))->currentText().isEmpty()))
        {
            request += " " + ((QComboBox *)(ui->tableWidgetAddTable->cellWidget(i,4)))->currentText();
        }

        if(((QCheckBox *)(ui->tableWidgetAddTable->cellWidget(i,5)))->isChecked())
        {
            request += " NULL";
        } else{
            request += " NOT NULL";
        }

        if(!(((QComboBox *)(ui->tableWidgetAddTable->cellWidget(i,3)))->currentText().isEmpty()))
        {
            request += " DEFAULT " + ((QComboBox *)(ui->tableWidgetAddTable->cellWidget(i,3)))->currentText();
        }

        if(((QCheckBox *)(ui->tableWidgetAddTable->cellWidget(i,7)))->isChecked())
        {
            request += " AUTO_INCREMENT";
        }
    }

    for(int i=0 ; i<columnCount ; i++)
    {
        if(!(((QComboBox *)(ui->tableWidgetAddTable->cellWidget(i,6)))->currentText().isEmpty()))
        {
            request += " ," + ((QComboBox *)(ui->tableWidgetAddTable->cellWidget(i,6)))->currentText() + " (" + ((QLineEdit *)(ui->tableWidgetAddTable->cellWidget(i,0)))->text() + ")";
        }
    }

    request += ")";

    QSqlQuery addTableRequest;

    if(addTableRequest.exec(request)) {
        close();
    } else{
        ui->labelError->setWordWrap(true);
        ui->labelError->setText(addTableRequest.lastError().text());
        ui->labelError->setVisible(true);
    }

}
