
int LED_PIN = 1;
int PEDAL_PIN = A1;

void setup(){
  
  pinMode (LED_PIN, OUTPUT);
  pinMode (PEDAL_PIN, INPUT);
  
  }

 void loop(){

  int pedal_value = analogRead(PEDAL_PIN);
  
  delay (1);

  analogWrite(LED_PIN, pedal_value);
 
  }
