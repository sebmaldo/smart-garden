int espera = 500;
int sensorLDR = A3;
int poten1 = A4;
int poten2 = A5;

void setup() {
  Serial.begin(9600);
  pinMode(sensorLDR,INPUT);
  pinMode(poten1,INPUT);
  pinMode(poten2,INPUT);

}

void loop() {
  float lecturaLDR = analogRead(sensorLDR);
  float lecturaPoten1 = analogRead(poten1);
  float lecturaPoten2 = analogRead(poten2);
  
  //Serial.print("Lectura LDR: ");
  //Serial.print(lecturaLDR);
  //Serial.print(";Lectura Potenciometro1: ");
  //Serial.print(lecturaPoten1);
  //Serial.print(";Lectura Potenciometro2: ");
  //Serial.println(lecturaPoten2);

  Serial.print(lecturaLDR);
  Serial.print(";");
  Serial.print(lecturaPoten1);
  Serial.print(";");
  Serial.println(lecturaPoten2);
 
  delay(espera);
}
