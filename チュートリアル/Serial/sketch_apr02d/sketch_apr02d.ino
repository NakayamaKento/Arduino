/* シリアル通信 */
/* ツール > シリアルモニタ */

char data_a = 0; //受信データ a
char data_b = 0; //受信データ b
char sum = 0; //計算結果
char count = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); //ビットレートの設定
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() > 0){
    if(count == 0){
      data_a = Serial.read(); //データの読み込み
      Serial.write("data_a="); //文字列を送信
      Serial.write(data_a); //アスキーコードを送信
      Serial.write("\n"); //改行
      data_a &= 0x0F; //数値データに変換
      count = 1;
    }else{
      data_b = Serial.read();
      Serial.write("data_b=");
      Serial.write(data_b);
      Serial.write("\n");
      data_b &= 0x0F;
      count = 0;
      sum = data_a + data_b;
      Serial.write("sum=");
      Serial.write(sum | 0x30); // アスキーコードに変換
      Serial.write("\n");
    }
  }
}
