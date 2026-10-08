//
// Created by Tim Healey on 10/8/26.
//

#include "Odometer.h"

#include <random>

OdometerMeasurement Odometer::measure(
    double velocity,
    double angular_velocity
) {
    static std::random_device rd;
    static std::mt19937 generator(rd());

    std::normal_distribution<double> velocity_distribution(
        0.0,
        velocity_noise
    );

    std::normal_distribution<double> angular_velocity_distribution(
        0.0,
        angular_velocity_noise
    );

    return {
        velocity + velocity_distribution(generator),
        angular_velocity + angular_velocity_distribution(generator)
    };
}
