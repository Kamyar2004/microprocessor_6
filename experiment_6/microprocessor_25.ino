#include <DHT.h>

#define DHTPIN 8
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);
int cooler = 7;
int heater = 6;

void setup() {
  Serial.begin(9600);
  Serial.println('DHT11 test');
  dht.begin();
  pinMode(cooler, OUTPUT);
  pinMode(heater, OUTPUT);
}

void loop() {
  float humid = dht.readHumidity();
  float temp = dht.readTemperature();
  Serial.print("The Temporary is : ");
  Serial.print(temp);
  Serial.println("*C");
  Serial.print("The Humidity is : ");
  Serial.print(humid);
  Serial.println("*%");
  delay(1000);
  if (temp > 27) {
    digitalWrite(cooler, HIGH);
    digitalWrite(heater, LOW);
    }
    else if (temp < 27) {
      digitalWrite(cooler, LOW);
      digitalWrite(heater, HIGH);
      }
}