#define WATER_SENSOR 4 //D4
void setup() {
  Serial.begin (9600);
  pinMode(WATER_SENSOR, INPUT);
}
void loop() {
  Serial.println(digitalRead(WATER_SENSOR));
  delay(500);
}
