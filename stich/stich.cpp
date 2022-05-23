#include "stich.h"
#include "ui_stich.h"
#include "QString"
#include "mat_2_qimg_tools.h"
#include "QPixmap"
stich::stich(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::stich)
{
    ui->setupUi(this);
}

stich::~stich()
{
    delete ui;
}

cv::String path="../stitch_img/*.jpg";
vector<Mat> images;
Stitcher::Mode mode = Stitcher::PANORAMA;
string result_name="result.jpg";

///
/// \brief ReadImages 读取文件夹内的图片
/// \param path       文件夹路径
/// \return           所有图片 类型为vector<Mat>
///
vector<Mat> stich::ReadImages(cv::String path)
{
    vector<cv::String> fn;
    glob(path,fn,false);
    vector<Mat> images;
    size_t count=fn.size();
    Mat img;
    for(size_t i=0;i<count;i++)
    {
        images.emplace_back(cv::imread(fn[i]));
    }
    return images;
}

void stich::on_btn_show_origin_img_clicked()
{
    Mat img;
    images=ReadImages(path);
    for(size_t i = 0;i<images.size();i++)
    {
        cv::resize(images[i],img,cv::Size(500,500));
        imshow("img"+QString::number(i).toStdString(),img);
        waitKey(0);
    }
}


void stich::on_btn_show_stitch_img_clicked()
{
    Mat pano;
    QTime startTime=QTime::currentTime();

    images=ReadImages(path);
    Ptr<Stitcher> stitcher = Stitcher::create(mode);
    Stitcher::Status status = stitcher->stitch(images,pano);

    if(status != Stitcher::OK)
    {
        qDebug()<<"can't stitch images!";
    }

    //imwrite(result_name,pano);
    //imshow("stitcher",pano);

    QTime endTime=QTime::currentTime();
    int elapsed = startTime.msecsTo(endTime);
    qDebug()<<"拼接耗时:"+QString::number(elapsed)+"毫秒";


    //qDebug()<<"拼接图片的尺寸："<<"高："<<pano.rows<<"宽："<<pano.cols;

    mat_2_qimg_tools tool;
    QImage qim=tool.mat2qimg(pano);
    ui->label->setPixmap(QPixmap::fromImage(qim));
}

