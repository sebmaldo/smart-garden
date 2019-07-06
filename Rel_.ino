#include <math.h>
int rele = 10;

void setup() {
  Serial.begin(9600);
  pinMode(10, OUTPUT);
  pinMode(A0,INPUT);
  digitalWrite(rele,LOW);
}

void loop() {                                      
 int luz=analogRead(A0);
 Serial.println(luz);
    
 if(luz<600){
    digitalWrite(rele,HIGH);  
 }
 else{
  digitalWrite(rele,LOW);
  }
  delay(1000);
}
