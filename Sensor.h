//
// Created by Tim Healey on 10/8/26.
//
#ifndef SLAM_SENSOR_H
#define SLAM_SENSOR_H

#include "Landmark.h"
class Car;

struct SensorMeasurement {
    int landmark_id;
    double range;
    double bearing;
};

class Sensor {
public:
    Sensor() = default;
    ~Sensor() = default;

     SensorMeasurement measure(
        const Car& car,
        const Landmark& landmark
    );

private:
    double range_noise = 0.1;
    double bearing_noise = 0.02;
};

#endif // SLAM_SENSOR_H