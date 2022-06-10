/********************************************************************************
** Form generated from reading UI file 'tab5chartplot.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAB5CHARTPLOT_H
#define UI_TAB5CHARTPLOT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tab5ChartPlot
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *pLExAxis;
    QLabel *label_2;
    QLineEdit *pLEyAxis;
    QPushButton *pPBaddButton;
    QPushButton *pPBclearButton;
    QHBoxLayout *pChartHoriLayout;

    void setupUi(QWidget *Tab5ChartPlot)
    {
        if (Tab5ChartPlot->objectName().isEmpty())
            Tab5ChartPlot->setObjectName(QString::fromUtf8("Tab5ChartPlot"));
        Tab5ChartPlot->resize(672, 584);
        verticalLayout = new QVBoxLayout(Tab5ChartPlot);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(Tab5ChartPlot);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label);

        pLExAxis = new QLineEdit(Tab5ChartPlot);
        pLExAxis->setObjectName(QString::fromUtf8("pLExAxis"));

        horizontalLayout->addWidget(pLExAxis);

        label_2 = new QLabel(Tab5ChartPlot);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_2);

        pLEyAxis = new QLineEdit(Tab5ChartPlot);
        pLEyAxis->setObjectName(QString::fromUtf8("pLEyAxis"));

        horizontalLayout->addWidget(pLEyAxis);

        pPBaddButton = new QPushButton(Tab5ChartPlot);
        pPBaddButton->setObjectName(QString::fromUtf8("pPBaddButton"));

        horizontalLayout->addWidget(pPBaddButton);

        pPBclearButton = new QPushButton(Tab5ChartPlot);
        pPBclearButton->setObjectName(QString::fromUtf8("pPBclearButton"));

        horizontalLayout->addWidget(pPBclearButton);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 2);
        horizontalLayout->setStretch(2, 1);
        horizontalLayout->setStretch(3, 2);
        horizontalLayout->setStretch(4, 2);
        horizontalLayout->setStretch(5, 2);

        verticalLayout->addLayout(horizontalLayout);

        pChartHoriLayout = new QHBoxLayout();
        pChartHoriLayout->setObjectName(QString::fromUtf8("pChartHoriLayout"));

        verticalLayout->addLayout(pChartHoriLayout);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 9);

        retranslateUi(Tab5ChartPlot);

        QMetaObject::connectSlotsByName(Tab5ChartPlot);
    } // setupUi

    void retranslateUi(QWidget *Tab5ChartPlot)
    {
        Tab5ChartPlot->setWindowTitle(QCoreApplication::translate("Tab5ChartPlot", "Form", nullptr));
        label->setText(QCoreApplication::translate("Tab5ChartPlot", "x", nullptr));
        label_2->setText(QCoreApplication::translate("Tab5ChartPlot", "y", nullptr));
        pPBaddButton->setText(QCoreApplication::translate("Tab5ChartPlot", "add", nullptr));
        pPBclearButton->setText(QCoreApplication::translate("Tab5ChartPlot", "clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tab5ChartPlot: public Ui_Tab5ChartPlot {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAB5CHARTPLOT_H
