//int pwmPin = 0;
int analogInPin = A1;

//float motor = 0;

void setup(){
  pinMode(pwmPin, OUTPUT);
//  pinMode(analogInPin, INPUT);

//  analogWrite(pwmPin, 25);
}

void loop(){
  

//    analogWrite(0,255); //Turn the pin on full (100%)
//    delay(1000);
//    analogWrite(0,128); //Turn the pin on half (50%)
//    delay(1000);
//    analogWrite(0,0);   //Turn the pin off (0%)
//    delay(1000);


  int analogIn = analogRead(analogInPin); // Read analog voltage on pin 2 (A1)
//
  delay(1);
//
  analogWrite(pwmPin, max(0,(analogIn-768))); // Output analog reading to dimmable LED
//
  delay(1);
//
}
