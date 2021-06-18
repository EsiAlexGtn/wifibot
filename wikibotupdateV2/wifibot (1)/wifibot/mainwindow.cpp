#include "mainwindow.h"
#include "myrobot.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <QKeyEvent>
#include <QtWebEngineWidgets>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this); 
    this->init();
}

MainWindow::~MainWindow()
{
    delete ui;

}
void MainWindow::init()
{
    ui->DisconnectButton->setDisabled(true);
    this->on_PowerSlider_valueChanged(160);
    this->cameraStream();
    Camera = new QNetworkAccessManager();

}

void MainWindow::on_ConnectButton_clicked()
{
    rob.doConnect();
    ui->ConnectButton->setDisabled(true);
    ui->DisconnectButton->setEnabled(true);
    this->maj_batterie();
    this->cameraStream();
}

void MainWindow::on_DisconnectButton_clicked()
{
    rob.disConnect();
    ui->ConnectButton->setEnabled(true);
    ui->DisconnectButton->setDisabled(true);
    this->ui->barre_batterie->setValue(0);
}




void MainWindow::   on_stop_clicked()
{
    while(rob.Mutex.tryLock());
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

    rob.DataToSend[7] = a;
    rob.DataToSend[8] = b;
    rob.Mutex.unlock();
}

void MainWindow::maj_batterie(){


    if(((unsigned int) rob.DataReceived[2] < 100) && ((unsigned int) rob.DataReceived[2] > 0)){
        this->ui->barre_batterie->setValue(rob.DataReceived[2]);
    }
    else if(((unsigned int) rob.DataReceived[2] > 100)){
        this->ui->barre_batterie->setValue(100);
            qDebug() << "Batterie : en recharge";

        //Afficher "En recharge"
    }
    else{
        this->ui->barre_batterie->setValue(0);
        qDebug() << "Batterie : Pas de batterie";
    }
}


void MainWindow::on_Droite_pressed()
{
    while(rob.Mutex.tryLock());
    rob.DataToSend[0] = 0xFF;
    rob.DataToSend[1] = 0x07;
    rob.DataToSend[2] = this->PowerValue;
    rob.DataToSend[3] = 0x00;
    rob.DataToSend[4] = this->PowerValue;
    rob.DataToSend[5] = 0x00;
    rob.DataToSend[6] = 0x40;//0x40

    short res = rob.Crc16(rob.DataToSend,7);
    char a = res;
    char b = res>>8;

    rob.DataToSend[7] = a;
    rob.DataToSend[8] = b;
    rob.Mutex.unlock();
}

void MainWindow::on_Gauche_pressed()
{
    while(rob.Mutex.tryLock());
    rob.DataToSend[0] = 0xFF;
    rob.DataToSend[1] = 0x07;
    rob.DataToSend[2] = this->PowerValue;
    rob.DataToSend[3] = 0x00;
    rob.DataToSend[4] = this->PowerValue;
    rob.DataToSend[5] = 0x00;
    rob.DataToSend[6] = 0x10;//0x10

    short res = rob.Crc16(rob.DataToSend,7);
    char a = res;
    char b = res>>8;

    rob.DataToSend[7] = a;
    rob.DataToSend[8] = b;
    rob.Mutex.unlock();
}



void MainWindow::on_Avant_pressed()
{
    while(rob.Mutex.tryLock());

    rob.DataToSend[0] = 0xFF;
    rob.DataToSend[1] = 0x07;
    rob.DataToSend[2] = this->PowerValue;//0x78
    rob.DataToSend[3] = 0;
    rob.DataToSend[4] = this->PowerValue; //0x78
    rob.DataToSend[5] = 0;
    rob.DataToSend[6] = 0x50;

     qDebug() <<PowerValue;

    short res = rob.Crc16(rob.DataToSend,7);
    char a = res;
    char b = res>>8;

    rob.DataToSend[7] = a;
    rob.DataToSend[8] = b;
    rob.Mutex.unlock();


}




void MainWindow::on_PowerSlider_valueChanged(int value)
{
    this->ui->Vitesse->setNum(value);
    this->PowerValue=value;
}



void MainWindow::on_Reculer_pressed()
{
    while(rob.Mutex.tryLock());

    rob.DataToSend[0] = 0xFF;
    rob.DataToSend[1] = 0x07;
    rob.DataToSend[2] = this->PowerValue;
    rob.DataToSend[3] = 0;
    rob.DataToSend[4] = this->PowerValue;
    rob.DataToSend[5] = 0;
    rob.DataToSend[6] = 0x0;

     qDebug() <<PowerValue;

    short res = rob.Crc16(rob.DataToSend,7);
    char a = res;
    char b = res>>8;

    rob.DataToSend[7] = a;
    rob.DataToSend[8] = b;
    rob.Mutex.unlock();
}
void MainWindow::cameraStream(){

    QUrl url = QUrl("http://192.168.1.11:8080/?action=stream");

    this->ui->video->load(url);
    this->ui->video->show();


}

void MainWindow::keyPressEvent(QKeyEvent *e)
{
    if (e->key() == Qt::Key_Z)
    {
        this->on_Avant_pressed();
    }
    if (e->key() == Qt::Key_S)
    {
        this->on_Reculer_pressed();
    }
    if (e->key() == Qt::Key_D)
    {
        this->on_Droite_pressed();
    }
    if (e->key() == Qt::Key_Q)
    {
        this->on_Gauche_pressed();
    }
    if (e->key() == Qt::Key_X)
    {
        this->on_stop_clicked();
    }
    if (e->key() == Qt::Key_J)
    {
        this->on_CamLeft_clicked();
    }
    if (e->key() == Qt::Key_K)
    {
        this->on_CamDown_clicked();
    }
    if (e->key() == Qt::Key_L)
    {
        this->on_CamRight_clicked();
    }
    if (e->key() == Qt::Key_I)
    {
        this->on_CamUp_clicked();
    }

    if (e->key() == Qt::Key_E)
    {
        if(this->PowerValue<=230)
        {
            int Vit = this->PowerValue;
            Vit+=10;
            this->ui->PowerSlider->setValue(Vit);
            this->on_PowerSlider_valueChanged(Vit);
        }
    }
    if (e->key() == Qt::Key_A)
    {
      if(this->PowerValue>=90)
      {
        int Vit = this->PowerValue;
        Vit-=10;
        this->ui->PowerSlider->setValue(Vit);
        this->on_PowerSlider_valueChanged(Vit);
        }
    }


}

void MainWindow::on_ConnectVideo_clicked()
{
this->cameraStream();
}





void MainWindow::on_CamRight_clicked()
{
    this->Camera->get(QNetworkRequest(QUrl("http://192.168.1.11:8080/?action=command&dest=0&plugin=0&id=10094852&group=1&value=-200")));
}


void MainWindow::on_CamLeft_clicked()
{
    this->Camera->get(QNetworkRequest(QUrl("http://192.168.1.11:8080/?action=command&dest=0&plugin=0&id=10094852&group=1&value=200")));
}


void MainWindow::on_CamUp_clicked()
{
     this->Camera->get(QNetworkRequest(QUrl("http://192.168.1.11:8080/?action=command&dest=0&plugin=0&id=10094853&group=1&value=-200")));
}


void MainWindow::on_CamDown_clicked()
{
    this->Camera->get(QNetworkRequest(QUrl("http://192.168.1.11:8080/?action=command&dest=0&plugin=0&id=10094853&group=1&value=200")));

}

