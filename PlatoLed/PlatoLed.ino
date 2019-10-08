int pins[] = {3,5,6,9,10};
byte brights[] = {0,0,0,0,0};

void setup() {
  Serial.begin(115200);
}

void loop() {
    byte brightness;
    int destPin;

  // check if data has been sent from the computer:
  if (Serial.available() == 2) {
    destPin = Serial.read();
    brightness = Serial.read();
    // set the brightness of the LED:
    brights[destPin] = brightness;
    //Serial.write(pins[destPin]);
    //Serial.write(brightness);
    
  }
  for (int i = 0; i < 5 ; i++){
  analogWrite(pins[i],brights[i]);
  }
}
