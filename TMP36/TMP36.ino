int LDR=A1;
int rele=7;

void setup() {
  Serial.begin(9600);
  pinMode(rele, OUTPUT);
  pinMode(LDR,INPUT);   //TMP 36
  digitalWrite(rele,LOW);
}

void loop() {
 int lectura = analogRead(LDR);

 float voltaje = (5.0/1024.0)*lectura;  
 float temp = (voltaje-0.5)*100;  
Serial.print(lectura);
Serial.print(" ");
 Serial.print(temp);
 Serial.println("°C");
 
 if(temp<20){
 digitalWrite(rele,HIGH);  
 }
 else{
 digitalWrite(rele,LOW);
 }
  delay(1000);
  
  
}
