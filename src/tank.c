#include <stdio.h>
#include "tank.h"

double calculatePercentage(const Tank *tank) {

    return (tank->volume / tank->capacity) * 100;
}

void updateTank(Tank *tank, double inflow, double outflow, double elapsedTime) {

    double newVolume;

    newVolume = tank->volume + (inflow - outflow) * elapsedTime;
    if (newVolume > tank->capacity) {
        printf("WARNING: Tank capacity exceeded!\n");
        newVolume = tank->capacity;
    } else if (newVolume < 0.0) {
        printf("WARNING: Tank cannot have negative volume!\n");
        newVolume = 0.0;
    }

    tank->volume = newVolume;
}