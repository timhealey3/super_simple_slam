//
// Created by Tim Healey on 10/7/26.
//

#ifndef SLAM_CAR_H
#define SLAM_CAR_H

class Car {
public:
    Car() = default;
    ~Car() = default;
    void move(double velocity, double angular_velocity, double dt);
    double getX() const { return x; }
    double getY() const { return y; }
    double getTheta() const { return theta_heading; }

private:
    double x;
    double y;
    double theta_heading = 0.0;
};


#endif //SLAM_CAR_H