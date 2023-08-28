//
// Created by guobao.sun on 2023/8/28.
//

#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>

using namespace cv;

int main() {
    std::string img_path = "001.jpg";
    // 3 channels bgr
    Mat img = imread(img_path, IMREAD_COLOR);

    Mat bgr[3];
    split(img, bgr);

    // blue channel
    Mat b[1]{bgr[0]};

    // 1 channel gray
    Mat dst(img.rows, img.cols, CV_8U);
    merge(b, 1, dst);

    imshow("Display window", dst);
    int k = waitKey(0);

    return 0;
}
