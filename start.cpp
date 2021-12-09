#include "start.h"
#include "ui_start.h"
#include "login.h"
#include "register.h"
#include "QDebug"

START::START(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::START)
{
    ui->setupUi(this);
    QString nombre;
    nombre="BaseDeDatos.sqlite";
    dbmain=QSqlDatabase::addDatabase("QSQLITE");
    dbmain.setDatabaseName(nombre);
    if(dbmain.open())
    {
        qDebug()<<"Base de Datos Creada";
    }
    else
    {
          qDebug()<<"Error";
    }
}

START::~START()
{
    delete ui;
}


void START::on_BOTON_LOGIN_clicked()
{
    LOGIN *login = new LOGIN(0);
    login->show();
}

//* aqui llamamos a la interfaz de registro cuando se da click*//
void START::on_BOTON_REGI_clicked()
{
    REGISTER *registro = new REGISTER(0);
   registro->show();
}
