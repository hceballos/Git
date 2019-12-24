/*
   @author  Tomás de Camino Beck
   www.inventoria.org
*/
void setup() {
  Serial.begin(9600);//inicia el puerto serial
}

void loop() {
  int miVariable = analogRead(A0);
  Serial.println(miVariable);

}
