#ifndef DATOS_P_H
#define DATOS_P_H
#include "datos.h"
#include <QWidget>
#include "QtSql/QSqlDatabase"
#include "QtSql/qsqlquery.h"
#include "QtSql/QSqlError"
#include "QtSql/QSqlQuery"


namespace Ui {
class datos_p;
}

class datos_p : public QWidget
{
    Q_OBJECT

public:
    explicit datos_p(QWidget *parent = 0);
    ~datos_p();
    void CrearTabla_1();

private slots:
    void on_boton_validar_clicked();

private:
    Ui::datos_p *ui;
};

#endif // DATOS_P_H
