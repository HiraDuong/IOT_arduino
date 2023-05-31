void setup() {
  // put your setup code here, to run once:
  pinMode(D4 , OUTPUT);
  pinMode(D2 , OUTPUT);

}

void delayss(int LED, int i){
  int previousMillis,ledState;
  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= i) 
  {
  previousMillis = currentMillis;
  if (ledState == LOW) {
  ledState = HIGH;
  } else {
  ledState = LOW;
  }
  digitalWrite(LED, ledState);
  }
}
void loop() {
  
  digitalWrite(D4,HIGH);
  digitalWrite(D2,HIGH);
  delayss(D4,150);
  delayss(D2,250);
  // put your main code here, to run repeatedly:


}
