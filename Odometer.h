//
// Created by Tim Healey on 10/8/26.
//

#ifndef SLAM_ODOMETER_H
#define SLAM_ODOMETER_H

#include "Car.h"
#include "Landmark.h"

struct OdometerMeasurement {
    double velocity;
    double angular_velocity;
};

class Odometer {
public:
    Odometer() = default;
    ~Odometer() = default;
    OdometerMeasurement measure(double velocity, double angular_velocity);
private:
    double velocity_noise = 0.1;
    double angular_velocity_noise = 0.02;
};


#endif //SLAM_ODOMETER_H