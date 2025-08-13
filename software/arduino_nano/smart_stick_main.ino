const int trigPin = 3;
const int echoPin = 2;
const int buzzer = 5;
const int motorPin = 6;
int waterSensorPin = A7;
int buzzerPin = 7;
int threshold = 500;

long duration;
int distance;
int safetyDistance;

void setup() {
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
    pinMode(buzzer, OUTPUT);
    pinMode(buzzerPin, OUTPUT);
    pinMode(motorPin, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);

    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    duration = pulseIn(echoPin, HIGH);
    distance = duration * 0.034 / 2;

    safetyDistance = distance;
    if (safetyDistance <= 30) {
        digitalWrite(buzzer, HIGH);
        digitalWrite(motorPin, HIGH);
    } else {
        digitalWrite(buzzer, LOW);
        digitalWrite(motorPin, LOW);
    }

    Serial.print("Distance: ");
    Serial.println(distance);

    int waterLevel = analogRead(waterSensorPin);

    // Print the value to the serial monitor
    Serial.print("Water Level: ");
    Serial.println(waterLevel);

    // Check if the water level is above the threshold
    if (waterLevel > threshold) {
        digitalWrite(buzzerPin, HIGH);
    } else {
        digitalWrite(buzzerPin, LOW);
    }

    delay(500); // Delay to prevent spamming the serial monitor
}