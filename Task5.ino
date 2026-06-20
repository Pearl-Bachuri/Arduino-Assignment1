int ledPin =13;
int startValue =5;

void flashLED(int times){
  int flash = 0;

  while (flash < times){
    digitalWrite(ledPin, HIGH);
    delay(200);
    digitalWrite(ledPin, LOW);
    delay(200);

    flash++;
  }
  
}

void setup(){
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);

  Serial.println("===Smart Countdown Starting===");

  int count = 5;

  while(count>0){
    Serial.print("counter is: 5");
    Serial.println(count);

    flashLED(count);
    delay(1000);

  }
  Serial.println("===Countdown Complete===");
}
void loop() {

}