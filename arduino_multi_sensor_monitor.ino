// Pin definitions
const int tempPin = A0;   // TMP36 / LM35
const int ldrPin = A1;    // LDR
const int ledPin = 8;     // LED
const int buzzerPin = 9;  // Buzzer

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);

  Serial.begin(9600);
  Serial.println("Multi-Sensor Monitoring System Started");
}

void loop() {
  int sensorValue = analogRead(tempPin);
  int ldrValue = analogRead(ldrPin);

  float voltage = sensorValue * (5.0 / 1023.0);
  float temperatureC = (voltage - 0.5) * 100.0; // for TMP36/LM35

  Serial.print("Temp: ");
  Serial.print(temperatureC);
  Serial.print(" C | LDR: ");
  Serial.println(ldrValue);

  if (temperatureC > 30 || ldrValue < 300) {
    digitalWrite(ledPin, HIGH);
    digitalWrite(buzzerPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
    digitalWrite(buzzerPin, LOW);
  }

  delay(1000);
}
