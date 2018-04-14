// TEA5767 Example

#include <Wire.h>
#include <TEA5767Radio.h>

TEA5767Radio radio = TEA5767Radio();
int AnVal ;
float NewFreq ;

void setup()
{ 
  Serial.begin(9600);          //  setup serial
  Wire.begin();
  radio.setFrequency(104.6); // pick your own frequency
}

void loop()
{
  AnVal = analogRead(A3);
  NewFreq = map(AnVal, 0, 1023, 93.0, 104.6);
  radio.setFrequency(NewFreq);
  Serial.println(AnVal);
}
