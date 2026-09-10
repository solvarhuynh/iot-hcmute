int red = 4, yellow = 3, green = 2;
void setup() {
  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(green,OUTPUT);
}

void loop() {
  digitalWrite(red,HIGH);
  delay(3000);
  digitalWrite(red,LOW);
    
  digitalWrite(green,HIGH);
  delay(5000);
  digitalWrite(green,LOW);

  digitalWrite(yellow,HIGH);
  delay(1000);
  digitalWrite(yellow,LOW);

}
