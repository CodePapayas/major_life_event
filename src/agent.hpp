#pragma once

struct AgentTraits {
    float aggression;
    float attack;
    float awareness;
    float defense;
    float intelligence;
    float metabolism;
    float mutation_rate;
    int natural_expiration;
    bool predator;
    float reproduction_cost;
    float speed;
    float vision;
};

class Agent {
    public:

        Agent();

        AgentTraits traits;
};