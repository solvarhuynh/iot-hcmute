int led1 = 1, led2 = 2, LedButton;
void setup() {
  pinMode(0,INPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT); 

}

void loop() {
  LedButton = digitalRead(0);
  if(LedButton == HIGH){
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
  }else{
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
  }

}
