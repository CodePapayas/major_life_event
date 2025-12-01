#include <iostream>
#include <vector>
#include <stdexcept>
#include "environment.hpp"
 
std::vector<std::vector<int>> Biome::generate_grid(int rows, int cols) {
    if (rows <= 0) {
        throw std::runtime_error("Rows cannot be 0 or a negative integer.");
    }

    if (cols <= 0) {
        throw std::runtime_error("Columns cannot be 0 or a negative integer.");
    }

    return std::vector<std::vector<int>>(rows, std::vector<int>(cols));
}
