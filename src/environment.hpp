#pragma once
#include <vector>

struct BiomeTraits {
    float temp;
    float fertility;
};

class Biome {
public:
    BiomeTraits traits;

    std::vector<std::vector<int>> generate_grid(int rows, int cols);
};
