void setup() {
  // put your setup code here, to run once:
  pinMode(3, INPUT); //タクトスイッチ
  pinMode(7,OUTPUT); //LED
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(3) == HIGH){
    digitalWrite(7,1); //SW が ON -> LED を点灯
  } else{
    digitalWrite(7,0); //SW が OFF -> LED を消灯
  }
}
