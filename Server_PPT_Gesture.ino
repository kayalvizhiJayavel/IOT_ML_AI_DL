#include<ESP8266WiFi.h>
#include<ESP8266WebServer.h>
ESP8266WebServer server(80);

void mydirection(){ //Respond to Request
  if(server.arg("state") == "left"){ 
    left();
    server.send(200, "text/plain", "1"); //A function to send response to the client
    }
    if(server.arg("state") == "right"){ 
    right();
    server.send(200, "text/plain", "2"); //A function to send response to the client
    }
}

void left(){
   Serial.println("1");
    }

void right(){
   Serial.println("2");
    }
  
void setup() {
   Serial.begin(115200);
    WiFi.begin("username", "password");
    while(WiFi.status()!=WL_CONNECTED) //check for WiFi connectivity
  {
    delay(500);
    Serial.println("Connecting.....");    
    }
  
  Serial.print("IP Address.....");   
  Serial.println(WiFi.localIP());

  server.begin();
  server.on("/direction",mydirection);//Handle client Request, light is string in the request, mylight is function to be called
  
  // put your setup code here, to run once:

}

void loop() {
  server.handleClient(); 
  // put your main code here, to run repeatedly:
 

}

