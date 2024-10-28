int buttenpin=8;
int ledpin=2;
int buttenstate=0;
void setup() {
  pinMode(ledpin,OUTPUT);
  pinMode(buttenpin, INPUT);
  
  
}

void loop() {
  buttenstate=digitalRead(buttenpin);
  if(buttenstate==HIGH){
    digitalWrite(ledpin,HIGH); }
    else{ 
      digitalWrite(ledpin,LOW);
    }
  }
  
