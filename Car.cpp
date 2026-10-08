//
// Created by Tim Healey on 10/7/26.
//

#include "Car.h"

#include <cmath>

void Car::move(double velocity, double angular_velocity, double dt) {
    x += velocity * cos(theta_heading) * dt;
    y += velocity * sin(theta_heading) * dt;

    theta_heading += angular_velocity * dt;
}
