/*
----          TOCAR BUZZER 5 VEZES           ----
=================================================
== BLOG DA ROBOTICA - www.blogdarobotica.com ==
=================================================
Autor: Carol Correia Viana
E-mail: contato@blogdarobotica.com
Facebook: facebook.com/blogdarobotica
Instagram:@blogdarobotica
YouTube: youtube.com/user/blogdarobotica
=================================================
== CASA DA ROBOTICA - www.casadarobotica.com ==
=================================================
Facebook: facebook.com/casadaroboticaoficial
Instagram:@casadarobotica
=================================================
*/



int buzzer = 8; //Atribui o valor 8 a variavel buzzer, que representa o pino digital 8, onde o buzzer está conectado
int i = 0;//Variável para contar o número de vezes que o buzzer tocou

void setup() {
  pinMode(buzzer, OUTPUT); //Definindo o pino buzzer como de saída.
}

void loop() {
  for(i; i<5; i++){
  tone(buzzer, 1500);//Ligando o buzzer com uma frequencia de 1500 hz.
  delay(500);//Intervalo de 500 milissegundos
  noTone(buzzer);  //Desligando o buzzer.
  delay(500);//Intervalo de 500 milissegundos
  }
}