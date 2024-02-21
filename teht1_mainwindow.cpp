#include "mainwindow.h"
#include "ui_mainwindow.h"

int N_user = 0;

mainWindow::mainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::mainWindow)
{
    ui->setupUi(this);
}

mainWindow::~mainWindow()
{
    delete ui;
}

void mainWindow::on_buttonCount_clicked()
{
    N_user++;

    ui->textBoxNumber->setNum(N_user);

}


void mainWindow::on_buttonReset_clicked()
{
    N_user = 0;

    ui->textBoxNumber->setNum(N_user);
}

