/*int led1r=4;
int led1v=5;
int led1a=6;*/
int led1r=A1, led1v=A2, led1a=A3;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode (led1r,OUTPUT);
pinMode (led1v,OUTPUT);
pinMode (led1a,OUTPUT);
}


void loop() {
  // put your main code here, to run repeatedly:
Serial.println("color rojo encendido");
analogWrite (led1r,150);
delay (1000);
Serial.println ("color rojo apagado");
analogWrite (led1r,0);

Serial.println ("color verde encedido");
analogWrite (led1v,255);
delay (1000);
Serial.println ("color verde apagado");
analogWrite (led1v,0);

Serial.println ("color azul encendido");
analogWrite (led1a,215);
delay (1000);
Serial.println ("color azul apagado");
analogWrite (led1a,0);

}
