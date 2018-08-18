#include <ESP8266HTTPClient.h>
#include <ESP8266WiFi.h>
const int FLEX_PIN = A0; 
const float VCC = 4.98; 
const float R_DIV = 47500.0; 
const float STRAIGHT_RESISTANCE = 37300.0; // resistance when straight
const float BEND_RESISTANCE = 90000.0; // resistance at 90 deg
int x;

void setup() {

  Serial.begin(115200);                 //Serial connection
  pinMode(FLEX_PIN, INPUT);

  WiFi.begin("username", "password");   //WiFi connection
 
  while (WiFi.status() != WL_CONNECTED) {  //Wait for the WiFI connection completion
     delay(500);
    Serial.println("Waiting for connection");
      }
      Serial.println(WiFi.localIP());
      }
  
void loop(){
if(WiFi.status()== WL_CONNECTED){   //Check WiFi connection status
   Serial.println("Entered loop 1");
   HTTPClient http;    //Declare object of class HTTPClient

  int flexADC = analogRead(FLEX_PIN);
  float flexV = flexADC * VCC / 1023.0;
  float flexR = R_DIV * (VCC / flexV - 1.0);
  Serial.println("Resistance: " + String(flexR) + " ohms");

  // Use the calculated resistance to estimate the sensor's
  // bend angle:
  float angle = map(flexR, STRAIGHT_RESISTANCE, BEND_RESISTANCE,
                   0, 90.0);
  Serial.println("Bend: " + String(angle) + " degrees");
  Serial.println();
  if (angle>=1000&&angle<=1600){
    x=0;
 //http.begin("http://192.168.43.73/direction?state=straight"); 
  Serial.println("straight");}
  
  if(angle>150 && angle<1000){
    x=1;
 Serial.println("LEFT");
 // http.begin("http://192.168.43.73/direction?state=left");      //Specify request destination
  }
  
  if(angle<=150){
    x=2;
 Serial.println("RIGHT");
   // http.begin("http://192.168.43.73/direction?state=right");  
  }
 // delay(500);

if(x==1)
{
 http.begin("http://192.168.43.119/direction?state=left");      //Specify request destination
}

if (x==2)
{
 http.begin("http://192.168.43.207/direction?state=right");  
 }

if (x==0)
{
 http.begin("http://192.168.43.207/direction?state=straight");  
}


 
   http.addHeader("Content-Type", "text/plain");  //Specify content-type header
 
   int httpCode = http.POST("Message from ESP8266");   //Send the request
   String payload = http.getString();                  //Get the response payload
 
   Serial.println(httpCode);   //Print HTTP return code
   Serial.println(payload);    //Print request response payload
 
   http.end();  //Close connection
 
 }
  delay(3000);  //Send a request every 30 seconds
 
}

