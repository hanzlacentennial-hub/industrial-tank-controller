#include <stdio.h>

typedef struct {
            double capacity; // Maximum amount the tank can hold
            double volume; // Current amount of water
        } Tank;


int main(void) {

        double percentage;
        double inflow;
        double outflow;
        double elapsedTime;
        double newVolume;

        Tank tank;

        tank.capacity = 2000.0;
        tank.volume = 750.0;

        percentage = (tank.volume / tank.capacity) * 100;

        printf("Tank Capacity: %.2fL\n", tank.capacity);
        printf("Tank Volume: %.2fL\n", tank.volume);
        printf("The tank is currently at %.2f%%\n", percentage);

        inflow = 30.0;
        outflow = 10.0;
        elapsedTime = 15.0;

        newVolume = tank.volume + (inflow - outflow) * elapsedTime;
        tank.volume = newVolume;
        percentage = tank.volume / tank.capacity * 100;

        printf("After 15 seconds:\n");
        printf("Tank Volume: %.2fL\n", newVolume);
        printf("The tank is currently at %.2f%%\n", percentage);

        return 0;
}