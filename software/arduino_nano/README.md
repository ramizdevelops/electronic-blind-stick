# Arduino Nano Code

This code runs on the **Arduino Nano** and handles:
- Ultrasonic sensor obstacle detection
- Water sensor hazard detection
- Buzzer alerts

## Components Used
- Arduino Nano
- Ultrasonic Sensor (HC-SR04)
- Water Sensor
- 2 × Buzzers
- 9V Battery

## Pin Connections

| Component        | Arduino Nano Pin |
|------------------|------------------|
| Ultrasonic Trig  | D3               |
| Ultrasonic Echo  | D2               |
| Obstacle Buzzer  | D5               |
| Water Buzzer     | D7               |
| Water Sensor     | A7               |

---

## How to Upload

1. **Open** `smart_stick_main.ino` in **Arduino IDE**.
2. **Select Board:** `Arduino Nano`.
3. **Select the correct Port** from `Tools → Port`.
4. **Click Upload** to program the Arduino Nano.

---

## Operation

- If an obstacle is ≤ 30cm → **Obstacle Buzzer (D5)** is activated.
- If water is detected above the threshold → **Water Buzzer (D7)** is activated.