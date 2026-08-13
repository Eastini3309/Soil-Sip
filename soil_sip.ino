// Pin Definitions
const int MOISTURE_PIN = A0; // Capacitive Sensor AOUT
const int MOTOR_PIN = 3; // Transistor Base via resistor

// Real-world 3.3V Calibration Values for Capacitive Sensor v2.0
// (Adjust DRY_VAL and WET_VAL slightly if needed after checking Serial Monitor)
const int DRY_VAL = 520; // Sensor in dry air (~0% moisture)
const int WET_VAL = 260; // Sensor in water/wet soil (~100% moisture)

// Set the threshold for when the pump should turn ON
const int WATERING_THRESHOLD_PERCENT = 30; // Turns pump on if moisture drops below 30%

void setup() {
pinMode(MOTOR_PIN, OUTPUT);
digitalWrite(MOTOR_PIN, LOW); // Keep motor off initially
Serial.begin(9600);
}

void loop() {
int rawValue = analogRead(MOISTURE_PIN);

// Map the inverted capacitive values to a 0% - 100% scale
int moisturePercent = map(rawValue, DRY_VAL, WET_VAL, 0, 100);

// Keep percentage within 0-100 range in case of slight analog drift
moisturePercent = constrain(moisturePercent, 0, 100);

// Print values to Serial Monitor
Serial.print("Raw Reading: ");
Serial.print(rawValue);
Serial.print(" | Moisture: ");
Serial.print(moisturePercent);
Serial.println("%");

// Control logic
if (moisturePercent < WATERING_THRESHOLD_PERCENT) {
digitalWrite(MOTOR_PIN, HIGH); // Turn pump ON
} else {
digitalWrite(MOTOR_PIN, LOW); // Turn pump OFF
}

delay(1000); // Wait 1 second before next reading
}
