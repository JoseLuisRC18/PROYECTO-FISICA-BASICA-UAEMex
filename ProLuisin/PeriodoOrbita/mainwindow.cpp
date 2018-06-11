#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <math.h>
#include <QtMath>
using namespace std;
double r,T, gp, ra, mul;
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
    double gp = ui->lineEdit_2->text().toDouble();

  double r = (ui->lineEdit->text().toDouble())+6400000;
  double T = 2*M_PI;
  double mul= 9.8*gp;
  double div = r/mul;
  double ra = sqrt(div);
  double res = T*ra;

  QString Res = QString::number(res);
  ui->plainTextEdit->appendPlainText(Res);

}
