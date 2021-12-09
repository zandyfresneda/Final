#ifndef DATOS_H
#define DATOS_H
#include "QtSql/QSqlDatabase"
#include "QtSql/qsqlquery.h"
#include "QtSql/QSqlError"
#include "QtSql/QSqlQuery"
#include <QWidget>

namespace Ui {
class error_404;
}

class error_404 : public QWidget
{
    Q_OBJECT

public:
    explicit error_404(QWidget *parent = 0);
    ~error_404();

private:
    Ui::error_404 *ui;
};

#endif // ERROR_404_H
