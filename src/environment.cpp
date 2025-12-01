#include <iostream>
#include <vector>
#include "environment.hpp"
 
std::vector<std::vector<int>> Biome::generate_grid(int rows, int cols) {
    return std::vector<std::vector<int>>(rows, std::vector<int>(cols));
}
