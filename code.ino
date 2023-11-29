#include <SoftwareSerial.h>

// HC-06 Bluetooth modul
SoftwareSerial BTSerial(10, 11); // RX, TX

// L298N motorvezérlő pinjei
const int motorA1 = 3;
const int motorA2 = 4;
const int enableA = 5;

// LED pinjei
const int redLED = 6;
const int blueLED = 7;

void setup() {
  // Pin módok beállítása
  pinMode(motorA1, OUTPUT);
  pinMode(motorA2, OUTPUT);
  pinMode(enableA, OUTPUT);
  pinMode(redLED, OUTPUT);
  pinMode(blueLED, OUTPUT);

  // Bluetooth kommunikáció kezdete
  BTSerial.begin(9600);
}

void loop() {
  if (BTSerial.available()) {
    char command = BTSerial.read();
    if (command == 'S') {
      stopMotor();
    } else {
      int speed = BTSerial.parseInt();
      controlMotor(command, speed);
    }
  }
}

void controlMotor(char command, int speed) {
  analogWrite(enableA, speed);
  if (command == 'F') {
    // Előre
    digitalWrite(motorA1, HIGH);
    digitalWrite(motorA2, LOW);
    digitalWrite(redLED, HIGH);
    digitalWrite(blueLED, LOW);
  } else if (command == 'B') {
    // Hátra
    digitalWrite(motorA1, LOW);
    digitalWrite(motorA2, HIGH);
    digitalWrite(redLED, LOW);
    digitalWrite(blueLED, HIGH);
  }
}

void stopMotor() {
  analogWrite(enableA, 0);
  digitalWrite(motorA1, LOW);
  digitalWrite(motorA2, LOW);
  digitalWrite(redLED, LOW);
  digitalWrite(blueLED, LOW);
}
