#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/opencv.hpp>
#include "utils/file.h"
#include "utils/boundary.h"

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
    Boundary boundary;
    boundary.getCours(mat);
    return 0;
}
