#include "robot.h"

namespace floordetection {

    Robot::~Robot() {
        stop();
    }

    void Robot::stop() {
        set_speeds(0, 0);
    }

    void Robot::set_speeds(float xspeed, float aspeed) {
        std::cout << "Robot: xspeed: " << xspeed << ", aspeed: " << aspeed << std::endl;
    }

}