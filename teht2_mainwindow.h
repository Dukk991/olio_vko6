#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:


    //

    void on_N6button_clicked();

    void on_N1button_clicked();

    void on_N2button_clicked();

    void on_N3button_clicked();

    void on_N4button_clicked();

    void on_N5button_clicked();

    void on_N7button_clicked();

    void on_N8button_clicked();

    void on_N9button_clicked();

    void on_N0button_clicked();

    void on_ClearButton_clicked();

    void on_EnterButton_clicked();

    void on_AddButton_clicked();

    void on_SubButton_clicked();

    void on_MulButton_clicked();

    void on_DivButton_clicked();

private:
    Ui::MainWindow *ui;

    int num1;
    int num2;
    int state;
    float result;
    short op;

    void numberClickerHandler();
    void clearClickerHandler();
    void enterClickerHandler();
    void addSubDivMulClickerHandler();
};
#endif // MAINWINDOW_H
