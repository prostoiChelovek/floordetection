#ifndef __PATH_FOLLOWER_H__
#define __PATH_FOLLOWER_H__

#include <vector>

#include <boost/shared_ptr.hpp>

#include "detector.h"
#include "robot.h"

namespace floordetection {

    class PathFollower {
    public:
        explicit PathFollower(Detector &d);

        void follow(const cv::Mat &input);

        void compute_control(std::vector<cv::Point> &frontier, const cv::Mat &input,
                             int horizon_level, const cv::Rect &roi);

        Detector &detector;
        Robot robot;

        float accum_xspeed, accum_aspeed;
        double xspeed_scale = 1.0, aspeed_scale = 1.0;
    };

}

#endif
