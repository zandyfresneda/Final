#include "datos_p.h"
#include "ui_datos_p.h"
#include "register.h"
#include "ui_register.h"
#include "ui_login.h"
#include "login.h"
#include "QDebug"
#include "datos.h"
#include "QMessageBox"

datos_p::datos_p(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::datos_p)
{
    ui->setupUi(this);
    CrearTabla_1();
}

datos_p::~datos_p()
{
    delete ui;
}
void datos_p::CrearTabla_1()
{
    QString consulta;
    consulta.append("CREATE TABLE IF NOT EXISTS data_user("
                    "name VARCHAR(25),"
                    "lastname VARCHAR(25),"
                    "id_number VARCHAR(25),"
                    "day VARCHAR(2),"
                    "month VARCHAR(2),"
                    "year VARCHAR(4)"
                    ");");
    QSqlQuery crear;
    crear.prepare(consulta);
    if(crear.exec())
    {
        qDebug()<<"Tabla Creada";
    }else
    {
        qDebug()<<"Tabla no creada"<<crear.lastError();
    }
}




void datos_p::on_boton_validar_clicked()
{
    QString name=ui->nombre->text();
    QString lastname=ui->apellido->text();
    QString id_number=ui->document_line->text();
    QString day=ui->day_line->text();
    QString month=ui->month_line->text();
    QString year=ui->year_line->text();
    qDebug()<<name;
    qDebug()<<lastname;
    qDebug()<<id_number;
    qDebug()<<day;
    qDebug()<<month;
    qDebug()<<year;
    QSqlQuery insertar_db;
    if(1<=day<=31 && 1<=month<=12 && 1<=year<=2021)
    {
        insertar_db.prepare("INSERT INTO data_user(name,lastname,id_number,day,month,year)"
                        "VALUES (:name,:lastname,:id_number,:day,:month,:year)");
        insertar_db.bindValue(":name",name);
        insertar_db.bindValue(":lastname",lastname);
        insertar_db.bindValue(":id_number",id_number);
        insertar_db.bindValue(":day",day);
        insertar_db.bindValue(":month",month);
        insertar_db.bindValue(":year",year);

        if(insertar_db.exec())
        {
                qDebug()<<"Datos ingresados a la tabla";
                QMessageBox::information(this,tr("Exito"),tr("Registro Exitoso"));
        }
        else
        {
            qDebug()<<"Error al ingresar los datos"<<insertar_db.lastError();
            QMessageBox::critical (this,tr("ERROR"),tr("Error al ingresar los datos"));
        }
    }
    else
    {
        qDebug()<<"Error al ingresar los datos"<<insertar_db.lastError();
        QMessageBox::critical (this,tr("ERROR"),tr("Error en el formato de fecha, por favor verifique "));
    }
}
