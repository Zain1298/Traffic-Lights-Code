
 

void setup() {
pinMode(2,OUTPUT);// put your setup code here, to run once:
pinMode(7,OUTPUT);
pinMode(4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(2,HIGH); // red 
delay(1000);
digitalWrite(2,LOW);
delay(1000);
digitalWrite(4,HIGH); // yellow
delay(1000);
digitalWrite(4,LOW);
delay(1000);
digitalWrite(7,HIGH); // green 
delay(1000);
digitalWrite(7,LOW);
delay(1000);
}
