#ifndef REGISTER_H
#define REGISTER_H
#include "datos.h"
#include <QWidget>
#include "QtSql/QSqlDatabase"
#include "QtSql/qsqlquery.h"
#include "QtSql/QSqlError"
#include "QtSql/QSqlQuery"
#include "datos_p.h"
#include "ui_datos_p.h"

namespace Ui {
class REGISTER;
}

class REGISTER : public QWidget
{
    Q_OBJECT

public:
    explicit REGISTER(QWidget *parent = 0);
    ~REGISTER();
    void CrearTabla();

private slots:
    void on_BOTON_REGI2_clicked();

private:
    Ui::REGISTER *ui;
};

#endif // REGISTER_H
