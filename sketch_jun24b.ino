#include <WiFi.h>


#define WLAN_SSID       "Maloo Home"
#define WLAN_PASS       "rpds@231180"

const int sensor = 19;



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.print("Connecting to ");
  Serial.println(WLAN_SSID);

  WiFi.begin(WLAN_SSID, WLAN_PASS);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("WiFi connected");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = analogRead(sensor);
  Serial.print("Sensor Values:-");
  Serial.println(val);
  delay(1000);
}
