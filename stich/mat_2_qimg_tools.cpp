#include "mat_2_qimg_tools.h"

mat_2_qimg_tools::mat_2_qimg_tools()
{

}

QImage mat_2_qimg_tools::mat2qimg(Mat img)
{
    cvtColor(img, img, COLOR_BGR2RGB);
    QImage qim((const unsigned char*)img.data, img.cols, img.rows, img.step,
        QImage::Format_RGB888);
    return qim;
}

Mat mat_2_qimg_tools::qimg2mat(QImage qimg)
{
    Mat mat = Mat(qimg.height(), qimg.width(),
        CV_8UC3,(void*)qimg.constBits(),qimg.bytesPerLine());
    return mat;
}
