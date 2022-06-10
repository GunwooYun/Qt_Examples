#ifndef TAB6DATABASE_H
#define TAB6DATABASE_H

#include <QWidget>
/* DB header */
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QDateTime>

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

private slots:
    void slotTab6RecvData(QString);
    void slotSearchDB();
    void slotDeleteDB();
};

#endif // TAB6DATABASE_H
