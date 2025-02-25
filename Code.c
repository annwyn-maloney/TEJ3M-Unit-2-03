/*
 *Created by Annwyn Maloney
 *25/02/2025
 *Turns an LED on for one second, then stops for one second, repeatedly 
*/ 
  
int blinkTime = 1000; // set variable to 1000
const int PIN_5 = 5; 

void setup() {
  // initialize digital pin LED_BUILTIN as an output 
  pinMode (PIN_5, OUTPUT); 
}

void loop() {
  digitalWrite(PIN_5, HIGH); // turn the LED on (HIGH is the voltage level)
  delay(blinkTime); // wait for length of variable blinkTime
  digitalWrite(PIN_5, LOW); // turn the LED off by making the voltage LOW 
  delay(1000); // wait for a second

  blinkTime = blinkTime + 1000; // add 1 second (or 1000) to variable blinkTime
} 
