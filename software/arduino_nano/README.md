# Arduino Nano Code

This code runs on the **Arduino Nano** and handles:
- Ultrasonic sensor obstacle detection
- Water sensor hazard detection
- Buzzer alerts

## Components Used
- Arduino Nano
- Ultrasonic Sensor (HC-SR04)
- Water Sensor
- Buzzer
- 9V Battery

## Pin Connections

| Component        | Arduino Nano Pin |
|------------------|------------------|
| Ultrasonic Trig  | D3               |
| Ultrasonic Echo  | D2               |
| Buzzer           | D5               |
| Water Sensor     | A7               |

## How to Upload
1. Open `smart_stick_main.ino` in **Arduino IDE**.
2. Select **Board:** Arduino Nano.
3. Select the correct **Port**.
4. Click **Upload**.

## Operation
- If an obstacle is ≤ 30cm → buzzer is activated.
- If water is detected above the threshold → buzzer is activated.