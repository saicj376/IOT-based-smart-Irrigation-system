#define BLYNK_PRINT Serial
#include <Wire.h>
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "uzGZVE19GOPZn5y_20EAixY0EDVCq-th";

 
// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "123456789";
char pass[] = "0987654321";

void setup()
{
  // Debug console
  Serial.begin(9600);

  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  Blynk.run();
 
}
