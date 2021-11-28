#include "boundary.h"


using namespace cv;

Boundary::Boundary()
{

}

vector<vector<Point>> Boundary::getCours(Mat image)
{
    Mat grayImage, dstImage;
    cvtColor(image, grayImage, COLOR_BGR2GRAY);

    vector<vector<Point>> contours;
    vector<Vec4i> hierarchy;

    findContours(grayImage, contours, hierarchy, CV_RETR_CCOMP, CV_CHAIN_APPROX_NONE);

    dstImage = Mat::zeros(grayImage.size(), CV_8UC3);
    for(int i = 0; i < hierarchy.size(); i++)
    {
       Scalar color = Scalar(rand() % 255,  rand() % 255, rand() % 255);
       drawContours(dstImage, contours, i, color, CV_FILLED, 8, hierarchy);
    }
    imshow("boundary", dstImage);
    waitKey(0);
    cout << "size " << hierarchy.size();
    return contours;
}
