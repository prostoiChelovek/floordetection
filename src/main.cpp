//
// Created by prostoichelovek on 12.08.19.
//

#include <iostream>

#include <opencv2/opencv.hpp>

#include "lib/detector.h"
#include "lib/configurator.h"
#include "lib/path_follower.h"

using namespace std;
using namespace cv;
using namespace floordetection;

int main() {
    Detector detector(true);
    Configurator configurator(detector);
    PathFollower follower(detector);

    VideoCapture cap(0);

    Mat frame;

    while (cap.isOpened()) {
        cap >> frame;

        configurator.show();
        follower.follow(frame);

        char key = waitKey(1);
        if (key == 27)
            break;
    }

    return EXIT_SUCCESS;
}