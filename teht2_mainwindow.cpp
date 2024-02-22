#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addSubDivMulClickerHandler()
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
}


void MainWindow::enterClickerHandler()
{
    ui->EnterButton->setNum(result);
    result = 0;
}

void MainWindow::clearClickerHandler()
{
    if (state == 1) {
        ui->label_N1->setNum(0);
    } else {
        ui->label_N2->setNum(0);
        state = 2;
    }
}

void MainWindow::numberClickerHandler()
{
    if (state == 1) {
        switch (num1) {
        case 1:
            ui->label_N1->setNum(num1);
            break;
        case 2:
            ui->label_N1->setNum(num1);
            break;
        case 3:
            ui->label_N1->setNum(num1);
            break;
        case 4:
            ui->label_N1->setNum(num1);
            break;
        case 5:
            ui->label_N1->setNum(num1);
            break;
        case 6:
            ui->label_N1->setNum(num1);
            break;
        case 7:
            ui->label_N1->setNum(num1);
            break;
        case 8:
            ui->label_N1->setNum(num1);
            break;
        case 9:
            ui->label_N1->setNum(num1);
            break;
        case 0:
            ui->label_N1->setNum(num1);
            break;
        }
    } else {
        switch (num2) {
        case 1:
            ui->label_N2->setNum(num2);
            break;
        case 2:
            ui->label_N2->setNum(num2);
            break;
        case 3:
            ui->label_N2->setNum(num2);
            break;
        case 4:
            ui->label_N2->setNum(num2);
            break;
        case 5:
            ui->label_N2->setNum(num2);
            break;
        case 6:
            ui->label_N2->setNum(num2);
            break;
        case 7:
            ui->label_N2->setNum(num2);
            break;
        case 8:
            ui->label_N2->setNum(num2);
            break;
        case 9:
            ui->label_N2->setNum(num2);
            break;
        case 0:
            ui->label_N2->setNum(num2);
            break;
    }
}


void MainWindow::on_N1button_clicked()
{
    if (state == 1) {
        num1 = 1;
    } else {
        num2 = 1;
    }
    numberClickerHandler();
}

void MainWindow::on_N2button_clicked()
{
    if (state == 1) {
        num1 = 2;
    } else {
        num2 = 2;
    }
    numberClickerHandler();
}


void MainWindow::on_N3button_clicked()
{
    if (state == 1) {
        num1 = 3;
    } else {
        num2 = 3;
    }
    numberClickerHandler();
}


void MainWindow::on_N4button_clicked()
{
    if (state == 1) {
        num1 = 4;
    } else {
        num2 = 4;
    }
    numberClickerHandler();
}


void MainWindow::on_N5button_clicked()
{
    if (state == 1) {
        num1 = 5;
    } else {
        num2 = 5;
    }
    numberClickerHandler();
}


void MainWindow::on_N6button_clicked()
{
    if (state == 1) {
        num1 = 6;
    } else {
        num2 = 6;
    }
    numberClickerHandler();
}


void MainWindow::on_N7button_clicked()
{
    if (state == 1) {
        num1 = 7;
    } else {
        num2 = 7;
    }
    numberClickerHandler();
}


void MainWindow::on_N8button_clicked()
{
    if (state == 1) {
        num1 = 8;
    } else {
        num2 = 8;
    }
    numberClickerHandler();
}


void MainWindow::on_N9button_clicked()
{
    if (state == 1) {
        num1 = 9;
    } else {
        num2 = 9;
    }
    numberClickerHandler();
}


void MainWindow::on_N0button_clicked()
{
    if (state == 1) {
        num1 = 0;
    } else {
        num2 = 0;
    }
    numberClickerHandler();
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

