#include <random>

#include "random.hpp"

int get_random(const int min,const int max){
    std::random_device seed;
    std::mt19937_64 gen{seed()};
    std::uniform_int_distribution<> dist{min, max};
    return dist(gen);
}
