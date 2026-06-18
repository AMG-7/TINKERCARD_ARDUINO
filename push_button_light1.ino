#define button 2
#define led 12
void setup() {
  Serial.begin(9600);
  pinMode(button, INPUT);
  pinMode(led, OUTPUT);
}
void loop() {
  if(digitalRead(button) == LOW) {
    Serial.println("critiano ronaldo");
    digitalWrite(led, LOW);
    
  }
  else{
    Serial.println("suiiiiiiiiii");
    digitalWrite(led, HIGH);
  }
  delay(100);
}
