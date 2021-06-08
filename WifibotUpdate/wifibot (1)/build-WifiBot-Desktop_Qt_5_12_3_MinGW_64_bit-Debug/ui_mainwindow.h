/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *DisconnectButton;
    QPushButton *ConnectButton;
    QPushButton *Avant;
    QPushButton *stop;
    QSlider *PowerSlider;
    QProgressBar *barre_batterie;
    QToolButton *Gauche;
    QToolButton *Droite;
    QLabel *Vitesse;
    QToolButton *Reculer;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        DisconnectButton = new QPushButton(centralwidget);
        DisconnectButton->setObjectName(QString::fromUtf8("DisconnectButton"));
        DisconnectButton->setGeometry(QRect(100, 10, 75, 23));
        ConnectButton = new QPushButton(centralwidget);
        ConnectButton->setObjectName(QString::fromUtf8("ConnectButton"));
        ConnectButton->setGeometry(QRect(10, 10, 75, 23));
        Avant = new QPushButton(centralwidget);
        Avant->setObjectName(QString::fromUtf8("Avant"));
        Avant->setGeometry(QRect(660, 110, 75, 23));
        stop = new QPushButton(centralwidget);
        stop->setObjectName(QString::fromUtf8("stop"));
        stop->setGeometry(QRect(700, 10, 80, 31));
        PowerSlider = new QSlider(centralwidget);
        PowerSlider->setObjectName(QString::fromUtf8("PowerSlider"));
        PowerSlider->setGeometry(QRect(560, 30, 16, 160));
        PowerSlider->setMinimum(110);
        PowerSlider->setMaximum(239);
        PowerSlider->setValue(160);
        PowerSlider->setOrientation(Qt::Vertical);
        barre_batterie = new QProgressBar(centralwidget);
        barre_batterie->setObjectName(QString::fromUtf8("barre_batterie"));
        barre_batterie->setGeometry(QRect(670, 520, 118, 23));
        barre_batterie->setValue(0);
        Gauche = new QToolButton(centralwidget);
        Gauche->setObjectName(QString::fromUtf8("Gauche"));
        Gauche->setGeometry(QRect(640, 150, 25, 19));
        Gauche->setArrowType(Qt::LeftArrow);
        Droite = new QToolButton(centralwidget);
        Droite->setObjectName(QString::fromUtf8("Droite"));
        Droite->setGeometry(QRect(730, 150, 25, 19));
        Droite->setArrowType(Qt::RightArrow);
        Vitesse = new QLabel(centralwidget);
        Vitesse->setObjectName(QString::fromUtf8("Vitesse"));
        Vitesse->setGeometry(QRect(580, 10, 21, 20));
        Reculer = new QToolButton(centralwidget);
        Reculer->setObjectName(QString::fromUtf8("Reculer"));
        Reculer->setGeometry(QRect(690, 150, 25, 19));
        Reculer->setArrowType(Qt::DownArrow);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(520, 10, 47, 13));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        DisconnectButton->setText(QApplication::translate("MainWindow", "Deconnexion", nullptr));
        ConnectButton->setText(QApplication::translate("MainWindow", "Connexion", nullptr));
        Avant->setText(QApplication::translate("MainWindow", "Avant", nullptr));
        stop->setText(QApplication::translate("MainWindow", "Stop", nullptr));
        Gauche->setText(QApplication::translate("MainWindow", "...", nullptr));
        Droite->setText(QApplication::translate("MainWindow", "...", nullptr));
        Vitesse->setText(QString());
        Reculer->setText(QApplication::translate("MainWindow", "...", nullptr));
        label->setText(QApplication::translate("MainWindow", "Vitesse : ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
