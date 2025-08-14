# Hardware

This folder contains all hardware-related resources for the **Smart Blind Stick** project, including circuit diagram, project images and the list of components used.

## Overview
The hardware is designed to work with the Arduino Nano (for obstacle and water detection) and ESP8266 (for GPS tracking). It integrates:
- Ultrasonic sensor for obstacle detection
- Water sensor for puddle or wet surface detection
- Two buzzers for alerts
- GPS module for location tracking
- ESP8266 Wi-Fi module for real-time location sharing

---

## Components Used

| Component              | Quantity | Notes |
|------------------------|----------|-------|
| Arduino Nano           | 1        | Controls sensors & buzzers |
| ESP8266 (NodeMCU)       | 1        | Handles GPS tracking & Wi-Fi |
| Ultrasonic Sensor (HC-SR04) | 1    | Obstacle detection |
| Water Sensor           | 1        | Detects puddles or wet surfaces |
| Buzzer (Obstacle)      | 1        | D5 output |
| Buzzer (Water)         | 1        | D7 output |
| GPS Module (NEO-6M)    | 1        | Provides location coordinates |
| 9V Battery + Clip      | 1        | Power supply |
| Jumper Wires           | As needed | For connections |
| Breadboard / PCB       | 1        | Mounting & wiring |

---

## Wiring Summary

### **Arduino Nano**
| Sensor / Module  | Pin |
|------------------|-----|
| Ultrasonic Trig  | D3  |
| Ultrasonic Echo  | D2  |
| Obstacle Buzzer  | D5  |
| Water Buzzer     | D7  |
| Water Sensor     | A7  |

### **ESP8266 (NodeMCU)**
| GPS Module Pin | ESP8266 Pin | GPIO |
|----------------|-------------|------|
| TX             | D2          | 4    |
| RX             | D1          | 5    |

---

## Assembly Notes
- Keep GPS module exposed for a clear signal.
- Ultrasonic sensor should be placed at the front of the stick, angled slightly downward.
- Water sensor should be mounted near the base of the stick.
- Use a stable casing or housing to protect electronics from physical damage.

---

## License
Hardware designs are released under the **CERN OHL v2** license. See [LICENSE-HARDWARE](../HARDWARE-LICENCE) for details.