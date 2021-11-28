#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/opencv.hpp>
#include "utils/file.h"

using namespace std;
using namespace cv;

int main()
{
    string rootDir = "/home/branches/branches/answercards/";
    string templatefile = rootDir + "tp.json";
    File file;
    string content = file.readFile(templatefile);
    Json::Value root = file.parse(content);
    string tempfilePath = root["setting"]["featureRecognition"]["templateFile"].asString();
    Mat mat = imread(tempfilePath, cv::IMREAD_COLOR);
    imshow("lively", mat);
    waitKey(0);
    cout << "Hello World!" << endl;
    return 0;
}
