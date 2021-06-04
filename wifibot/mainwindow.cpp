#include "mainwindow.h"
#include "myrobot.h"
#include "ui_mainwindow.h"
#include <iostream>



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->DisconnectButton->setDisabled(true);

}

MainWindow::~MainWindow()
{
    delete ui;

}


void MainWindow::on_ConnectButton_clicked()
{
    rob.doConnect();
    ui->ConnectButton->setDisabled(true);
    ui->DisconnectButton->setEnabled(true);
    qDebug() << rob.DataReceived[0];

}

void MainWindow::on_DisconnectButton_clicked()
{
    rob.disConnect();
    ui->ConnectButton->setEnabled(true);
    ui->DisconnectButton->setDisabled(true);
}



void MainWindow::on_Truc_clicked()
{
    while(rob.Mutex.tryLock());
    qDebug() << "test";
    value=(char)ui->power->value();
    std::cout<<"valeur de value" <<value <<std::endl;
    rob.DataToSend[0] = 0xFF;
    rob.DataToSend[1] = 0x07;
    rob.DataToSend[2] = value;
    rob.DataToSend[3] = 0;
    rob.DataToSend[4] = value;
    rob.DataToSend[5] = 0;
    rob.DataToSend[6] = 0x50;

    short res = rob.Crc16(rob.DataToSend,7);
    char a = res;
    char b = res>>8;
    qDebug() << a;
    qDebug() << b;
    rob.DataToSend[7] = a;
    rob.DataToSend[8] = b;
    rob.Mutex.unlock();

}

void MainWindow::on_stop_clicked()
{
    while(rob.Mutex.tryLock());
    qDebug() << "test";
    rob.DataToSend[0] = 0xFF;
    rob.DataToSend[1] = 0x07;
    rob.DataToSend[2] = 0x00;
    rob.DataToSend[3] = 0x00;
    rob.DataToSend[4] = 0x00;
    rob.DataToSend[5] = 0x00;
    rob.DataToSend[6] = 0x00;

    short res = rob.Crc16(rob.DataToSend,7);
    char a = res;
    char b = res>>8;
    qDebug() << a;
    qDebug() << b;
    rob.DataToSend[7] = a;
    rob.DataToSend[8] = b;
    rob.Mutex.unlock();
}


