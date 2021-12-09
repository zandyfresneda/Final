#include "datos.h"
#include "ui_datos.h"

error_404::error_404(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::error_404)
{
    ui->setupUi(this);
}

error_404::~error_404()
{
    delete ui;
}
