#ifndef __HORIZON_FINDER_H__
#define __HORIZON_FINDER_H__

#include <vector>

#include <opencv2/opencv.hpp>

namespace floordetection {

  class HorizonFinder {
    public:
      HorizonFinder() = default;

      int find(const cv::Mat& input);

    private:
      int subimages = 20;
      int last_horizon = -1;
  
  };

}

#endif
