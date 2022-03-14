/********************************************************************************
** Form generated from reading UI file 'connexion.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNEXION_H
#define UI_CONNEXION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Connexion
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_11;
    QLabel *labelTitle;
    QSpacerItem *horizontalSpacer_12;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_13;
    QLabel *labelConnexion;
    QSpacerItem *horizontalSpacer_14;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_6;
    QLabel *labelConnectionError;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelHostname;
    QLineEdit *lineEditHostname;
    QHBoxLayout *horizontalLayout_8;
    QLabel *labelDatabase;
    QLineEdit *lineEditDatabase;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelUsername;
    QLineEdit *lineEditUsername;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelPassword;
    QLineEdit *lineEditPassword;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *pushButtonCancel;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *Connexion)
    {
        if (Connexion->objectName().isEmpty())
            Connexion->setObjectName(QStringLiteral("Connexion"));
        Connexion->resize(357, 427);
        QFont font;
        Connexion->setFont(font);
        Connexion->setStyleSheet(QLatin1String("* {\n"
"font-family: Quicksand;\n"
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
"QLineEdit {\n"
"border: 2px solid #6c78af; \n"
"border-radius: 13; \n"
"max-width:350px; \n"
"padding: 3px;\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(Connexion);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_11);

        labelTitle = new QLabel(Connexion);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));
        labelTitle->setStyleSheet(QStringLiteral("font-size: 30px; "));

        horizontalLayout_6->addWidget(labelTitle);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_12);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(Connexion);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("color: #6c78af; font-size: 30px; font-weight: bold;"));

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(Connexion);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral("color: #f89c0e; font-size: 30px; font-weight: bold;"));

        horizontalLayout->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_13);

        labelConnexion = new QLabel(Connexion);
        labelConnexion->setObjectName(QStringLiteral("labelConnexion"));
        labelConnexion->setStyleSheet(QStringLiteral("font-size: 20px;"));

        horizontalLayout_7->addWidget(labelConnexion);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_14);


        verticalLayout_2->addLayout(horizontalLayout_7);

        verticalSpacer = new QSpacerItem(20, 51, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_6);

        labelConnectionError = new QLabel(Connexion);
        labelConnectionError->setObjectName(QStringLiteral("labelConnectionError"));
        labelConnectionError->setStyleSheet(QStringLiteral("color: red; "));

        horizontalLayout_9->addWidget(labelConnectionError);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_5);


        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        labelHostname = new QLabel(Connexion);
        labelHostname->setObjectName(QStringLiteral("labelHostname"));

        horizontalLayout_3->addWidget(labelHostname);

        lineEditHostname = new QLineEdit(Connexion);
        lineEditHostname->setObjectName(QStringLiteral("lineEditHostname"));
        lineEditHostname->setStyleSheet(QStringLiteral(""));

        horizontalLayout_3->addWidget(lineEditHostname);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        labelDatabase = new QLabel(Connexion);
        labelDatabase->setObjectName(QStringLiteral("labelDatabase"));

        horizontalLayout_8->addWidget(labelDatabase);

        lineEditDatabase = new QLineEdit(Connexion);
        lineEditDatabase->setObjectName(QStringLiteral("lineEditDatabase"));
        lineEditDatabase->setStyleSheet(QStringLiteral(""));

        horizontalLayout_8->addWidget(lineEditDatabase);


        verticalLayout->addLayout(horizontalLayout_8);

        verticalSpacer_5 = new QSpacerItem(10, 15, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        labelUsername = new QLabel(Connexion);
        labelUsername->setObjectName(QStringLiteral("labelUsername"));

        horizontalLayout_4->addWidget(labelUsername);

        lineEditUsername = new QLineEdit(Connexion);
        lineEditUsername->setObjectName(QStringLiteral("lineEditUsername"));
        lineEditUsername->setStyleSheet(QStringLiteral(""));

        horizontalLayout_4->addWidget(lineEditUsername);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        labelPassword = new QLabel(Connexion);
        labelPassword->setObjectName(QStringLiteral("labelPassword"));

        horizontalLayout_5->addWidget(labelPassword);

        lineEditPassword = new QLineEdit(Connexion);
        lineEditPassword->setObjectName(QStringLiteral("lineEditPassword"));
        lineEditPassword->setStyleSheet(QStringLiteral(""));
        lineEditPassword->setEchoMode(QLineEdit::Password);

        horizontalLayout_5->addWidget(lineEditPassword);


        verticalLayout->addLayout(horizontalLayout_5);


        horizontalLayout_10->addLayout(verticalLayout);

        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout_10);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_9);

        pushButtonCancel = new QPushButton(Connexion);
        pushButtonCancel->setObjectName(QStringLiteral("pushButtonCancel"));
        pushButtonCancel->setStyleSheet(QStringLiteral(""));
        pushButtonCancel->setAutoDefault(false);

        horizontalLayout_2->addWidget(pushButtonCancel);

        pushButton = new QPushButton(Connexion);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setStyleSheet(QStringLiteral(""));

        horizontalLayout_2->addWidget(pushButton);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_10);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        retranslateUi(Connexion);

        pushButton->setDefault(true);


        QMetaObject::connectSlotsByName(Connexion);
    } // setupUi

    void retranslateUi(QDialog *Connexion)
    {
        Connexion->setWindowTitle(QApplication::translate("Connexion", "Connection - QtMyAdmin", nullptr));
        labelTitle->setText(QApplication::translate("Connexion", "Welcome to", nullptr));
        label->setText(QApplication::translate("Connexion", "Qt", nullptr));
        label_2->setText(QApplication::translate("Connexion", "MyAdmin", nullptr));
        labelConnexion->setText(QApplication::translate("Connexion", "Connection page", nullptr));
        labelConnectionError->setText(QApplication::translate("Connexion", "-- incorrect information --", nullptr));
        labelHostname->setText(QApplication::translate("Connexion", "Host :", nullptr));
        lineEditHostname->setText(QApplication::translate("Connexion", "172.28.100.3", nullptr));
        labelDatabase->setText(QApplication::translate("Connexion", "Database :", nullptr));
        lineEditDatabase->setText(QApplication::translate("Connexion", "kallemand_zoo", nullptr));
        labelUsername->setText(QApplication::translate("Connexion", "Username :", nullptr));
        lineEditUsername->setText(QApplication::translate("Connexion", "esimon", nullptr));
        labelPassword->setText(QApplication::translate("Connexion", "Password :", nullptr));
        lineEditPassword->setText(QApplication::translate("Connexion", "elini01", nullptr));
        pushButtonCancel->setText(QApplication::translate("Connexion", "Cancel", nullptr));
        pushButton->setText(QApplication::translate("Connexion", "Connect", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Connexion: public Ui_Connexion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNEXION_H
