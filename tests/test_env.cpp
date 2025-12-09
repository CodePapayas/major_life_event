#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "../src/environment.hpp"
#include "../src/agent.hpp"

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

TEST_CASE("Agent trait cases") {
    Agent agent;
    CHECK_MESSAGE(agent.traits.aggression == 0.0F, "aggression should default to 0.0f");
    CHECK_MESSAGE(agent.traits.attack == 0.0F, "attack should default to 0.0f");
    CHECK_MESSAGE(agent.traits.awareness == 0.0F, "awareness should default to 0.0f");
    CHECK_MESSAGE(agent.traits.defense == 0.0F, "defense should default to 0.0f");
    CHECK_MESSAGE(agent.traits.intelligence == 0.0f, "intelligence should default to 0.0f");
    CHECK_MESSAGE(agent.traits.metabolism == 0.0f, "metabolism should default to 0.0f");
    CHECK_MESSAGE(agent.traits.mutation_rate == 0.0f, "mutation_rate should default to 0.0f");
    CHECK_MESSAGE(agent.traits.natural_expiration == 0, "natural_expiration should default to 0");
    CHECK_MESSAGE(agent.traits.predator == false, "predator should default to false");
    CHECK_MESSAGE(agent.traits.reproduction_cost == 0.0f, "reproduction_cost should default to 0.0f");
    CHECK_MESSAGE(agent.traits.speed == 0.0f, "speed should default to 0.0f");
    CHECK_MESSAGE(agent.traits.vision == 0.0f, "vision should default to 0.0f");
};
