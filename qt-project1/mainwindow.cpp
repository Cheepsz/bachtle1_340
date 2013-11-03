#include <iostream>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->btn_back, SIGNAL(clicked(bool)), this, SLOT(on_back_clicked()));
    connect(ui->btn_next, SIGNAL(clicked(bool)), this, SLOT(on_next_clicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    std::cout << "pushbutton " << std::endl;
}

void MainWindow::on_back_clicked()
{
    std::cout << "back " << std::endl;
}

void MainWindow::on_next_clicked()
{
    std::cout << "next " << std::endl;
}
