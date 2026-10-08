//
// Created by Tim Healey on 10/7/26.
//

#ifndef SLAM_LANDMARK_H
#define SLAM_LANDMARK_H


class Landmark {
public:
    Landmark(int id, double x, double y) : id(id), x(x), y(y) {};
    ~Landmark() = default;
    double getX() const { return x; }
    double getY() const { return y; }
    int getId() const { return id; }
private:
    int id;
    double x;
    double y;
};


#endif //SLAM_LANDMARK_H