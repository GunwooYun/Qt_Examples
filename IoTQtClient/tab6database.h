#ifndef TAB6DATABASE_H
#define TAB6DATABASE_H

#include <QWidget>
/* DB header */
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QDateTime>

#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>
#include <QDate>
#include <QTime>
#include <QDateTimeAxis>

QT_CHARTS_USE_NAMESPACE

namespace Ui {
class Tab6DataBase;
}

class Tab6DataBase : public QWidget
{
    Q_OBJECT

public:
    explicit Tab6DataBase(QWidget *parent = nullptr);
    ~Tab6DataBase();

private:
    Ui::Tab6DataBase *ui;
    QSqlDatabase sqlDb;

    QLineSeries *pCdsLine;
    QLineSeries *pTempLine;
    QLineSeries *pHumiLine;
    QChart *pChart;
    QChartView *chartView;
    QDateTimeAxis *axisX;
    QDateTime firstDate;
    QDateTime lastDate;

private slots:
    void slotTab6RecvData(QString);
    void slotSearchDB();
    void slotDeleteDB();

    void chartPlotClear();
    void chartPlotAdd();
};

#endif // TAB6DATABASE_H
