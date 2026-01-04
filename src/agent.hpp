#pragma once

struct AgentTraits {
    float aggression;
    float attack;
    float awareness;
    float defense;
    float intelligence;
    float metabolism;
    float mutation_rate;
    float reproduction_cost;
    float speed;
    float vision;
    int natural_expiration;
    bool predator;

};

class Agent {
    public:
        Agent();

        // Getter method declarations
        float getAttack() const;
        float getAggression() const;
        float getAwareness() const;
        float getDefense() const;
        float getIntelligence() const;
        float getMetabolism() const;
        float getMutationRate() const;
        float getReproductionCost() const;
        float getSpeed() const;
        float getVision() const;
        int getNaturalExpiration() const;
        bool getPredatorStatus() const ;

        // Setter method declarations
        void setAttack(float value);
        void setAggression(float value);
        void setAwareness(float value);
        void setDefense(float value);
        void setIntelligence(float value);
        void setMetabolism(float value);
        void setMutationRate(float value);
        void setReproductionCost(float value);
        void setSpeed(float value);
        void setVision(float value);
        void setExpirationDate(int value);
        void setPredatorStatusTrue();
        void setPredatorStatusFalse();

    private:
        AgentTraits traits;
};