// TEA5767 Example
// Attiny85: Connect SDA to D0 and SDC to D2

#include <TinyWireM.h>
#include <TEA5767RadioTinyWireM.h>

TEA5767RadioTinyWireM radio = TEA5767RadioTinyWireM();

void setup()
{
  TinyWireM.begin();
  radio.setFrequency(93.0); // pick your own frequency
}

void loop()
{
}
