#ifndef LUZ_H
#define LUZ_H
#include "QtSql/QSqlDatabase"
#include <QWidget>
#include <QMainWindow>
#include <QTimer>
#include "sensor.h"
#include "QtSql/QSqlDatabase"
#include "QtSql/qsqlquery.h"
#include "QtSql/QSqlError"
#include "QtSql/QSqlQuery"
//#include "db_local.h"
#include <string>


namespace Ui {
class luz;
}

class luz : public QWidget
{
    Q_OBJECT

public:
    explicit luz(QWidget *parent = 0);
    ~luz();
    void actualizarGUI();
    void CrearTabla();
    void CrearTabla2();
    void agregar_datos1();



public slots:
    void leerSensores();


private slots:
    void on_Left_Button_clicked();
    void on_Right_Button_clicked();
    void estados(int&);

private:
    void ActualizarFechaFromSO();
    Ui::luz *ui;
    QTimer*     _tmr;
    int_luz     _luz;
    Temp_Hum    _tem;
    Viento      _viento;
    Sensor      _preci;
    int         _hr, _min, _itera;
    double      _prom_luz, _prom_Tem[2], _prom_Viento[2], _prom_Preci;
    //Db_Local    *_db_local;
    std::string _fecha;
};

#endif // LUZ
