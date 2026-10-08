//
// Created by Tim Healey on 10/7/26.
//

#ifndef SLAM_LANDMARK_H
#define SLAM_LANDMARK_H


class Landmark {
public:
    Landmark(double x, double y);
    ~Landmark();
private:
    double x;
    double y;
};


#endif //SLAM_LANDMARK_H