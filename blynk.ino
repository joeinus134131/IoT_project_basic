/*
 * Program ini digunakan untuk project IoT dasar menggunakan app Blynk
 * Project date : 
 * Author : IDNmakerspace Algorithm Factory (https://idnmakerspace.wordpress.com/)
 */
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

#define BLYNK_PRINT Serial

//kode token yang dikirmkan ke email 
char konfirmasi[] = "fb5obwqoxK1T5bEc2HBjvUbwR8hwI_GI"; 

//nama wifi/Hotspot
char ssid[] = "LINUX@ITERA"; 

//password wifi
char password[] = "10x2xyzqwerty"; 
 
void setup()
{
  Serial.begin(9600);
  Blynk.begin(konfirmasi, ssid, password);
  Serial.print("Menghubungkan ke jaringan...");
  delay(1000);
}
 
void loop()\
{
  Blynk.run();
  Serial.println("processing.. ")
}
