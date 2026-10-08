    #include <iostream>

    #include "Car.h"
    #include "Landmark.h"
    #include "Helper.h"
    #include "Odometer.h"
    #include "Sensor.h"

    int main() {
        Car car{};
        std::vector<Landmark> landmarks;
        for (int i = 0; i < 5; i++) {
            double x = Helper::GenRandDouble();
            double y = Helper::GenRandDouble();
            Landmark landmark{i, x, y};
            landmarks.push_back(landmark);
        }
        Odometer odometer{};
        Sensor sensor{};
        car.move(1, .1, .1);
        OdometerMeasurement odometer_measurement = odometer.measure(1, .1);
        std::cout << "Measured velocity: "
              << odometer_measurement.velocity
              << '\n';

        std::cout << "Measured angular velocity: "
                  << odometer_measurement.angular_velocity
                  << '\n';
        for (const Landmark& landmark : landmarks) {

            SensorMeasurement sensor_measurement = sensor.measure(car, landmark);

            std::cout
                << "Landmark " << sensor_measurement.landmark_id
                << " | Range: " << sensor_measurement.range
                << " | Bearing: " << sensor_measurement.bearing
                << '\n';
        }
    }
