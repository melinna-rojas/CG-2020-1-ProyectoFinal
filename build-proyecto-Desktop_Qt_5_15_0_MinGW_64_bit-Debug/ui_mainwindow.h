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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *openGL_Window;
    QLabel *label;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QLabel *label_2;
    QRadioButton *rbtn_cube;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QLabel *label_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(900, 600);
        MainWindow->setMinimumSize(QSize(900, 600));
        MainWindow->setMaximumSize(QSize(900, 600));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 40, 601, 531));
        openGL_Window = new QVBoxLayout(verticalLayoutWidget);
        openGL_Window->setObjectName(QString::fromUtf8("openGL_Window"));
        openGL_Window->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(660, 30, 61, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("Montserrat"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(670, 50, 70, 17));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Montserrat"));
        font1.setPointSize(9);
        font1.setBold(false);
        font1.setWeight(50);
        checkBox->setFont(font1);
        checkBox_2 = new QCheckBox(centralwidget);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(670, 70, 70, 17));
        checkBox_2->setFont(font1);
        checkBox_3 = new QCheckBox(centralwidget);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setGeometry(QRect(670, 90, 70, 17));
        checkBox_3->setFont(font1);
        checkBox_4 = new QCheckBox(centralwidget);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));
        checkBox_4->setGeometry(QRect(670, 110, 111, 17));
        checkBox_4->setFont(font1);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(660, 150, 61, 16));
        label_2->setFont(font);
        rbtn_cube = new QRadioButton(centralwidget);
        rbtn_cube->setObjectName(QString::fromUtf8("rbtn_cube"));
        rbtn_cube->setGeometry(QRect(670, 170, 82, 17));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Montserrat"));
        font2.setPointSize(9);
        rbtn_cube->setFont(font2);
        radioButton_2 = new QRadioButton(centralwidget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(670, 190, 82, 17));
        radioButton_2->setFont(font2);
        radioButton_3 = new QRadioButton(centralwidget);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(670, 210, 82, 17));
        radioButton_3->setFont(font2);
        radioButton_4 = new QRadioButton(centralwidget);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setGeometry(QRect(670, 230, 82, 17));
        radioButton_4->setFont(font2);
        radioButton_5 = new QRadioButton(centralwidget);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));
        radioButton_5->setGeometry(QRect(670, 250, 82, 17));
        radioButton_5->setFont(font2);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(660, 330, 61, 16));
        label_3->setFont(font);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "CG-Project", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Render", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "Wire", nullptr));
        checkBox_2->setText(QCoreApplication::translate("MainWindow", "Smooth", nullptr));
        checkBox_3->setText(QCoreApplication::translate("MainWindow", "Fill", nullptr));
        checkBox_4->setText(QCoreApplication::translate("MainWindow", "Show Normal", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Shapes", nullptr));
        rbtn_cube->setText(QCoreApplication::translate("MainWindow", "Cube", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "Cylinder", nullptr));
        radioButton_3->setText(QCoreApplication::translate("MainWindow", "Cone", nullptr));
        radioButton_4->setText(QCoreApplication::translate("MainWindow", "Sphere", nullptr));
        radioButton_5->setText(QCoreApplication::translate("MainWindow", "Special", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Camera", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
