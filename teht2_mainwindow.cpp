#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    num1 = 0;
    num2 = 0;
    result = 0;
    state = 1;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addSubDivMulClickerHandler()
{
    state = 2;
}


void MainWindow::enterClickerHandler()
{
    switch (op) {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    }

    ui->label_result->setNum(result);
    result = 0;
}

void MainWindow::clearClickerHandler()
{
    ui->label_N1->setNum(0);
    ui->label_N2->setNum(0);
    ui->label_result->setNum(0);
    state = 1;
    num1 = 0;
    num2 = 0;
}

void MainWindow::numberClickerHandler(int digit)
{
    if (state == 1) {
        num1 = num1 * 10 + digit;
        ui->label_N1->setNum(num1);
    } else {
        num2 = num2 * 10 + digit;
        ui->label_N2->setNum(num2);
    }
}


void MainWindow::on_N1button_clicked()
{

    numberClickerHandler(1);
}

void MainWindow::on_N2button_clicked()
{

    numberClickerHandler(2);
}


void MainWindow::on_N3button_clicked()
{

    numberClickerHandler(3);
}


void MainWindow::on_N4button_clicked()
{

    numberClickerHandler(4);
}


void MainWindow::on_N5button_clicked()
{

    numberClickerHandler(5);
}


void MainWindow::on_N6button_clicked()
{

    numberClickerHandler(6);
}


void MainWindow::on_N7button_clicked()
{

    numberClickerHandler(7);
}


void MainWindow::on_N8button_clicked()
{

    numberClickerHandler(8);
}


void MainWindow::on_N9button_clicked()
{

    numberClickerHandler(9);
}


void MainWindow::on_N0button_clicked()
{

    numberClickerHandler(0);
}


void MainWindow::on_ClearButton_clicked()
{
    clearClickerHandler();
}


void MainWindow::on_EnterButton_clicked()
{
    enterClickerHandler();
}


void MainWindow::on_AddButton_clicked()
{
    op = '+';
    addSubDivMulClickerHandler();

}


void MainWindow::on_SubButton_clicked()
{
    op = '-';
    addSubDivMulClickerHandler();

}


void MainWindow::on_MulButton_clicked()
{
    op = '*';
    addSubDivMulClickerHandler();

}


void MainWindow::on_DivButton_clicked()
{
    op = '/';
    addSubDivMulClickerHandler();

}

