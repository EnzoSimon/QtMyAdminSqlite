/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Close;
    QAction *actionChange_Database;
    QAction *action_Reduce;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_3;
    QSplitter *splitter;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *FirstTitle;
    QLabel *SecondTitle;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_5;
    QListWidget *listWidgetTablesList;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_9;
    QPushButton *pushButtonDeleteTable;
    QPushButton *pushButtonChangeDatabase;
    QTabWidget *tabWidgetSections;
    QWidget *structure;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidgetStructure;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_8;
    QLineEdit *lineEditTableName;
    QLabel *label_2;
    QSpinBox *spinBoxColumnNumber;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonAddTable;
    QWidget *SQL;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_6;
    QPlainTextEdit *plainTextEditSelectRequest;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *pushButtonSqlExecut;
    QLabel *label_5;
    QTableWidget *tableWidgetSelect;
    QWidget *inserer;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_9;
    QTableWidget *tableWidgetRequestInsert;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *pushButtonInsertExecut;
    QWidget *del;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_11;
    QTableWidget *tableWidgetDeleteEntry;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *pushButtonDeleteEntry;
    QWidget *tab;
    QVBoxLayout *verticalLayout_7;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_11;
    QLineEdit *lineEditExportFileName;
    QSpacerItem *horizontalSpacer_13;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_12;
    QLabel *label_10;
    QPushButton *pushButtonExportDatabase;
    QMenuBar *menuBar;
    QMenu *menu_Close;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1103, 675);
        QFont font;
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QLatin1String("*{\n"
"font-family: quicksand;\n"
"font-size: 15px; \n"
"}\n"
"\n"
"QPushButton {\n"
"border: 2px solid #6c78af; \n"
"border-radius: 15; \n"
"background: #fff;\n"
"padding: 5px 30px;\n"
"font-weight: 700;\n"
"color: #6c78af;\n"
"}\n"
"QPushButton:hover {\n"
"background:#292929;\n"
"color: white;\n"
"border: 2px solid #f89c0e; \n"
"}\n"
"\n"
"QLineEdit{\n"
"border: 2px solid #6c78af; \n"
"border-radius: 10;\n"
"}\n"
"\n"
"QPlainTextEdit {\n"
"border: 2px solid #6c78af; \n"
"color: blue;\n"
"}\n"
"\n"
"QLabel {\n"
"font-size: 16px;\n"
"}\n"
"\n"
"QStatusBar {\n"
"color: #343c63;\n"
"}"));
        action_Close = new QAction(MainWindow);
        action_Close->setObjectName(QStringLiteral("action_Close"));
        actionChange_Database = new QAction(MainWindow);
        actionChange_Database->setObjectName(QStringLiteral("actionChange_Database"));
        action_Reduce = new QAction(MainWindow);
        action_Reduce->setObjectName(QStringLiteral("action_Reduce"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_3 = new QVBoxLayout(centralWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy);
        splitter->setMinimumSize(QSize(0, 0));
        splitter->setMaximumSize(QSize(16777215, 538));
        splitter->setBaseSize(QSize(0, 0));
        splitter->setFont(font);
        splitter->setLayoutDirection(Qt::LeftToRight);
        splitter->setAutoFillBackground(false);
        splitter->setStyleSheet(QStringLiteral(""));
        splitter->setFrameShape(QFrame::NoFrame);
        splitter->setFrameShadow(QFrame::Plain);
        splitter->setLineWidth(1);
        splitter->setOrientation(Qt::Horizontal);
        splitter->setOpaqueResize(true);
        splitter->setHandleWidth(5);
        splitter->setChildrenCollapsible(true);
        verticalLayoutWidget = new QWidget(splitter);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        FirstTitle = new QLabel(verticalLayoutWidget);
        FirstTitle->setObjectName(QStringLiteral("FirstTitle"));
        QFont font1;
        font1.setBold(true);
        FirstTitle->setFont(font1);
        FirstTitle->setStyleSheet(QStringLiteral("color: #6c78af; font-size: 35px; font-weight: bold;"));

        horizontalLayout->addWidget(FirstTitle);

        SecondTitle = new QLabel(verticalLayoutWidget);
        SecondTitle->setObjectName(QStringLiteral("SecondTitle"));
        SecondTitle->setFont(font1);
        SecondTitle->setStyleSheet(QStringLiteral("color: #f89c0e; font-size: 30px; font-weight: bold;"));

        horizontalLayout->addWidget(SecondTitle);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_7->addWidget(label_3);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);


        verticalLayout_2->addLayout(horizontalLayout_7);

        listWidgetTablesList = new QListWidget(verticalLayoutWidget);
        listWidgetTablesList->setObjectName(QStringLiteral("listWidgetTablesList"));
        listWidgetTablesList->setStyleSheet(QLatin1String("border: 2px solid #6c78af; \n"
"max-width : 240px;"));

        verticalLayout_2->addWidget(listWidgetTablesList);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_9 = new QLabel(verticalLayoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_13->addWidget(label_9);

        pushButtonDeleteTable = new QPushButton(verticalLayoutWidget);
        pushButtonDeleteTable->setObjectName(QStringLiteral("pushButtonDeleteTable"));

        horizontalLayout_13->addWidget(pushButtonDeleteTable);


        verticalLayout_2->addLayout(horizontalLayout_13);

        pushButtonChangeDatabase = new QPushButton(verticalLayoutWidget);
        pushButtonChangeDatabase->setObjectName(QStringLiteral("pushButtonChangeDatabase"));
        pushButtonChangeDatabase->setStyleSheet(QStringLiteral(""));

        verticalLayout_2->addWidget(pushButtonChangeDatabase);

        splitter->addWidget(verticalLayoutWidget);
        tabWidgetSections = new QTabWidget(splitter);
        tabWidgetSections->setObjectName(QStringLiteral("tabWidgetSections"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabWidgetSections->sizePolicy().hasHeightForWidth());
        tabWidgetSections->setSizePolicy(sizePolicy1);
        tabWidgetSections->setMinimumSize(QSize(0, 0));
        tabWidgetSections->setStyleSheet(QStringLiteral(""));
        structure = new QWidget();
        structure->setObjectName(QStringLiteral("structure"));
        verticalLayout = new QVBoxLayout(structure);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableWidgetStructure = new QTableWidget(structure);
        tableWidgetStructure->setObjectName(QStringLiteral("tableWidgetStructure"));
        tableWidgetStructure->setStyleSheet(QStringLiteral(""));
        tableWidgetStructure->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidgetStructure->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidgetStructure->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tableWidgetStructure);

        verticalSpacer = new QSpacerItem(10, 150, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label = new QLabel(structure);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_5->addWidget(label);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_8 = new QLabel(structure);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_6->addWidget(label_8);

        lineEditTableName = new QLineEdit(structure);
        lineEditTableName->setObjectName(QStringLiteral("lineEditTableName"));
        lineEditTableName->setStyleSheet(QStringLiteral(""));

        horizontalLayout_6->addWidget(lineEditTableName);

        label_2 = new QLabel(structure);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_6->addWidget(label_2);

        spinBoxColumnNumber = new QSpinBox(structure);
        spinBoxColumnNumber->setObjectName(QStringLiteral("spinBoxColumnNumber"));
        spinBoxColumnNumber->setStyleSheet(QStringLiteral(""));
        spinBoxColumnNumber->setMinimum(1);
        spinBoxColumnNumber->setValue(4);

        horizontalLayout_6->addWidget(spinBoxColumnNumber);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        pushButtonAddTable = new QPushButton(structure);
        pushButtonAddTable->setObjectName(QStringLiteral("pushButtonAddTable"));
        pushButtonAddTable->setStyleSheet(QStringLiteral(""));

        horizontalLayout_4->addWidget(pushButtonAddTable);


        verticalLayout->addLayout(horizontalLayout_4);

        tabWidgetSections->addTab(structure, QString());
        SQL = new QWidget();
        SQL->setObjectName(QStringLiteral("SQL"));
        verticalLayout_4 = new QVBoxLayout(SQL);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(SQL);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);


        verticalLayout_4->addLayout(horizontalLayout_2);

        plainTextEditSelectRequest = new QPlainTextEdit(SQL);
        plainTextEditSelectRequest->setObjectName(QStringLiteral("plainTextEditSelectRequest"));
        plainTextEditSelectRequest->setStyleSheet(QStringLiteral(""));

        verticalLayout_4->addWidget(plainTextEditSelectRequest);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_7);

        pushButtonSqlExecut = new QPushButton(SQL);
        pushButtonSqlExecut->setObjectName(QStringLiteral("pushButtonSqlExecut"));
        pushButtonSqlExecut->setStyleSheet(QStringLiteral(""));

        horizontalLayout_9->addWidget(pushButtonSqlExecut);


        verticalLayout_4->addLayout(horizontalLayout_9);

        label_5 = new QLabel(SQL);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_4->addWidget(label_5);

        tableWidgetSelect = new QTableWidget(SQL);
        tableWidgetSelect->setObjectName(QStringLiteral("tableWidgetSelect"));
        tableWidgetSelect->setStyleSheet(QStringLiteral(""));
        tableWidgetSelect->verticalHeader()->setVisible(false);

        verticalLayout_4->addWidget(tableWidgetSelect);

        tabWidgetSections->addTab(SQL, QString());
        inserer = new QWidget();
        inserer->setObjectName(QStringLiteral("inserer"));
        verticalLayout_5 = new QVBoxLayout(inserer);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_6 = new QLabel(inserer);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_10->addWidget(label_6);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_9);


        verticalLayout_5->addLayout(horizontalLayout_10);

        tableWidgetRequestInsert = new QTableWidget(inserer);
        tableWidgetRequestInsert->setObjectName(QStringLiteral("tableWidgetRequestInsert"));
        tableWidgetRequestInsert->horizontalHeader()->setVisible(false);

        verticalLayout_5->addWidget(tableWidgetRequestInsert);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_8);

        pushButtonInsertExecut = new QPushButton(inserer);
        pushButtonInsertExecut->setObjectName(QStringLiteral("pushButtonInsertExecut"));
        pushButtonInsertExecut->setStyleSheet(QStringLiteral(""));

        horizontalLayout_3->addWidget(pushButtonInsertExecut);


        verticalLayout_5->addLayout(horizontalLayout_3);

        tabWidgetSections->addTab(inserer, QString());
        del = new QWidget();
        del->setObjectName(QStringLiteral("del"));
        verticalLayout_6 = new QVBoxLayout(del);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_7 = new QLabel(del);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_8->addWidget(label_7);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_11);


        verticalLayout_6->addLayout(horizontalLayout_8);

        tableWidgetDeleteEntry = new QTableWidget(del);
        tableWidgetDeleteEntry->setObjectName(QStringLiteral("tableWidgetDeleteEntry"));
        tableWidgetDeleteEntry->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidgetDeleteEntry->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidgetDeleteEntry->setTextElideMode(Qt::ElideRight);
        tableWidgetDeleteEntry->verticalHeader()->setVisible(false);

        verticalLayout_6->addWidget(tableWidgetDeleteEntry);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_10);

        pushButtonDeleteEntry = new QPushButton(del);
        pushButtonDeleteEntry->setObjectName(QStringLiteral("pushButtonDeleteEntry"));

        horizontalLayout_11->addWidget(pushButtonDeleteEntry);


        verticalLayout_6->addLayout(horizontalLayout_11);

        tabWidgetSections->addTab(del, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_7 = new QVBoxLayout(tab);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_4);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_11 = new QLabel(tab);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_14->addWidget(label_11);

        lineEditExportFileName = new QLineEdit(tab);
        lineEditExportFileName->setObjectName(QStringLiteral("lineEditExportFileName"));

        horizontalLayout_14->addWidget(lineEditExportFileName);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_13);


        verticalLayout_7->addLayout(horizontalLayout_14);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_12);

        label_10 = new QLabel(tab);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_12->addWidget(label_10);

        pushButtonExportDatabase = new QPushButton(tab);
        pushButtonExportDatabase->setObjectName(QStringLiteral("pushButtonExportDatabase"));

        horizontalLayout_12->addWidget(pushButtonExportDatabase);


        verticalLayout_7->addLayout(horizontalLayout_12);

        tabWidgetSections->addTab(tab, QString());
        splitter->addWidget(tabWidgetSections);

        verticalLayout_3->addWidget(splitter);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1103, 24));
        menuBar->setStyleSheet(QStringLiteral(""));
        menu_Close = new QMenu(menuBar);
        menu_Close->setObjectName(QStringLiteral("menu_Close"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setStyleSheet(QStringLiteral(""));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_Close->menuAction());
        menu_Close->addAction(action_Close);
        menu_Close->addSeparator();
        menu_Close->addAction(actionChange_Database);

        retranslateUi(MainWindow);

        tabWidgetSections->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Connected - QtMyAdmin", nullptr));
        action_Close->setText(QApplication::translate("MainWindow", "&Quit", nullptr));
        actionChange_Database->setText(QApplication::translate("MainWindow", "Change &Database", nullptr));
        action_Reduce->setText(QApplication::translate("MainWindow", "&Reduce", nullptr));
        FirstTitle->setText(QApplication::translate("MainWindow", "Qt", nullptr));
        SecondTitle->setText(QApplication::translate("MainWindow", "MyAdmin", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Tables list :", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "Delete the table :", nullptr));
        pushButtonDeleteTable->setText(QApplication::translate("MainWindow", "Delete", nullptr));
        pushButtonChangeDatabase->setText(QApplication::translate("MainWindow", "Change Database", nullptr));
        label->setText(QApplication::translate("MainWindow", "Add a table :", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Name :", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Number of columns :", nullptr));
        pushButtonAddTable->setText(QApplication::translate("MainWindow", "Add", nullptr));
        tabWidgetSections->setTabText(tabWidgetSections->indexOf(structure), QApplication::translate("MainWindow", "Structure", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Run an SQL query :", nullptr));
        plainTextEditSelectRequest->setPlaceholderText(QApplication::translate("MainWindow", "Type your SQL query here ...", nullptr));
        pushButtonSqlExecut->setText(QApplication::translate("MainWindow", "Run", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Result of the SQL query :", nullptr));
        tabWidgetSections->setTabText(tabWidgetSections->indexOf(SQL), QApplication::translate("MainWindow", "SQL", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Insert a field :", nullptr));
        pushButtonInsertExecut->setText(QApplication::translate("MainWindow", "Run", nullptr));
        tabWidgetSections->setTabText(tabWidgetSections->indexOf(inserer), QApplication::translate("MainWindow", "Insert", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Select an entry to delete :", nullptr));
        pushButtonDeleteEntry->setText(QApplication::translate("MainWindow", "Delete", nullptr));
        tabWidgetSections->setTabText(tabWidgetSections->indexOf(del), QApplication::translate("MainWindow", "Delete", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "Type the final file name :", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "You can export your database :", nullptr));
        pushButtonExportDatabase->setText(QApplication::translate("MainWindow", "Export", nullptr));
        tabWidgetSections->setTabText(tabWidgetSections->indexOf(tab), QApplication::translate("MainWindow", "Export", nullptr));
        menu_Close->setTitle(QApplication::translate("MainWindow", "&Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
