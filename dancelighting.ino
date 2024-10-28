#define key1 digitalRead(A0)
void setup() {
  pinMode(A0, INPUT);

  for ( int i = 0;i<=3;i++){
       pinMode(i, OUTPUT);
  }
}
 
 

  void loop() {
    int i, a;
    int dancinglight[4][4] = {
      {0, 0, 0, 1},
      {0, 0, 1, 0},
      {0, 1, 0, 0},
      {1, 0, 0, 0}
    };
    for (i = 0; i <= 3; i++) 
    {
     digitalWrite(i,0);
    }
  
   
    if (  key1 == 0)
    {
      for ( a=0;a<=3;a++) {
        for (i=0;a<=3;i++) {
     digitalWrite(i, dancinglight[a] [i]);}
                       
        
        delay(200);
      }
    }    }
    
