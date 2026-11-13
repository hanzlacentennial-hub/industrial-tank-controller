#include <stdio.h>
#include "tank.h"

int main(void) {

    double inflow;
    double outflow;
    double elapsedTime;
    double percentage;

    Tank tank;

    tank.capacity = 2000.0;
    tank.volume = 100.0;

    percentage = calculatePercentage(&tank);

    printf("Tank Capacity: %.2fL\n", tank.capacity);
    printf("Tank Volume: %.2fL\n", tank.volume);
    printf("The tank is currently at %.2f%%\n", percentage);

    inflow = 5.0;
    outflow = 25.0;
    elapsedTime = 10.0;
    
    updateTank(&tank, inflow, outflow, elapsedTime);
    percentage  = calculatePercentage(&tank);

    printf("After %.1f seconds:\n", elapsedTime);
    printf("Tank Volume: %.2fL\n", tank.volume);
    printf("The tank is currently at %.2f%%\n", percentage);

    return 0;
}