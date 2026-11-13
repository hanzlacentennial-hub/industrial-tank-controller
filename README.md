
# Industrial Water Tank Control System

A simulated industrial water tank control system built using C, with planned integration of OpenPLC and Modbus TCP.

## Overview

This project explores industrial process control by simulating a water tank and its changing water levels, with plans to introduce a pump, outlet valve, and water-level sensor. The goal is to develop a system that can automatically maintain water levels, detect faults, and communicate with a simulated PLC.

The project is being developed incrementally, starting with a C-based process simulator before introducing PLC programming and industrial networking.

No physical hardware is required.

## Current Features

**Stage 1: C Water Tank Simulator — Complete**

- Model tank capacity and current water volume using C structures.
- Calculate water level as a percentage of total capacity.
- Simulate volume changes based on inflow, outflow, and elapsed time.
- Prevent overflow and underflow by clamping water volume to valid limits.
- Display warnings when the calculated volume exceeds tank limits.
- Organize code into separate source and header files.
- Build the simulator using GNU Make.
- Run automated tests for normal operation, overflow, and underflow.

## Planned Features

- Automatic pump and valve control
- Finite-state machine for controller operation
- Simulated water-level sensors
- Safety alarms and fault handling
- PLC integration using OpenPLC
- Modbus TCP communication
- Process monitoring and diagnostics
- Expanded automated testing

## Technologies

- C
- GCC, GNU Make, and GDB
- Linux (Ubuntu through WSL2)
- Git
- OpenPLC (planned)
- Modbus TCP (planned)
- Wireshark (planned)

## Project Structure

```text
industrial-tank-controller/
├── include/
│   └── tank.h
├── src/
│   ├── main.c
│   └── tank.c
├── tests/
│   └── test_tank.c
├── Makefile
├── .gitignore
└── README.md
```

## Build and Run

**Requirements:** GCC and GNU Make.

Compile the simulator:

```bash
make
```

Run the simulator:

```bash
./tank_simulator
```

Remove generated executables:

```bash
make clean
```

## Testing

The project uses C's `assert()` function to verify tank calculations.

Run the automated tests:

```bash
make test
```

Current tests cover:

- **Normal operation:** Verify volume changes based on flow rates.
- **Overflow:** Verify volume is limited to tank capacity.
- **Underflow:** Verify volume cannot become negative.

A successful test run ends with:

```text
All tank tests passed!
```

## Project Status

**Stage 1: C Water Tank Simulator — Complete**

The simulator models water volume changes, calculates water levels, and enforces tank capacity limits. Automated tests verify normal operation and boundary conditions.

**Next: Stage 2 — Embedded-Style Controller**

The next stage will introduce operating states, simulated sensors, automatic filling logic, and safety mechanisms.

## Development Roadmap

1. [x] C water tank simulation
2. [ ] Embedded-style controller and fault handling
3. [ ] PLC programming and integration
4. [ ] Industrial networking and troubleshooting
5. [ ] Monitoring, diagnostics, and testing
6. [ ] Final documentation and demonstration

## Disclaimer

This is an educational simulation project and is not intended for controlling physical industrial equipment.
