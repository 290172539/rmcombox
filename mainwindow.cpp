#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stdio.h>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    int a = ui->comboBox->currentIndex();
    printf("a = %d\n",a);
}

void MainWindow::on_pushButton_del_clicked()
{
    ui->comboBox->removeItem(ui->comboBox->currentIndex());

}

void MainWindow::on_pushButton_clicked()
{
    printf("current_combox = %d\n",ui->comboBox->currentIndex());
}
