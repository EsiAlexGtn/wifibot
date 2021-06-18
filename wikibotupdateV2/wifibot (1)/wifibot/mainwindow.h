#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "myrobot.h"
#include <QNetworkAccessManager>




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

    void on_stop_clicked();

    void on_Droite_pressed();

    void on_Gauche_pressed();
    void cameraStream();

    void on_Avant_pressed();

    void on_PowerSlider_valueChanged(int value);
    void keyPressEvent(QKeyEvent *e);
    void on_Reculer_pressed();
    void init();


    void on_ConnectVideo_clicked();


    void on_CamRight_clicked();

    void on_CamLeft_clicked();

    void on_CamUp_clicked();

    void on_CamDown_clicked();

private:
    Ui::MainWindow *ui;
    MyRobot rob;
    int PowerValue;
    void maj_batterie();
    QNetworkAccessManager *Camera;

};
#endif // MAINWINDOW_H
