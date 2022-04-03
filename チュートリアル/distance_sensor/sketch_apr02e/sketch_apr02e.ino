/* 超音波センサーを使って距離計測 */
/* Ucc は5v, Trig は 3pin, Echo は 5pin, Gnd は GND */

unsigned long distance_time =0;

void setup() {
  // put your setup code here, to run once:
  pinMode(3,OUTPUT);
  pinMode(5,INPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(3,HIGH);
  delayMicroseconds(10); //10us over

  digitalWrite(3,LOW);

  distance_time = pulseIn(5,HIGH);

  Serial.print(distance_time / 58);
  Serial.println("cm");

  delay(100);
}
