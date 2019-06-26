//Traffic Light Project
void setup() {
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
}

void loop() {
  //Green LED Controller
  digitalWrite(8,HIGH);
  delay(4000);
  digitalWrite(8,LOW);
  
  //Yellow LED Controller
  digitalWrite(9,HIGH);
  delay(2000);
  digitalWrite(9,LOW);
  
  //Red LED Controller
  digitalWrite(10,HIGH);
  delay(4000);
  digitalWrite(10,LOW);
}
