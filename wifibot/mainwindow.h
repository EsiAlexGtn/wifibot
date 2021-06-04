#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "myrobot.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_ConnectButton_clicked();

    void on_DisconnectButton_clicked();

    void on_Truc_clicked();

    void on_stop_clicked();





private:
    Ui::MainWindow *ui;
    MyRobot rob;
    char value;
};
#endif // MAINWINDOW_H
