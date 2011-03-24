/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: 
**      by: Qt User Interface Compiler version 4.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QTextEdit *textEdit;
    QCheckBox *checkMayus;
    QCheckBox *checkNum;
    QCheckBox *checkMin;
    QCheckBox *checkOtros;
    QLineEdit *lineEdit_2;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QMenuBar *menuBar;
    QMenu *menuAcerca_de;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(559, 335);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(440, 10, 101, 21));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 411, 21));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 40, 541, 25));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(50, 240, 80, 26));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 80, 201, 121));
        checkMayus = new QCheckBox(centralWidget);
        checkMayus->setObjectName(QString::fromUtf8("checkMayus"));
        checkMayus->setGeometry(QRect(280, 80, 261, 22));
        checkNum = new QCheckBox(centralWidget);
        checkNum->setObjectName(QString::fromUtf8("checkNum"));
        checkNum->setGeometry(QRect(280, 120, 96, 22));
        checkMin = new QCheckBox(centralWidget);
        checkMin->setObjectName(QString::fromUtf8("checkMin"));
        checkMin->setGeometry(QRect(280, 100, 261, 22));
        checkOtros = new QCheckBox(centralWidget);
        checkOtros->setObjectName(QString::fromUtf8("checkOtros"));
        checkOtros->setGeometry(QRect(280, 150, 231, 22));
        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(280, 170, 271, 27));
        spinBox = new QSpinBox(centralWidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(310, 240, 55, 27));
        spinBox->setMinimum(1);
        spinBox_2 = new QSpinBox(centralWidget);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setGeometry(QRect(420, 240, 55, 27));
        spinBox_2->setMinimum(1);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(280, 210, 141, 21));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(280, 240, 66, 31));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(380, 240, 71, 31));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 559, 25));
        menuAcerca_de = new QMenu(menuBar);
        menuAcerca_de->setObjectName(QString::fromUtf8("menuAcerca_de"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuAcerca_de->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "HPGen 1.0", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "Seleccionar", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Introduce una ruta para almacenar el diccionario a generar:", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("MainWindow", "Generar", 0, QApplication::UnicodeUTF8));
        checkMayus->setText(QApplication::translate("MainWindow", "Alfabeto romano (May\303\272sculas)", 0, QApplication::UnicodeUTF8));
        checkNum->setText(QApplication::translate("MainWindow", "Num\303\251rico", 0, QApplication::UnicodeUTF8));
        checkMin->setText(QApplication::translate("MainWindow", "Alfabeto romano (Min\303\272sculas)", 0, QApplication::UnicodeUTF8));
        checkOtros->setText(QApplication::translate("MainWindow", "Otros car\303\241cteres especiales:", 0, QApplication::UnicodeUTF8));
        lineEdit_2->setText(QApplication::translate("MainWindow", "\303\261\303\221.,;[]-_=)(/\302\277?", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Longitud de la clave:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Min:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "Max:", 0, QApplication::UnicodeUTF8));
        menuAcerca_de->setTitle(QApplication::translate("MainWindow", "Acerca de...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
