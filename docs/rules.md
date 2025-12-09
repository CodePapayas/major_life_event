# Simulation Rules

> The simulation consists of these main components:
>
>> 1. Agents
>> 2. Environment
>> 3. Genomes
>> 4. Neural Network Decision Centers (Brains)
>

## Agents

### Traits

>
> Agents have the following traits:
>
> - Metabolism: Scales energy costs against a base consumption rate per action.
> - Vision: Affects perception range and predator/prey actions
> - Intelligence: Combines with awareness to influence perception quality
> - Awareness: Combines with intelligence to influence perception timing (ticks between decisions)
> - Speed: Affects hunting and/or escape success
> - Attack: Affects amount of damage dealt
> - Defense: Affects amount of damage received
> - Aggression: Threshold for engagement; Scaled from 0.0-10.0, applies to both predators and prey
> - Predator: Immutable flag; Prey drive influenced by aggression (low agro = scav; high agro = predator)
> - Mutation Rate: Probability and magnitude of trait mutation
> - Natural Death Age: A pre-determined age assigned at 'birth'; Agent dies if they are lucky enough to reach it
> - Reproduction Cost: Energy it takes to procreate; Energy is given to offspring
>

### Economy


