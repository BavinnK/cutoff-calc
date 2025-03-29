# Cut-Off Frequency Calculator for RL and RC Circuits

This program calculates the cut-off frequency for one-pole RL and RC circuits. Users can choose between an RC or RL circuit and provide the necessary component values to calculate the cut-off frequency.

## Features

- Calculates the cut-off frequency for:
  - **RC Circuit**: Requires the values of resistance (R) and capacitance (C).
  - **RL Circuit**: Requires the values of resistance (R) and inductance (L).
  
- Supports both **High-Pass** and **Low-Pass** filters for RC and RL circuits.

## Prerequisites

To compile and run the program, you need:
- A C compiler (e.g., GCC)
- Basic understanding of electrical circuits, specifically RC and RL filters

## How to Use

1. **Compile the Program:**

   If you are using a terminal with GCC, you can compile the program with:

   ```bash
   gcc -o cutoff_frequency_calculator cutoff_frequency_calculator.c
