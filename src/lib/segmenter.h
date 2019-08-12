#ifndef __SEGMENTER_H__
#define __SEGMENTER_H__

#include <opencv2/opencv.hpp>

#include "disjoint_set.h"

namespace floordetection {

  class Segmenter {
    public:
      Segmenter() = default;

      void segment(const cv::Mat& intput, cv::Mat& output);

      double c_threshold = 0.5;
      int min_segment = 500;

  };

}


#endif
