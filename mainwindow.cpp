#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->radioButton->setText(QString("1 кнопка"));
    ui->radioButton_2->setText(QString("2 кнопка"));
    QStringList sList{"1 предмет", "2 предмет", "3 предмет"};
    ui->comboBox->addItems(sList);
    ui->pushButton->setText("Кнопка");
    ui->progressBar->setMaximum(maxValueProgressBar);
    ui->progressBar->setMinimum(0);
    ui->progressBar->setValue(valueProgressBar);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ++valueProgressBar;
    ui->progressBar->setValue(valueProgressBar);
}


void MainWindow::on_progressBar_valueChanged(int value)
{
    if(value == maxValueProgressBar)
    {
        valueProgressBar = 0;
        ui->progressBar->setValue(valueProgressBar);
    }
}

