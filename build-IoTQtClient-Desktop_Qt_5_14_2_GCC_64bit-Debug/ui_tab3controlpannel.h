/********************************************************************************
** Form generated from reading UI file 'tab3controlpannel.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAB3CONTROLPANNEL_H
#define UI_TAB3CONTROLPANNEL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tab3ControlPannel
{
public:
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QPushButton *pPBlamp;
    QLabel *label;
    QPushButton *pPBplug;

    void setupUi(QWidget *Tab3ControlPannel)
    {
        if (Tab3ControlPannel->objectName().isEmpty())
            Tab3ControlPannel->setObjectName(QString::fromUtf8("Tab3ControlPannel"));
        Tab3ControlPannel->resize(554, 345);
        gridLayout = new QGridLayout(Tab3ControlPannel);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        scrollArea = new QScrollArea(Tab3ControlPannel);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 534, 325));
        pPBlamp = new QPushButton(scrollAreaWidgetContents);
        pPBlamp->setObjectName(QString::fromUtf8("pPBlamp"));
        pPBlamp->setGeometry(QRect(20, 100, 71, 71));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/IoTQtClient/Image/light_off.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/IoTQtClient/Image/light_on.png"), QSize(), QIcon::Normal, QIcon::On);
        pPBlamp->setIcon(icon);
        pPBlamp->setIconSize(QSize(80, 80));
        pPBlamp->setCheckable(true);
        pPBlamp->setChecked(false);
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 523, 326));
        label->setPixmap(QPixmap(QString::fromUtf8(":/IoTQtClient/Image/room.png")));
        pPBplug = new QPushButton(scrollAreaWidgetContents);
        pPBplug->setObjectName(QString::fromUtf8("pPBplug"));
        pPBplug->setGeometry(QRect(370, 180, 71, 71));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/IoTQtClient/Image/plug_off.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QString::fromUtf8(":/IoTQtClient/Image/plug_on.png"), QSize(), QIcon::Normal, QIcon::On);
        pPBplug->setIcon(icon1);
        pPBplug->setIconSize(QSize(60, 60));
        pPBplug->setCheckable(true);
        scrollArea->setWidget(scrollAreaWidgetContents);
        label->raise();
        pPBlamp->raise();
        pPBplug->raise();

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);


        retranslateUi(Tab3ControlPannel);

        QMetaObject::connectSlotsByName(Tab3ControlPannel);
    } // setupUi

    void retranslateUi(QWidget *Tab3ControlPannel)
    {
        Tab3ControlPannel->setWindowTitle(QCoreApplication::translate("Tab3ControlPannel", "Form", nullptr));
        pPBlamp->setText(QString());
#if QT_CONFIG(whatsthis)
        label->setWhatsThis(QCoreApplication::translate("Tab3ControlPannel", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label->setText(QString());
        pPBplug->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Tab3ControlPannel: public Ui_Tab3ControlPannel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAB3CONTROLPANNEL_H
