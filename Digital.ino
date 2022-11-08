/*int led1r=4;
int led1v=5;
int led1a=6;*/
int led1r=4, led1v=5, led1a=6;
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
digitalWrite (led1r,HIGH);
delay (1000);
Serial.println ("color rojo apagado");
digitalWrite (led1r,LOW);

Serial.println ("color verde encedido");
digitalWrite (led1v,HIGH);
delay (1000);
Serial.println ("color verde apagado");
digitalWrite (led1v,LOW);

Serial.println ("color azul encendido");
digitalWrite (led1a,HIGH);
delay (1000);
Serial.println ("color azul apagado");
digitalWrite (led1a,LOW);

}
