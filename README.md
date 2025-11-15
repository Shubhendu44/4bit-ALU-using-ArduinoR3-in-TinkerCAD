# 🔢 4-bit ALU Simulation with Arduino (Tinkercad)

This repository contains a working **4-bit Arithmetic Logic Unit (ALU)** implemented on an **Arduino Uno** and simulated in **Tinkercad Circuits**.  
The ALU accepts two 4-bit numbers (**A**, **B**) and an **opcode** (operation selector) via the Serial Monitor and displays the 4-bit result on LEDs plus a carry/borrow LED.

---

## ⚙️ Supported Operations

| Opcode | Operation | Description |
|--------|-----------|-------------|
| **0** | ADD | A + B (carry = 1 if result > 15) |
| **1** | SUB | A - B (wraps to 4 bits; carry = 1 if borrow) |
| **2** | AND | Bitwise AND |
| **3** | OR  | Bitwise OR |
| **4** | XOR | Bitwise XOR |

---

## 🌟 Features

- Real 4-bit ALU (0–15 inputs)  
- 4 LEDs show binary result (Bit3..Bit0)  
- 1 LED shows carry/borrow status  
- Serial Monitor input interface (`A B opcode`)  
- Hardware-accurate behavior for overflow/borrow  
- Tinkercad simulation included

---

## 🔌 Wiring Summary

Each LED is connected as:  
`Arduino Pin → LED Anode → LED Cathode → 220 Ω Resistor → GND`

**Pin mapping:**

| Arduino Pin | Represents |
|-------------|------------|
| **4** | Result Bit 0 (LSB) |
| **5** | Result Bit 1 |
| **6** | Result Bit 2 |
| **7** | Result Bit 3 (MSB) |
| **8** | Carry / Borrow LED |

The LEDs display the binary result:

---
## 🖥️ How to Use

1. Open **Tinkercad → Circuits → Start Simulation**  
2. Open the **Serial Monitor** at **9600 baud**  
3. Enter input in the format:

### Example:
9 12 4
This performs: `9 XOR 12`
Binary calculation: 1001 (9)^ 1100 (12)= 0101 (5)

**Result** = 5  
LED pattern = `0101`  
Carry LED = OFF
<img width="1908" height="902" alt="Screenshot 2025-11-16 004706" src="https://github.com/user-attachments/assets/4f2b3ce7-b98e-4ec0-9b4d-46cd5ce8e7bd" />

---
## 🔗 Tinkercad Simulation

Open and run the interactive circuit here:  
https://www.tinkercad.com/things/dmMxXuepCIo-arduino-4-bit-alu-circuit?sharecode=NlTjiYN0Z6kOR9uQhU74en0XLIGkikynQTOjKM1URLk

---

## 📂 Repository Contents

- `4bitALU.ino` — Arduino sketch (ALU logic)  
- `circuit.png` (optional) — wiring screenshot / circuit diagram  
- `README.md` — this document

---








