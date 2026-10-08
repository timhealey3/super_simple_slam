//
// Created by Tim Healey on 10/7/26.
//

#include "Helper.h"

double Helper::GenRandDouble() {
    // 1. Obtain a random seed from the hardware
    std::random_device rd;
    // 2. Initialize the standard Mersenne Twister engine with the seed
    std::mt19937 gen(rd());
    // 3. Define the range [inclusive, inclusive]
    std::uniform_real_distribution<double> distrib(1.0, 20.0);
    // 4. Generate the random number
    return  distrib(gen);
}
