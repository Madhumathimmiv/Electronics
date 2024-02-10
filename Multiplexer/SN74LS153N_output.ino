/*
SN74LS153N IC to Arduino UNO pin connections
VCC --> 5V
2G  --> GND
A   --> 2
2C3 --> Push Button 4
2C2 --> Push Button 2
2C1 --> Push Button 2
2C0 --> Push Button 1
2Y  --> 3
B   --> 4
GND --> GND
*/
#define A 2
#define B 4
#define Y 3


void setup() {
  pinMode(A,OUTPUT);
  pinMode(B,OUTPUT);
  pinMode(Y,INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(A,0);
  digitalWrite(B,0);
  Serial.print(digitalRead(Y));
  Serial.print(" ");

  digitalWrite(A,1);
  digitalWrite(B,0);
  Serial.print(digitalRead(Y));
  Serial.print(" ");
  
  digitalWrite(A,0);
  digitalWrite(B,1);
  Serial.print(digitalRead(Y));
  Serial.print(" ");

  digitalWrite(A,1);
  digitalWrite(B,1);
  Serial.println(digitalRead(Y)); 
  
}
