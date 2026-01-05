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

TEST_CASE("Agent getter test cases") {
    Agent agent;
    // Getter tests
    CHECK(agent.getAttack() == 0.0f);
    CHECK(agent.getAggression() == 0.0f);
    CHECK(agent.getAwareness() == 0.0f);
    CHECK(agent.getDefense() == 0.0f);
    CHECK(agent.getIntelligence() == 0.0f);
    CHECK(agent.getMetabolism() == 0.0f);
    CHECK(agent.getMutationRate() == 0.0f);
    CHECK(agent.getReproductionCost() == 0.0f);
    CHECK(agent.getSpeed() == 0.0f);
    CHECK(agent.getVision() == 0.0f);
    CHECK(agent.getNaturalExpiration() == 0);
    CHECK(agent.getPredatorStatus() == false);
};
    
TEST_CASE("Agent setter test cases") {
    Agent agent;
    // Setter tests
    agent.setAttack(5.2f);
    CHECK(agent.getAttack() == 5.2f);

    agent.setAggression(4.2f);
    CHECK(agent.getAggression() == 4.2f);

    agent.setAwareness(3.2f);
    CHECK(agent.getAwareness() == 3.2f);

    agent.setDefense(5.2f);
    CHECK(agent.getDefense() == 5.2f);

    agent.setIntelligence(4.2f);
    CHECK(agent.getIntelligence() == 4.2f);

    agent.setMetabolism(3.2f);
    CHECK(agent.getMetabolism() == 3.2f);

    agent.setMutationRate(5.2f);
    CHECK(agent.getMutationRate() == 5.2f);

    agent.setReproductionCost(4.2f);
    CHECK(agent.getReproductionCost() == 4.2f);

    agent.setSpeed(3.2f);
    CHECK(agent.getSpeed() == 3.2f);

    agent.setVision(5.2f);
    CHECK(agent.getVision() == 5.2f);

    agent.setExpirationDate(4);
    CHECK(agent.getNaturalExpiration() == 4);

    agent.setPredatorStatusTrue();
    CHECK(agent.getPredatorStatus() == true);

    agent.setPredatorStatusTrue();
    agent.setPredatorStatusFalse();
    CHECK(agent.getPredatorStatus() == false);

    // Setter boundary tests
    CHECK_THROWS_WITH(agent.setAttack(-1.1f), "Attack cannot be less than 0.0f");
    CHECK_THROWS_WITH(agent.setAggression(-1.1f), "Aggression cannot be less than 0.0f");
    CHECK_THROWS_WITH(agent.setAwareness(-1.1f), "Awareness cannot be less than 0.0f");
    CHECK_THROWS_WITH(agent.setDefense(-1.1f), "Defense cannot be less than 0.0f");
    CHECK_THROWS_WITH(agent.setIntelligence(-1.1f), "Intelligence cannot be less than 0.0f");
    CHECK_THROWS_WITH(agent.setMetabolism(-1.1f), "Metabolism cannot be less than 0.0f");
    CHECK_THROWS_WITH(agent.setMutationRate(-1.1f), "Mutation rate cannot be less than 0.0f");
    CHECK_THROWS_WITH(agent.setReproductionCost(-1.1f), "Reproduction cost cannot be less than 0.0f");
    CHECK_THROWS_WITH(agent.setSpeed(-1.1f), "Speed cannot be less than 0.0f");
    CHECK_THROWS_WITH(agent.setVision(-1.1f), "Vision cannot be less than 0.0f");
    CHECK_THROWS_WITH(agent.setExpirationDate(-1.1f), "Natural expiration cannot be less than 0");
};
