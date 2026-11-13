CCFLAGS = -Wall -Wextra -g
C_COMPILER = gcc

.PHONY: clean

tank_simulator: src/main.c src/tank.c include/tank.h
	$(C_COMPILER) $(CCFLAGS) -Iinclude src/main.c src/tank.c -o tank_simulator

clean:
	rm -f tank_simulator