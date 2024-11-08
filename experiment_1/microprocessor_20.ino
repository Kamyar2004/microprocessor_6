int sequence[][7] = {
  {1,1,1,1,1,1,0},  // 0
  {0,1,1,0,0,0,0},  // 1
  {1,1,0,1,1,0,1},  // 2
  {1,1,1,1,0,0,1},  // 3
  {0,1,1,0,0,1,1},  // 4
  {1,0,1,1,0,1,1},  // 5
  {1,0,1,1,1,1,1},  // 6
  {1,1,1,0,0,0,0},  // 7
  {1,1,1,1,1,1,1},  // 8
  {1,1,1,1,0,1,1},  // 9
};

void printNumber (int number) {
  for (int i = 0; i < 7; i++) {
    digitalWrite(1+i,sequence[number][i]);
    }
}

void setup() {
  for (int i = 1; i < 8; i++) {
    pinMode(i, OUTPUT);
    }
}

void loop() {
  for (int i = 0; i < 10; i++) {
    printNumber(i);
    delay(1000);
    }
}