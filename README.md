# Arduino-multi-sensor-monitoring-system
Arduino Uno(Atmega328P) based multi sensor monitoring system using temperature sensor and LDR, with threshold based LED and buzzer alerts. Designed and validated using Autodesk Tinkercad simulation.
// Pin definitions
const int tempPin = A0;   // TMP36 / LM35
const int ldrPin  = A1;   // LDR
const int ledPin  = 8;    // LED
const int buzzerPin = 9;  // Buzzer

void setup() {
  // Set pin modes
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);

  // Start Serial Communication
  Serial.begin(9600);
  Serial.println("Multi-Sensor Monitoring System Started");
}

void loop() {
  // Read analog values
  int tempValue = analogRead(tempPin);
  int ldrValue  = analogRead(ldrPin);

  // Convert temperature sensor reading to voltage
  float voltage = tempValue * (5.0 / 1023.0);

  // Convert voltage to temperature (TMP36 / LM35)
  float temperatureC = voltage * 100;  // LM35: 10mV per °C

  // Print values to Serial Monitor
  Serial.print("Temperature: ");
  Serial.print(temperatureC);
  Serial.print(" °C | Light Level: ");
  Serial.println(ldrValue);

  // Condition for LED and Buzzer
  if (temperatureC > 30 || ldrValue < 300) {
    digitalWrite(ledPin, HIGH);
    digitalWrite(buzzerPin, HIGH);
    Serial.println("Alert: Threshold Exceeded!");
  } else {
    digitalWrite(ledPin, LOW);
    digitalWrite(buzzerPin, LOW);
  }

  delay(1000); // 1 second delay
}
