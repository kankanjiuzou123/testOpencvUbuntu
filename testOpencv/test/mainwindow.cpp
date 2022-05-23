#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    Mat img=imread("/home/ros/Project/opencv/testOpencv/pic/lena.jpeg");


    QImage qimg=mat2qim(img);
    ui->label->setScaledContents(true);
    ui->label->setPixmap(QPixmap::fromImage(qimg));
    imshow("test",img);

}

QImage MainWindow::mat2qim(Mat mat)
{
    cvtColor(mat, mat, COLOR_BGR2RGB);
    QImage qim((const unsigned char*)mat.data, mat.cols, mat.rows, mat.step,
        QImage::Format_RGB888);
    return qim;
}
Mat MainWindow::qim2mat(QImage & qim)
{
    Mat mat = Mat(qim.height(), qim.width(),
        CV_8UC3,(void*)qim.constBits(),qim.bytesPerLine());
    return mat;
}
