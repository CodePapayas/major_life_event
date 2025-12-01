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
    CHECK_THROWS_WITH(biome.generate_grid(-2, 2), "Rows cannot be 0 or a negative integer.");
    CHECK_THROWS_WITH(biome.generate_grid(0, 1), "Rows cannot be 0 or a negative integer.");
    CHECK_THROWS_WITH(biome.generate_grid(0, 0), "Rows cannot be 0 or a negative integer.");
    CHECK_THROWS_WITH(biome.generate_grid(1, 0), "Columns cannot be 0 or a negative integer.");
    CHECK_THROWS_WITH(biome.generate_grid(1, -4), "Columns cannot be 0 or a negative integer.");
}
