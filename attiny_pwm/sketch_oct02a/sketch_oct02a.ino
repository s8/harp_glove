int pwmPin = 0;
int analogInPin = A1;

float motor = 0;

void setup(){
  pinMode(pwmPin, OUTPUT);
  pinMode(analogInPin, INPUT);

  
}

void loop(){
  //int analogIn = analogRead(analogInPin); // Read analog voltage on pin 2 (A1)

  //delay(3);

//  analogWrite(pwmPin, analogIn/4); // Output analog reading to dimmable LED

//  delay(3);


  analogWrite(pwmPin, 128);
  delay(2000);
  analogWrite(pwmPin, 0);
  delay(0);
}
