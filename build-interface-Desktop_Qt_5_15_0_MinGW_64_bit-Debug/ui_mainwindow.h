/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QOpenGLWidget>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QCheckBox *chbox_wire;
    QCheckBox *chbox_smooth;
    QCheckBox *chbox_fill;
    QCheckBox *chbox_normal;
    QOpenGLWidget *openGLWidget;
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(735, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        chbox_wire = new QCheckBox(centralwidget);
        chbox_wire->setObjectName(QString::fromUtf8("chbox_wire"));
        chbox_wire->setGeometry(QRect(590, 60, 70, 17));
        chbox_smooth = new QCheckBox(centralwidget);
        chbox_smooth->setObjectName(QString::fromUtf8("chbox_smooth"));
        chbox_smooth->setGeometry(QRect(590, 80, 70, 17));
        chbox_fill = new QCheckBox(centralwidget);
        chbox_fill->setObjectName(QString::fromUtf8("chbox_fill"));
        chbox_fill->setGeometry(QRect(590, 100, 70, 17));
        chbox_normal = new QCheckBox(centralwidget);
        chbox_normal->setObjectName(QString::fromUtf8("chbox_normal"));
        chbox_normal->setGeometry(QRect(590, 120, 70, 17));
        openGLWidget = new QOpenGLWidget(centralwidget);
        openGLWidget->setObjectName(QString::fromUtf8("openGLWidget"));
        openGLWidget->setGeometry(QRect(10, 10, 521, 511));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(550, 30, 161, 121));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(550, 180, 161, 141));
        radioButton = new QRadioButton(groupBox_2);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(30, 30, 82, 17));
        radioButton_2 = new QRadioButton(groupBox_2);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(30, 50, 82, 17));
        radioButton_3 = new QRadioButton(groupBox_2);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(30, 70, 82, 17));
        radioButton_4 = new QRadioButton(groupBox_2);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setGeometry(QRect(30, 90, 82, 17));
        radioButton_5 = new QRadioButton(groupBox_2);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));
        radioButton_5->setGeometry(QRect(30, 110, 82, 17));
        MainWindow->setCentralWidget(centralwidget);
        groupBox_2->raise();
        groupBox->raise();
        chbox_wire->raise();
        chbox_smooth->raise();
        chbox_fill->raise();
        chbox_normal->raise();
        openGLWidget->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 735, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "CG-2020-1-Proyecto", nullptr));
        chbox_wire->setText(QCoreApplication::translate("MainWindow", "Wire", nullptr));
        chbox_smooth->setText(QCoreApplication::translate("MainWindow", "Smooth", nullptr));
        chbox_fill->setText(QCoreApplication::translate("MainWindow", "Fill", nullptr));
        chbox_normal->setText(QCoreApplication::translate("MainWindow", "Normal", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "RENDER", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "SHAPE", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "Cube", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "Cylinder", nullptr));
        radioButton_3->setText(QCoreApplication::translate("MainWindow", "Cone", nullptr));
        radioButton_4->setText(QCoreApplication::translate("MainWindow", "Sphere", nullptr));
        radioButton_5->setText(QCoreApplication::translate("MainWindow", "Special", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
