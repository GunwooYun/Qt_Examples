/********************************************************************************
** Form generated from reading UI file 'tab4sensordisplay.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAB4SENSORDISPLAY_H
#define UI_TAB4SENSORDISPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tab4SensorDisplay
{
public:
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lbCdsName;
    QLabel *lbCdsValue;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lbTempName;
    QLabel *lbTempValue;
    QHBoxLayout *horizontalLayout;
    QLabel *lbHumiName;
    QLabel *lbHumiValue;

    void setupUi(QWidget *Tab4SensorDisplay)
    {
        if (Tab4SensorDisplay->objectName().isEmpty())
            Tab4SensorDisplay->setObjectName(QString::fromUtf8("Tab4SensorDisplay"));
        Tab4SensorDisplay->resize(400, 300);
        horizontalLayout_4 = new QHBoxLayout(Tab4SensorDisplay);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lbCdsName = new QLabel(Tab4SensorDisplay);
        lbCdsName->setObjectName(QString::fromUtf8("lbCdsName"));

        horizontalLayout_3->addWidget(lbCdsName);

        lbCdsValue = new QLabel(Tab4SensorDisplay);
        lbCdsValue->setObjectName(QString::fromUtf8("lbCdsValue"));

        horizontalLayout_3->addWidget(lbCdsValue);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lbTempName = new QLabel(Tab4SensorDisplay);
        lbTempName->setObjectName(QString::fromUtf8("lbTempName"));

        horizontalLayout_2->addWidget(lbTempName);

        lbTempValue = new QLabel(Tab4SensorDisplay);
        lbTempValue->setObjectName(QString::fromUtf8("lbTempValue"));

        horizontalLayout_2->addWidget(lbTempValue);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lbHumiName = new QLabel(Tab4SensorDisplay);
        lbHumiName->setObjectName(QString::fromUtf8("lbHumiName"));

        horizontalLayout->addWidget(lbHumiName);

        lbHumiValue = new QLabel(Tab4SensorDisplay);
        lbHumiValue->setObjectName(QString::fromUtf8("lbHumiValue"));

        horizontalLayout->addWidget(lbHumiValue);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_4->addLayout(verticalLayout);


        retranslateUi(Tab4SensorDisplay);

        QMetaObject::connectSlotsByName(Tab4SensorDisplay);
    } // setupUi

    void retranslateUi(QWidget *Tab4SensorDisplay)
    {
        Tab4SensorDisplay->setWindowTitle(QCoreApplication::translate("Tab4SensorDisplay", "Form", nullptr));
        lbCdsName->setText(QCoreApplication::translate("Tab4SensorDisplay", "CDS", nullptr));
        lbCdsValue->setText(QString());
        lbTempName->setText(QCoreApplication::translate("Tab4SensorDisplay", "Temperature", nullptr));
        lbTempValue->setText(QString());
        lbHumiName->setText(QCoreApplication::translate("Tab4SensorDisplay", "Humidity", nullptr));
        lbHumiValue->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Tab4SensorDisplay: public Ui_Tab4SensorDisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAB4SENSORDISPLAY_H
