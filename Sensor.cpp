//
// Created by Tim Healey on 10/8/26.
//

#include "Sensor.h"

#include <cmath>
#include "Car.h"
#include <random>

SensorMeasurement Sensor::measure(
    const Car& car,
    const Landmark& landmark
) {
    double dx = landmark.getX() - car.getX();
    double dy = landmark.getY() - car.getY();

    double range = std::sqrt(dx * dx + dy * dy);

    double bearing =
        std::atan2(dy, dx) - car.getTheta();

    static std::random_device rd;
    static std::mt19937 generator(rd());

    std::normal_distribution<double> range_distribution(
        0.0,
        range_noise
    );

    std::normal_distribution<double> bearing_distribution(
        0.0,
        bearing_noise
    );

    range += range_distribution(generator);
    bearing += bearing_distribution(generator);

    return {
        landmark.getId(),
        range,
        bearing
    };
}