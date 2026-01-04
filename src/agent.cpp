#include "agent.hpp"

Agent::Agent() {
    traits.aggression = 0.0f;
    traits.attack = 0.0f;
    traits.awareness = 0.0f;
    traits.defense = 0.0f;
    traits.intelligence = 0.0f;
    traits.metabolism = 0.0f;
    traits.mutation_rate = 0.0f;
    traits.natural_expiration = 0;
    traits.predator = false;
    traits.reproduction_cost = 0.0f;
    traits.speed = 0.0f;
    traits.vision = 0.0f;
};

// Getter methods
float Agent::getAttack() const {
    return traits.attack;
};

float Agent::getAggression() const {
    return traits.aggression;
};

float Agent::getAwareness() const {
    return traits.awareness;
};

float Agent::getDefense() const {
    return traits.defense;
};

float Agent::getIntelligence() const {
    return traits.intelligence;
};

float Agent::getMetabolism() const {
    return traits.metabolism;
};

float Agent::getMutationRate() const {
    return traits.mutation_rate;
};

float Agent::getReproductionCost() const {
    return traits.reproduction_cost;
};

float Agent::getSpeed() const {
    return traits.speed;
};

float Agent::getVision() const {
    return traits.vision;
};

int Agent::getNaturalExpiration() const {
    return traits.natural_expiration;
};

bool Agent::getPredatorStatus() const {
    return traits.predator;
};

// Setter methods
void Agent::setAttack(float value) {
    traits.attack = value;
};

void Agent::setAggression(float value) {
    traits.aggression = value;
};

void Agent::setAwareness(float value) {
    traits.awareness = value;
};

void Agent::setDefense(float value)
{
    traits.defense = value;
};
void Agent::setIntelligence(float value) {
    traits.intelligence = value;
};
void Agent::setMetabolism(float value) {
    traits.metabolism = value;
};
void Agent::setMutationRate(float value) {
    traits.mutation_rate = value;
};
void Agent::setReproductionCost(float value) {
    traits.reproduction_cost = value;
};
void Agent::setSpeed(float value) {
    traits.speed = value;
};
void Agent::setVision(float value) {
    traits.vision = value;
};
void Agent::setExpirationDate(int value) {
    traits.natural_expiration = value;
};
void Agent::setPredatorStatusTrue() {
    traits.predator = true;
};

void Agent::setPredatorStatusFalse() {
    traits.predator = false;
};