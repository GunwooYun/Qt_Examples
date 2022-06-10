#include "tab3controlpannel.h"
#include "ui_tab3controlpannel.h"

Tab3ControlPannel::Tab3ControlPannel(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Tab3ControlPannel)
{
    ui->setupUi(this);
    connect(ui->pPBlamp, SIGNAL(clicked(bool)), this, SLOT(slotLampOnOff(bool)));
    connect(ui->pPBplug, SIGNAL(clicked(bool)), this, SLOT(slotPlugOnOff(bool)));
}

Tab3ControlPannel::~Tab3ControlPannel()
{
    delete ui;
}

/* sigSocketSendData <-- signal from mainwidget */
void Tab3ControlPannel::slotLampOnOff(bool check){
    if(check){
        ui->pPBlamp->setChecked(false);
        emit sigSocketSendData("[19]LAMPON");
    }else{
        ui->pPBlamp->setChecked(true);
        emit sigSocketSendData("[19]LAMPOFF");
    }
}

void Tab3ControlPannel::slotPlugOnOff(bool check){
    if(check){
        ui->pPBplug->setChecked(false);
        emit sigSocketSendData("[19]GASON");

    }else{
        ui->pPBplug->setChecked(true);
        emit sigSocketSendData("[19]GASOFF");
    }
}

void Tab3ControlPannel::slotTab3RecvData(QString recvData){
    //qDebug() << recvData;
    recvData.replace("[", "@");
    recvData.replace("]", "@");
    QStringList qlist = recvData.split("@"); // idx0:null, idx1:str, ...
    QMessageBox::information(this, "tab2TOtab3", qlist[2]);
    if(qlist[2] == "LAMPON"){
        ui->pPBlamp->setChecked(true);
    }
    else if(qlist[2] == "LAMPOFF"){
        ui->pPBlamp->setChecked(false);
    }
    else if(qlist[2] == "GASON"){
        ui->pPBplug->setChecked(true);
    }
    else if(qlist[2] == "GASOFF"){
        ui->pPBplug->setChecked(false);
    }
    //QMessageBox::information(this, "tab2TOtab3", recvData);
}

