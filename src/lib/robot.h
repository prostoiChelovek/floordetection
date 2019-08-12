#ifndef __ROBOT_H__
#define __ROBOT_H__

#include <iostream>

namespace floordetection {

    class Robot {
    public:
        Robot() = default;

        ~Robot();

        void set_speeds(float xspeed, float aspeed);

        void stop();

    };

}

#endif
