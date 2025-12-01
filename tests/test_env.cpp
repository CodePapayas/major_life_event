#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "../src/environment.hpp"

TEST_CASE("Grid test case") {
    Biome biome;
    auto grid = biome.generate_grid(5, 5);

    CHECK(grid.size() == 5);
    CHECK(grid[0].size() == 5);
}

TEST_CASE("Grid edge cases") {
    Biome biome;
    
    auto grid2 = biome.generate_grid(0, 0);
}
