/*
  Author: 

  Learning Intention:
  The students will learn how to wire a variable resistor as a pseudo sensor and read analogue
  data from that PIN.
  
  Success Criteria:
    1.  I can wire a variable resistor in TINKERCAD
    2.  I know how to read analogue data from a specific PIN
    3.  I know the range of analogue data
    4.  I can organise output data so it correctly plots on the serial monitor
    5.  I can apply this knowledge to the Light, Sound and Rotary Potentiometer in the sensor kit

  Student Notes: 

  Documentation: 
    https://www.arduino.cc/reference/en/language/functions/analog-io/analogread/
  Schematic:
    https://www.tinkercad.com/things/97wMDip2Ata-bootcamp-analogueread/editel
    https://github.com/TempeHS/TempeHS_Ardunio_Bootcamp/blob/main/05.analogueRead/Bootcamp-analogueRead.png
*/
static unsigned int buttonPin = 5;
static unsigned int ledPin = 6;
static unsigned int lightSensorPin = 7;
bool readPin;

void setup() {
 Serial.begin(9600);
 Serial.println("Debugged");
}

void loop() 
{
  Serial.println(analogRead(A3));
if (analogRead(A3) == 0)
  {
  digitalWrite(ledPin, HIGH);
  } else if (analogRead(A3) >= 700)
  {
  digitalWrite(ledPin, LOW);
  } else if (analogRead(A3) >= 300)
  {
  digitalWrite(ledPin, HIGH);
  } else
  {
  digitalWrite(ledPin, LOW);
  }
}

