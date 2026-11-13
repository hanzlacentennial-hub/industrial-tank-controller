#include <assert.h>
#include <stdio.h>
#include "tank.h"

int main(void) {

    Tank tank;

    tank.capacity = 2000.0;
    
    // Tests for normal volume
    tank.volume = 100.0;

    updateTank(&tank, 10.0, 5.0, 10.0);

    assert(tank.volume == 150.0);

    // Tests for overflow
    tank.volume = 1900.0;

    updateTank(&tank, 20.0, 5.0, 10.0);

    assert(tank.volume == 2000.0);

    // Tests for underflow
    tank.volume = 100.0;

    updateTank(&tank, 5.0, 25.0, 10.0);

    assert(tank.volume == 0.0);

    printf("All tank tests passed!\n");
    
    return 0;
}