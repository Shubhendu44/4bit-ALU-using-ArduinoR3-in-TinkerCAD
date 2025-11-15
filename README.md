# 4-bit ALU using Arduino

This project implements a simple 4-bit ALU (Arithmetic Logic Unit) on an Arduino.  
It supports the following operations:

- ADD (opcode 0)
- SUB (opcode 1)
- AND (opcode 2)
- OR  (opcode 3)
- XOR (opcode 4)

The result is shown using 4 LEDs, and the carry/borrow is shown using a 5th LED.

## Code
The main Arduino code is in `4bitALUcode.ino`.

## Input Format (Serial Monitor)
Enter three integers separated by spaces:

