unsigned char led = 0;
int i = 0;

void sw_led(void);

void setup() {
  pinMode(3,INPUT);
  pinMode(7,OUTPUT);

  attachInterrupt(1,sw_led, RISING);
}

void loop() {
  for(i = 0; i < 5; i++){
    delay(1000);  //無駄に5秒待たせる
  }
}

void sw_led(void) {
  led ^= 1;
  digitalWrite(7, led);
}
