#include<servo.h>
Servo myservo;
Const int echopin=5;
Const int trigpin=6;
Const int buzzer=3;
Int valvepin=4;
int ledA=0; int ledB=2; int a=2;
Int b = 4;
Int c= 6;
// Motor A connections
Int enA =13;
Int in1 = 12;
Int in2 = 11;
// Motor B connections
Int enB = 8;
Int in3 = 10;
Int in4 = 9;
Void setup()
Pinmode(buzzer,OUTPUT);
Myservo.attach(7,600,2300);
Pinmode(ledA,OUTPUT);
Pinmode(ledB,OUTPUT);
Digitalwrite(ledA,Low);
Digitalwrite(ledB,Low); Pinmode(valvepin,OUTPUT); pinMode(enA, OUTPUT); pinMode(enB, OUTPUT); pinMode(in1, OUTPUT); pinMode(in2, OUTPUT); pinMode(in3, OUTPUT); pinMode(in4, OUTPUT);
digitalWrite(in1, LOW); digitalWrite(in2, LOW); digitalWrite(in3, LOW); digitalWrite(in4, LOW); Void loop () directionControl();
delay(1000);
speedControl();
delay(1000);
Void directionControl() {
// directions can be changed using this digitalWrite(in1, LOW); digitalWrite(in2, HIGH); digitalWrite(in3, LOW); digitalWrite(in4, HIGH); delay(2000);
}
Void speedControl() {
for (int i = 0; i < 256; i++) { analogWrite(enA, i); analogWrite(enB, i); delay(20);
}
}
Myservo.write(90);
Delay(2000);
Digitalwrite (trigpin,HIGH);
Delay(20);
Digitalwrite (trigpin,LOW);
Pinmode(echopin,INPUT);
Duration=pulseIN(echo,HIGH);
Metre=microsecondstometres(duration);
Serial.print(metre);
Serial.print(“metre”);
Delay(1000);
If(metre<=a){
Digitalwrite (ledA, LOW);
Digitalwrite (ledB, LOW);
}
elseIf(metre<=b){
Digitalwrite (ledA, HIGH);
Digitalwrite (ledB, LOW);
}
ElseIf(metre<=c)
{
Digitalwrite (ledA, HIGH);
Digitalwrite (ledB, HIGH);
Tone(buzzer,1000);
Delay(1000);
Notone(buzzer);
Delay(1000);
