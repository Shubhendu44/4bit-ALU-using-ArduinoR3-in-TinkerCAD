int ledPins[4] = {4, 5, 6, 7};
int carryPin = 8;

void setup() {
  Serial.begin(9600);

  
  for (int i = 0; i < 4; i++)
    pinMode(ledPins[i], OUTPUT);

  pinMode(carryPin, OUTPUT);

  Serial.println("4-bit ALU Ready!");
  Serial.println("Enter: A B opcode");
  Serial.println("0=ADD, 1=SUB, 2=AND, 3=OR, 4=XOR");
}

void loop() {
  int A, B, opcode;

  if (Serial.available()) {
    
    A = Serial.parseInt();
    B = Serial.parseInt();
    opcode = Serial.parseInt();

    
    A &= 0xF;
    B &= 0xF;

    int result = 0;
    int carry = 0;

    switch (opcode) {

      case 0:  // ADD
        result = A + B;
        carry = (result > 15);
        result &= 0xF;
        break;

      case 1:  // SUB
        result = A - B;
        if (result < 0) {
          carry = 1;  // Borrow
          result = (result + 16) & 0xF;
        }
        break;

      case 2:  // AND
        result = A & B;
        break;

      case 3:  // OR
        result = A | B;
        break;

      case 4:  // XOR
        result = A ^ B;
        break;

      default:
        Serial.println("Invalid opcode!");
        return;
    }

    // Output the 4-bit result to LEDs
    for (int i = 0; i < 4; i++)
      digitalWrite(ledPins[i], (result >> i) & 1);

    // Carry / Borrow LED
    digitalWrite(carryPin, carry);

    Serial.println("---------------------------");
    Serial.print("A = "); Serial.println(A);
    Serial.print("B = "); Serial.println(B);
    Serial.print("Opcode = "); Serial.println(opcode);
    Serial.print("Result = "); Serial.println(result);
    Serial.print("Carry = "); Serial.println(carry);
    Serial.println("---------------------------");
  }
}
