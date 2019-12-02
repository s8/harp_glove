int LED_PIN = 1;
int MOTOR_PIN = 0;

void setup(){
  
  pinMode (LED_PIN, OUTPUT);
  pinMode (MOTOR_PIN, OUTPUT);
  
  }

void loop() {
  // fade in from min to max in increments of 5 points:
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    // sets the value (range from 0 to 255):
    analogWrite(LED_PIN, fadeValue);
    analogWrite(MOTOR_PIN, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }

  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5) {
    // sets the value (range from 0 to 255):
    analogWrite(LED_PIN, fadeValue);
    analogWrite(MOTOR_PIN, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }
}
