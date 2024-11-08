#define T_C 262
#define T_D 294
#define T_E 330
#define T_F 349

int x1 = 4;
int x2 = 3;
int x3 = 2;
int x4 = 1;
int speacker = 8;

void setup() {
 for (int i = 1; i < 5; i++) {
  pinMode(i, INPUT);
  digitalWrite(i, HIGH);
  }
}

void loop() {
 while(digitalRead(x1) == LOW) {
  tone(speacker, T_C);
  }

  while(digitalRead(x2) == LOW) {
  tone(speacker, T_D);
  }

  while(digitalRead(x3) == LOW) {
  tone(speacker, T_E);
  }

  while(digitalRead(x4) == LOW) {
  tone(speacker, T_F);
  }
  
  noTone(speacker);
}