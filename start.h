#ifndef START_H
#define START_H
#include "login.h"
#include "register.h"
#include <QMainWindow>
#include "QtSql/QSqlDatabase"
#include "QtSql/qsqlquery.h"
#include "QtSql/QSqlError"
#include "QtSql/QSqlQuery"

namespace Ui {
class START;
}

class START : public QMainWindow
{
    Q_OBJECT

public:
    explicit START(QWidget *parent = 0);
    ~START();

private slots:

    void on_BOTON_LOGIN_clicked();

    void on_BOTON_REGI_clicked();

private:
    Ui::START *ui;
  QSqlDatabase dbmain;
};

#endif // START_H
