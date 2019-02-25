void setup() {
  // put your setup code here, to run once:
  pinMode(3,OUTPUT);  
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(9,OUTPUT);
}

void loop() {
 
 for(int i=0;i<255;i++){
 analogWrite(3,i);
 delay(20);
 analogWrite(5,i);
 delay(20);
 }
}
