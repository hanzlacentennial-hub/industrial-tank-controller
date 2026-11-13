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
        tank.volume = 100.0;

        percentage = (tank.volume / tank.capacity) * 100;

        printf("Tank Capacity: %.2fL\n", tank.capacity);
        printf("Tank Volume: %.2fL\n", tank.volume);
        printf("The tank is currently at %.2f%%\n", percentage);

        inflow = 5.0;
        outflow = 25.0;
        elapsedTime = 10.0;

        newVolume = tank.volume + (inflow - outflow) * elapsedTime;
        if (newVolume > tank.capacity) {
            printf("WARNING: Tank capacity exceeded!\n");
            newVolume = tank.capacity;
        } else if (newVolume < 0.0) {
            printf("WARNING: Tank cannot have negative volume!\n");
            newVolume = 0.0;
        }

        tank.volume = newVolume;
        percentage = tank.volume / tank.capacity * 100;

        printf("After %.1f seconds:\n", elapsedTime);
        printf("Tank Volume: %.2fL\n", tank.volume);
        printf("The tank is currently at %.2f%%\n", percentage);

        return 0;
}