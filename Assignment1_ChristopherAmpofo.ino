int startValue = 5;
int ledPin = 13;

void flashLED(int times) {
  for(int i = 0; i < times; i++){
    digitalWrite(ledPin, HIGH); // LED ON
    delay(150);
    digitalWrite(ledPin, LOW); // LED OFF
    delay(150);
  }
}

void setup(){
  
  pinMode(ledPin, OUTPUT);
  
  Serial.begin(9600);//Serial Monitor Initialization
  
  Serial.println("  ");
  Serial.println("=== Smart Countdown Starting ===");
  int count = startValue;
  while (count != 0){
    Serial.print("Count: ");
    Serial.println(count);
    flashLED(6); //flashes or blinks LED, Pin 13
    delay(1000);
    count = count - 1;
  }
  Serial.println("=== Countdown Complete ===");
}

void loop(){

 }
