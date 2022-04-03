void setup() {
  // put your setup code here, to run once:
  pinMode(11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(11, HIGH); //11番ピンの出力を HIGH にする
  delay(5000); //5000ミリ秒 = 5 秒待つ
  digitalWrite(11, LOW); //11番ピンの出力を LOW にする
  delay(30000); //テスト用で 30 秒
}
