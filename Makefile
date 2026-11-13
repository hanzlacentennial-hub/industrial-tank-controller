CCFLAGS = -Wall -Wextra -g
C_COMPILER = gcc

.PHONY: clean test

tank_simulator: src/main.c src/tank.c include/tank.h
	$(C_COMPILER) $(CCFLAGS) -Iinclude src/main.c src/tank.c -o tank_simulator

test_tank:  tests/test_tank.c src/tank.c include/tank.h
	$(C_COMPILER) $(CCFLAGS) -Iinclude tests/test_tank.c src/tank.c -o test_tank

test: test_tank
	./test_tank
	
clean:
	rm -f tank_simulator test_tank