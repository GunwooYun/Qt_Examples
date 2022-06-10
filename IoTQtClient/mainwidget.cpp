#include "mainwidget.h"
#include "ui_mainwidget.h"

/* Constructor detail */
MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainWidget) // Initialize : MainWidget *ui = new MainWidget()
{
    ui->setupUi(this); // setup this instance(widget)
    ui->tabWidget->setCurrentIndex(1); // Open default tab2

    pTab2SocketClient = new Tab2SocketClient(ui->pTab2); // instance ptab2 and connect to ui->pTab2
    ui->pTab2->setLayout(pTab2SocketClient->layout());

    pTab3ControlPannel = new Tab3ControlPannel(ui->pTab3); // instance ptab3 and connect to ui->pTab3
    ui->pTab3->setLayout(pTab3ControlPannel->layout());

    pTab4SensorDisplay = new Tab4SensorDisplay(ui->pTab4);
    ui->pTab4->setLayout(pTab4SensorDisplay->layout());

    pTab5ChartPlot = new Tab5ChartPlot(ui->pTab5);
    ui->pTab5->setLayout(pTab5ChartPlot->layout());

    pTab6DataBase = new Tab6DataBase(ui->pTab6);
    ui->pTab6->setLayout(pTab6DataBase->layout());


    connect(pTab3ControlPannel, SIGNAL(sigSocketSendData(QString)), pTab2SocketClient, SLOT(slotSocketSendData(QString)));
    connect(pTab2SocketClient, SIGNAL(sigTab3RecvData(QString)), pTab3ControlPannel, SLOT(slotTab3RecvData(QString)));
    connect(pTab2SocketClient, SIGNAL(sigTab4RecvData(QString)), pTab4SensorDisplay, SLOT(slotTab4RecvData(QString)));
    connect(pTab2SocketClient, SIGNAL(sigTab5RecvData(QString)), pTab5ChartPlot, SLOT(slotTab5RecvData(QString)));
    connect(pTab2SocketClient, SIGNAL(sigTab6RecvData(QString)), pTab6DataBase, SLOT(slotTab6RecvData(QString)));

}

MainWidget::~MainWidget()
{
    delete ui;
}

