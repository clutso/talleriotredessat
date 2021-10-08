#include <ESP8266WiFi.h> //Handles hardware states of Wifi module.
#include <WiFiClient.h> //handles RF protocol (wiFi) for TX and RX
#include <ESP8266HTTPClient.h> //handles HTTP methods (post, get, update, etc) 
#include "env.h"
//Wi-Fi
const char* ssid = "WiBo-RMA-2G";
const char* pass = "38482885"; 
const char* host = "192.168.1.100";

WiFiClient wifiClient;
HTTPClient http;

//API_ENDPOINTS
String myurl= "http://"+(String)host+"/setstatus?sensor=";
String initurl="http://"+(String)host+"/";

void setup() {
  Serial.begin(115200);
    delay(2000);
    Serial.printf("\nTrying Connection to: %s\n", ssid);
    delay(2000);
    WiFi.begin(ssid, pass);
    while (WiFi.status()!= WL_CONNECTED){
      delay (500);
      Serial.print(".");
      //if timeout print unable to connect && break  
      }
  Serial.printf("\nConnected.\n"); 
  http.end();
  delay(2000);
  }

void loop() {
    static bool state=false;
    state?state=false:state=true;
    String target=myurl+(String)state; 
    
    Serial.printf("\nSending:\n"); 
    Serial.println (target);
    http.begin(wifiClient, target);
    http.GET();
    http.end();
    delay (5000);

}
