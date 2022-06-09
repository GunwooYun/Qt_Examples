/********************************************************************************
** Form generated from reading UI file 'tab2socketclient.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAB2SOCKETCLIENT_H
#define UI_TAB2SOCKETCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tab2SocketClient
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPushButton *pPBrecvDataClear;
    QPushButton *pPBserverConnect;
    QHBoxLayout *horizontalLayout_2;
    QTextEdit *pTErecvData;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *pLErecvId;
    QLineEdit *pLEsendData;
    QPushButton *pPBsendButton;

    void setupUi(QWidget *Tab2SocketClient)
    {
        if (Tab2SocketClient->objectName().isEmpty())
            Tab2SocketClient->setObjectName(QString::fromUtf8("Tab2SocketClient"));
        Tab2SocketClient->resize(554, 345);
        verticalLayout = new QVBoxLayout(Tab2SocketClient);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(Tab2SocketClient);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        pPBrecvDataClear = new QPushButton(Tab2SocketClient);
        pPBrecvDataClear->setObjectName(QString::fromUtf8("pPBrecvDataClear"));

        horizontalLayout->addWidget(pPBrecvDataClear);

        pPBserverConnect = new QPushButton(Tab2SocketClient);
        pPBserverConnect->setObjectName(QString::fromUtf8("pPBserverConnect"));
        pPBserverConnect->setCheckable(true);

        horizontalLayout->addWidget(pPBserverConnect);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pTErecvData = new QTextEdit(Tab2SocketClient);
        pTErecvData->setObjectName(QString::fromUtf8("pTErecvData"));

        horizontalLayout_2->addWidget(pTErecvData);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pLErecvId = new QLineEdit(Tab2SocketClient);
        pLErecvId->setObjectName(QString::fromUtf8("pLErecvId"));

        horizontalLayout_3->addWidget(pLErecvId);

        pLEsendData = new QLineEdit(Tab2SocketClient);
        pLEsendData->setObjectName(QString::fromUtf8("pLEsendData"));

        horizontalLayout_3->addWidget(pLEsendData);

        pPBsendButton = new QPushButton(Tab2SocketClient);
        pPBsendButton->setObjectName(QString::fromUtf8("pPBsendButton"));

        horizontalLayout_3->addWidget(pPBsendButton);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 2);
        horizontalLayout_3->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(Tab2SocketClient);

        QMetaObject::connectSlotsByName(Tab2SocketClient);
    } // setupUi

    void retranslateUi(QWidget *Tab2SocketClient)
    {
        Tab2SocketClient->setWindowTitle(QCoreApplication::translate("Tab2SocketClient", "Form", nullptr));
        label->setText(QCoreApplication::translate("Tab2SocketClient", "Receive Data", nullptr));
        pPBrecvDataClear->setText(QCoreApplication::translate("Tab2SocketClient", "Clear", nullptr));
        pPBserverConnect->setText(QCoreApplication::translate("Tab2SocketClient", "Connet", nullptr));
        pPBsendButton->setText(QCoreApplication::translate("Tab2SocketClient", "Send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tab2SocketClient: public Ui_Tab2SocketClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAB2SOCKETCLIENT_H
