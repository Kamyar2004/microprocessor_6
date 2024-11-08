int sequence[][7] = {
  {1,1,1,0,1,1,1},  // A
  {1,0,0,1,1,1,0},  // C
  {1,0,0,1,1,1,1},  // E
  {1,0,0,0,1,1,1},  // F
  {0,1,1,0,1,1,1},  // H
  {0,0,0,1,1,1,0},  // L
  {1,1,0,0,1,1,1},  // P
};

void printLetter (int number) {
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
  for (int i = 0; i < 7; i++) {
    printLetter(i);
    delay(1000);
    }
}