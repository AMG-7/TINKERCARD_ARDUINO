#define button 2
#define red 12
#define yellow 11
#define green 9


void setup() {
  pinMode(button, INPUT);
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  
}


void loop() {
  if(digitalRead(button) == HIGH){
    digitalWrite(red, HIGH);
    digitalWrite(green,HIGH);
    digitalWrite(yellow, LOW);
    delay(300);
   
    digitalWrite(green,LOW);
    digitalWrite(red, LOW);
    digitalWrite(yellow, HIGH);
    
    delay(300);
    digitalWrite(yellow, LOW);
   
  }
  else{
    digitalWrite(yellow, HIGH);
    digitalWrite(red, LOW);
    digitalWrite(green, LOW);
  }
}
