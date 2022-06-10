#include "tab5chartplot.h"
#include "ui_tab5chartplot.h"

Tab5ChartPlot::Tab5ChartPlot(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Tab5ChartPlot)
{
    ui->setupUi(this);

    /* Create line */
    pCdsLine = new QLineSeries(this); // cds
    pCdsLine->setName("CDS");

    pTempLine = new QLineSeries(this); // temerature
    pTempLine->setName("Temperature");

    pHumiLine = new QLineSeries(this); // humidity
    pHumiLine->setName("Humidity");

    /* Create pen(line style) object */
    QPen pen;

    /* Set pen for cds line */
    pen.setWidth(2);
    pen.setBrush(Qt::red);
    pen.setJoinStyle(Qt::MiterJoin);
    pen.setCapStyle(Qt::FlatCap);

    /* Set line style to cds line */
    pCdsLine->setPen(pen);

    /* Set pen for temp line */
    pen.setBrush(Qt::green);

    /* Set line style to temp line */
    pTempLine->setPen(pen);

    /* Set pen for humi line */
    pen.setBrush(Qt::blue);

    /* Set line style to temp line */
    pHumiLine->setPen(pen);



    /* Create chart */
    pChart = new QChart();
    pChart->addSeries(pCdsLine); // Add cds line to chart
    pChart->addSeries(pTempLine); // Add temp line to chart
    pChart->addSeries(pHumiLine); // Add humi line to chart
    pChart->createDefaultAxes(); // make axis
    pChart->axes(Qt::Vertical).first()->setRange(0, 100); // make axis range

    /* Create chart view */
    chartView = new QChartView(pChart);
    chartView->setRenderHint(QPainter::Antialiasing);

    /* Embed chart into form */
    ui->pChartHoriLayout->layout()->addWidget(chartView);

    /* QDateTimeAxis *axisX */
    axisX = new QDateTimeAxis;
    axisX->setFormat("h:mm");

    /*
    pCdsLine->append(0,20);
    pCdsLine->append(5,80);
    pCdsLine->append(10,60);
    pCdsLine->append(15,50);
    pCdsLine->append(20,70);
    */


    QDate date = QDate::currentDate();
    QTime time = QTime::currentTime();

    firstDate.setDate(date);
    firstDate.setTime(time);
    chartView->chart()->setAxisX(axisX,pCdsLine);
    chartView->chart()->setAxisX(axisX,pTempLine);
    chartView->chart()->setAxisX(axisX,pHumiLine);
#if 1
    QTime tempTime = time.addSecs(600); // 10min
    lastDate.setDate(date);
    lastDate.setTime(tempTime);
    axisX->setRange(firstDate, lastDate);

    connect(ui->pPBaddButton, SIGNAL(clicked()), this, SLOT(chartPlotAdd()));
    connect(ui->pPBclearButton, SIGNAL(clicked()), this, SLOT(chartPlotClear()));

#endif

}

Tab5ChartPlot::~Tab5ChartPlot()
{
    delete ui;
}

void Tab5ChartPlot::chartPlotClear(){
    pCdsLine->clear();
}

void Tab5ChartPlot::chartPlotAdd(){
    pCdsLine->append(ui->pLExAxis->text().toDouble(), ui->pLEyAxis->text().toDouble());
    ui->pLExAxis->clear();
    ui->pLEyAxis->clear();
}

void Tab5ChartPlot::slotTab5RecvData(QString recvData){
    //qDebug() << recvData;
    QDate date = QDate::currentDate();
    QTime time = QTime::currentTime();
    //QString strTime = time.toString();
    QDateTime xVal;
    xVal.setDate(date);
    xVal.setTime(time);

    recvData.replace("[", "@");
    recvData.replace("]", "@");
    QStringList qlist = recvData.split("@"); // idx0:null, idx1:str, ...
    //QMessageBox::information(this, "tab2TOtab3", qlist[2]);
    if(qlist[2] == "SENSOR"){
        pCdsLine->append(xVal.toMSecsSinceEpoch(), qlist[3].toDouble());
        pTempLine->append(xVal.toMSecsSinceEpoch(), qlist[4].toDouble());
        pHumiLine->append(xVal.toMSecsSinceEpoch(), qlist[5].toDouble());
    }
}
