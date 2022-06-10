/********************************************************************************
** Form generated from reading UI file 'tab6database.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAB6DATABASE_H
#define UI_TAB6DATABASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tab6DataBase
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QDateTimeEdit *pDateTimeEditFrom;
    QDateTimeEdit *pDateTimeEditTo;
    QPushButton *pPBsearchButton;
    QPushButton *pPBdeleteButton;
    QHBoxLayout *pTableChartHoriLayout;
    QTableWidget *pTableWidget;

    void setupUi(QWidget *Tab6DataBase)
    {
        if (Tab6DataBase->objectName().isEmpty())
            Tab6DataBase->setObjectName(QString::fromUtf8("Tab6DataBase"));
        Tab6DataBase->resize(941, 452);
        verticalLayout = new QVBoxLayout(Tab6DataBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pDateTimeEditFrom = new QDateTimeEdit(Tab6DataBase);
        pDateTimeEditFrom->setObjectName(QString::fromUtf8("pDateTimeEditFrom"));
        pDateTimeEditFrom->setDateTime(QDateTime(QDate(2022, 6, 10), QTime(0, 0, 0)));

        horizontalLayout->addWidget(pDateTimeEditFrom);

        pDateTimeEditTo = new QDateTimeEdit(Tab6DataBase);
        pDateTimeEditTo->setObjectName(QString::fromUtf8("pDateTimeEditTo"));
        pDateTimeEditTo->setDateTime(QDateTime(QDate(2022, 6, 30), QTime(12, 0, 0)));

        horizontalLayout->addWidget(pDateTimeEditTo);

        pPBsearchButton = new QPushButton(Tab6DataBase);
        pPBsearchButton->setObjectName(QString::fromUtf8("pPBsearchButton"));

        horizontalLayout->addWidget(pPBsearchButton);

        pPBdeleteButton = new QPushButton(Tab6DataBase);
        pPBdeleteButton->setObjectName(QString::fromUtf8("pPBdeleteButton"));

        horizontalLayout->addWidget(pPBdeleteButton);


        verticalLayout->addLayout(horizontalLayout);

        pTableChartHoriLayout = new QHBoxLayout();
        pTableChartHoriLayout->setObjectName(QString::fromUtf8("pTableChartHoriLayout"));
        pTableWidget = new QTableWidget(Tab6DataBase);
        if (pTableWidget->columnCount() < 5)
            pTableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        pTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        pTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        pTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        pTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        pTableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        pTableWidget->setObjectName(QString::fromUtf8("pTableWidget"));
        pTableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        pTableWidget->horizontalHeader()->setMinimumSectionSize(100);
        pTableWidget->horizontalHeader()->setDefaultSectionSize(110);

        pTableChartHoriLayout->addWidget(pTableWidget);


        verticalLayout->addLayout(pTableChartHoriLayout);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 9);

        retranslateUi(Tab6DataBase);

        QMetaObject::connectSlotsByName(Tab6DataBase);
    } // setupUi

    void retranslateUi(QWidget *Tab6DataBase)
    {
        Tab6DataBase->setWindowTitle(QCoreApplication::translate("Tab6DataBase", "Form", nullptr));
        pPBsearchButton->setText(QCoreApplication::translate("Tab6DataBase", "search", nullptr));
        pPBdeleteButton->setText(QCoreApplication::translate("Tab6DataBase", "delete", nullptr));
        QTableWidgetItem *___qtablewidgetitem = pTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Tab6DataBase", "id", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = pTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Tab6DataBase", "date", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = pTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Tab6DataBase", "cds", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = pTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Tab6DataBase", "temp", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = pTableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Tab6DataBase", "humi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tab6DataBase: public Ui_Tab6DataBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAB6DATABASE_H
