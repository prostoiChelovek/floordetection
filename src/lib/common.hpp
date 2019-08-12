#ifndef __COMMON_HPP__
#define __COMMON_HPP__

#include <opencv2/opencv.hpp>

namespace floordetection {

    static cv::Vec3f hsv_diff(const cv::Vec3f &v1, const cv::Vec3f &v2) {
        cv::Vec3f res = (v1 - v2);
        if (res(0) > 180.0f) res(0) -= 360.0f;
        else if (res(0) < -180.0f) res(0) += 360.0f;
        return res;
    }

    static void bgr2hsv(const cv::Vec3f &bgr, cv::Vec3f &hsv) {
        cv::Vec3f tmp = bgr;
        cv::Mat_<cv::Vec3f> rgb_mat(1, 1, &tmp);
        cv::Mat_<cv::Vec3f> hsv_mat(1, 1, &hsv);
        cv::cvtColor(rgb_mat, hsv_mat, cv::COLOR_BGR2HSV);
    }

}


#endif //__COMMON_HPP__
