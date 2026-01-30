# Arduino-multi-sensor-monitoring-system
Arduino Uno(Atmega328P) based multi sensor monitoring system using temperature sensor and LDR, with threshold based LED and buzzer alerts. Designed and validated using Autodesk Tinkercad simulation.
# Arduino Multi-Sensor Monitoring System

## Project Overview
Arduino Uno (ATmega328P) based multi-sensor monitoring system using a temperature sensor and LDR, with threshold-based LED and buzzer alerts. Designed and validated using Autodesk Tinkercad simulation.

## Hardware Components
- Arduino Uno (ATmega328P)
- Temperature Sensor (TMP36 / LM35)
- Light Dependent Resistor (LDR)
- LED with current limiting resistor
- Active Buzzer
- Breadboard and jumper wires

## Pin Configuration
| Component | Arduino Pin |
|---------|-------------|
| Temperature Sensor | A0 |
| LDR | A1 |
| LED | D8 |
| Buzzer | D9 |

## Description
- Analog sensors are read using the Arduino ADC
- Threshold-based logic controls LED and buzzer
- Serial communication used for debugging

## Tools Used
- Arduino IDE
- Autodesk Tinkercad
- Embedded C

