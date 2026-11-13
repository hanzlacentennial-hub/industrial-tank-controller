#ifndef TANK_H
#define TANK_H

typedef struct {
        double capacity; // Maximum amount the tank can hold
        double volume; // Current amount of water
    } Tank;

double calculatePercentage(const Tank *tank);
void updateTank(Tank *tank, double inflow, double outflow, double elapsedTime);

#endif
