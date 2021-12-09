#ifndef LOGIN_H
#define LOGIN_H
#include "QtSql/QSqlDatabase"
#include "QtSql/qsqlquery.h"
#include "QtSql/QSqlError"
#include "QtSql/QSqlQuery"
#include <QWidget>

namespace Ui {
class LOGIN;
}

class LOGIN : public QWidget
{
    Q_OBJECT

public:
    explicit LOGIN(QWidget *parent = 0);
    ~LOGIN();

private slots:
    void on_BOTON_LOGIN2_clicked();

private:
    Ui::LOGIN *ui;
};

#endif // LOGIN_H
