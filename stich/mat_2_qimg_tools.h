#ifndef MAT_2_QIMG_TOOLS_H
#define MAT_2_QIMG_TOOLS_H
#include<QImage>
#include<opencv2/opencv.hpp>
using namespace cv;

class mat_2_qimg_tools
{
public:
    mat_2_qimg_tools();
    QImage mat2qimg(Mat img);
    Mat qimg2mat(QImage qimg);
};

#endif // MAT_2_QIMG_TOOLS_H
