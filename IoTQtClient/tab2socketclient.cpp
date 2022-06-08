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

        }
    }
}
void Tab2SocketClient::slotSocketRecvUpdate(QString strRecvData){
    ui->pTErecvData->append(strRecvData);
}
