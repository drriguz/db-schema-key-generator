#include "app.h"
#include "ui_app.h"

#include "generator.h"
#include <string>


App::App(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::App)
{
    ui->setupUi(this);
}

App::~App()
{
    delete ui;
}

void App::on_pushButtonHack_clicked()
{
    QString name = ui->lineEditName->text();
    if(name.isEmpty())
        return;
    string key = generateKey(name.toStdString());
    ui->lineEditKey->setText(QString::fromStdString(key));
}
