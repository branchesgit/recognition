#ifndef BOUNDARY_H
#define BOUNDARY_H
#include <opencv4/opencv2/opencv.hpp>

using namespace std;
using namespace cv;

class Boundary
{
public:
    Boundary();
    vector<vector<Point>> getCours(Mat image);
};

#endif // BOUNDARY_H
