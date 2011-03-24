#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include "stdio.h"
#include "iostream"
#include <QString>
#include <string>

int rep=0;
char min[28]="abcdefghijklmnopqrstuvwxyz";
char may[28]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char num[11]="0123456789";
int recur=-1;
char pass[50];
int final=0;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString direccion;
    QString home = getenv("HOME");
    direccion=QFileDialog::getSaveFileName(0,"Guardar Como...",home);
    ui->lineEdit->setText(direccion);
}

void MainWindow::bucle(int lon)
{
    int longi= strlen(min);
    for (int i=0;i<longi;i++){
    //sleep(1);
        pass[rep]=min[i];
            if (lon == rep){
                std::cout<<pass<< std::endl;
                if (lon == longi){
                }
            }
            else{
            rep++;
            bucle(lon);
            }
 }

 rep--;

}

void MainWindow::on_pushButton_2_clicked()
{
    int min=ui->spinBox->text().toInt();
    int max=ui->spinBox_2->text().toInt();
    int lon= max-min;
  std::cout << lon << std::endl;


for (int i = 0;i<lon;i++)
    rep=0;
    strcpy(pass,"");
    bucle(lon);

    //ui->textEdit->setText(ui->textEdit->toPlainText() + pass);


// ui->textEdit->setText(ui->textEdit->toPlainText()  + bucle(cadena, strlen(cadena)) + "\n");
}

