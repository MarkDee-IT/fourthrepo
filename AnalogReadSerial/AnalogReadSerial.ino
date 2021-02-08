/*
  AnalogReadSerial

  Reads an analog input on pin 0, prints the result to the Serial Monitor.
  Graphical representation is available using Serial Plotter (Tools > Serial Plotter menu).
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/AnalogReadSerial

  modified 08 Aug 2021
  by Mark Dee,
  credit to DojoDave and Tom Igoe for the button sketch, helping me with this edit
*/

const int ledPin = 3; // LED input

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // print out the value you read:
  Serial.println(sensorValue);
  // Turn on led if value is over 500
  if (sensorValue > 500)
  {
    digitalWrite(ledPin, HIGH);
  }
  delay(1);        // delay in between reads for stability
}
