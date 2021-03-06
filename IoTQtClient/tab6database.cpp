#include "tab6database.h"
#include "ui_tab6database.h"

Tab6DataBase::Tab6DataBase(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Tab6DataBase)
{
    ui->setupUi(this);
    sqlDb = QSqlDatabase::addDatabase("QSQLITE");
    sqlDb.setDatabaseName("temp.db"); // Create db file named 'temp.db'
    if(sqlDb.open()){
        qDebug() << "Success DB connection";
    }
    else{
        qDebug() << "Failed DB connection";
    }
    QString query = "CREATE TABLE iot_db ("
                    "id integer primary key,"
                    "date DATETIME,"
                    "cds VARCHAR(10),"
                    "temp VARCHAR(10),"
                    "humi VARCHAR(10))";
    QSqlQuery qry;
    if(!qry.exec(query)){
        //error

    }else{
        qDebug() << "query ok";
    }




    connect(ui->pPBsearchButton, SIGNAL(clicked()), this, SLOT(slotSearchDB()));
    connect(ui->pPBdeleteButton, SIGNAL(clicked()), this, SLOT(slotDeleteDB()));
}

Tab6DataBase::~Tab6DataBase()
{
    delete ui;
}

void Tab6DataBase::slotTab6RecvData(QString recvData){
    //qDebug() << "tab6 " << recvData;
    QDateTime dateTime = QDateTime::currentDateTime();
    QString query;
    QSqlQuery qry;

    recvData.replace("[", "@");
    recvData.replace("]", "@");
    QStringList qlist = recvData.split("@");
    //qDebug() << qlist[3] << " " << qlist[4] << " ";
    QString cds = qlist[3];
    QString temp = qlist[4];
    QString humi = qlist[5];

    query = "insert into iot_db(date, cds, temp, humi) values ('" +
            dateTime.toString("yy/MM/dd hh:mm:ss") +
            "', '" + cds + "', '"+ temp + "', '" + humi + "')";

    if(qry.exec(query)){
        qDebug() << "[query OK] " + query;
    }else{
        qDebug() << qry.lastError().text();
    }
}

void Tab6DataBase::slotSearchDB(){
    QSqlQuery qry;
    QString query;
    QDateTime dateTimeFrom = ui->pDateTimeEditFrom->dateTime();
    QString strDateTimeFrom = dateTimeFrom.toString("yy/MM/dd hh:mm:ss");
    QDateTime dateTimeTo = ui->pDateTimeEditTo->dateTime();
    QString strDateTimeTo = dateTimeTo.toString("yy/MM/dd hh:mm:ss");

    int rowCount = 0;
    ui->pTableWidget->clearContents();
    query = "select * from iot_db where date >'" + strDateTimeFrom + "' AND date < '" + strDateTimeTo + "'";
    if(qry.exec(query)){
        while(qry.next()){
            rowCount++;
            ui->pTableWidget->setRowCount(rowCount);
            QTableWidgetItem * id = new QTableWidgetItem();
            QTableWidgetItem * date = new QTableWidgetItem();
            QTableWidgetItem * cds = new QTableWidgetItem();
            QTableWidgetItem * temp = new QTableWidgetItem();
            QTableWidgetItem * humi = new QTableWidgetItem();

            id->setText(qry.value("id").toString());
            date->setText(qry.value("date").toString());
            cds->setText(qry.value("cds").toString());
            temp->setText(qry.value("temp").toString());
            humi->setText(qry.value("humi").toString());

            ui->pTableWidget->setItem(rowCount-1, 0, id);
            ui->pTableWidget->setItem(rowCount-1, 1, date);
            ui->pTableWidget->setItem(rowCount-1, 2, cds);
            ui->pTableWidget->setItem(rowCount-1, 3, temp);
            ui->pTableWidget->setItem(rowCount-1, 4, humi);
        }
    }

}
void Tab6DataBase::slotDeleteDB(){
    QSqlQuery qry;
    QString query;
    QDateTime dateTimeFrom = ui->pDateTimeEditFrom->dateTime();
    QString strDateTimeFrom = dateTimeFrom.toString("yy/MM/dd hh:mm:ss");
    QDateTime dateTimeTo = ui->pDateTimeEditTo->dateTime();
    QString strDateTimeTo = dateTimeTo.toString("yy/MM/dd hh:mm:ss");

    query = "delete from iot_db where date > '" + strDateTimeFrom +"' AND date < '" + strDateTimeTo + "'";
    if(qry.exec(query)){
        qDebug() << "delete ok";
    }else{

    }

}
void Tab6DataBase::chartPlotClear()
{

}
void Tab6DataBase::chartPlotAdd()
{

}
