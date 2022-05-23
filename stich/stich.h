#ifndef STICH_H
#define STICH_H

#include <QMainWindow>
#include <opencv2/opencv.hpp>
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>
#include "opencv2/stitching.hpp"
#include "vector"
#include<QTime>
#include<qdebug.h>
using namespace cv;
using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class stich; }
QT_END_NAMESPACE

class stich : public QMainWindow
{
    Q_OBJECT

public:
    stich(QWidget *parent = nullptr);
    ~stich();

    vector<Mat> ReadImages(cv::String path);

private slots:
    void on_btn_show_origin_img_clicked();
    void on_btn_show_stitch_img_clicked();

private:
    Ui::stich *ui;
};
#endif // STICH_H
