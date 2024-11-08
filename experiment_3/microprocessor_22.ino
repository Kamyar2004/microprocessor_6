int sensor;
int led = 10;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);  
}

void loop() {
  sensor = analogRead(A3);
  Serial.print("Photocell Value = ");
  Serial.println(sensor);
  delay(100);

  if (sensor > 100) {
    digitalWrite(led, LOW);
    }

   else {
    digitalWrite(led, HIGH);
    }
}