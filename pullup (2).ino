int buttenpin=2;
int ledpin=3;
int buttenstate;
void setup() {
  pinMode(ledpin,OUTPUT);
  pinMode(buttenpin, INPUT);
  
  
}

void loop() {
  buttenstate=digitalRead(buttenpin);
  if(buttenstate==LOW){
    digitalWrite(ledpin,HIGH); }
    else{ 
      digitalWrite(ledpin,LOW);
    }
  }
  

