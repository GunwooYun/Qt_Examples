#include "tab2socketclient.h"
#include "ui_tab2socketclient.h"


/*Constructor*/
Tab2SocketClient::Tab2SocketClient(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Tab2SocketClient)
{
    ui->setupUi(this);
    pSocketClient = new SocketClient(this);
    connect(ui->pPBserverConnect, SIGNAL(clicked(bool)), this, SLOT(slotSocketConnectToServer(bool)));
    connect(pSocketClient, SIGNAL(sigSocketRecv(QString)), this, SLOT(slotSocketRecvUpdate(QString)));
    connect(pSocketClient, SIGNAL(sigSocketRecv(QString)), this, SLOT(slotSocketRecvToss(QString)));
    connect(ui->pPBsendButton, SIGNAL(clicked()), this, SLOT(slotSocketSendData()));
    connect(ui->pPBrecvDataClear, SIGNAL(clicked()), ui->pTErecvData, SLOT(clear()));
}

Tab2SocketClient::~Tab2SocketClient()
{
    delete ui;
}

void Tab2SocketClient::slotSocketConnectToServer(bool check){
    bool ok;
    if(check){
        pSocketClient->slotConnectToServer(ok);
        if(ok){
            ui->pPBserverConnect->setText("Disconnect");
            ui->pPBsendButton->setEnabled(true);
        }
    }
    else{
        pSocketClient->slotClosedByServer();
        ui->pPBserverConnect->setText("Connect");
        ui->pPBsendButton->setEnabled(false);
    }
}
void Tab2SocketClient::slotSocketRecvUpdate(QString strRecvData){

    QTime time = QTime::currentTime();
    QString strTime = time.toString();
    qDebug() << strTime;
    strRecvData.chop(1);
    if(strRecvData.indexOf("LAMP") != -1 || strRecvData.indexOf("GAS") != -1){
        emit sigTab3RecvData(strRecvData);

    }
    strRecvData = strTime + " " + strRecvData;

    ui->pTErecvData->append(strRecvData);
    ui->pTErecvData->moveCursor(QTextCursor::End);

}

void Tab2SocketClient::slotSocketSendData(){
    QString strRecvId;
    QString strSendData;

       strRecvId = ui->pLErecvId->text();
       strSendData = ui->pLEsendData->text();
       if(strRecvId.isEmpty())
           strSendData = "[ALLMSG]" + strSendData;
       else
           strSendData = "[" + strRecvId + "]" + strSendData;
       pSocketClient->slotSocketSendData(strSendData);
       ui->pLEsendData->clear();
}

void Tab2SocketClient::slotSocketSendData(QString strData){
    if(ui->pPBserverConnect->isChecked()){
    pSocketClient->slotSocketSendData(strData);
    }
    else{
        QMessageBox::information(this, "socket", "Check connection");
    }
}
void Tab2SocketClient::slotSocketRecvToss(QString strData){
    emit sigTab4RecvData(strData);
}
