int LED1 = 7 ;   // led
int LED2 = 8 ;   // led
int LED3 = 9 ;   // led
int BUT = 10 ;   //bottun
int RE  = 0 ;    //variable (THE PUSH BUTTON)
int C = 0 ;       //Count

void setup() 
{
  Serial.begin(9600);
  pinMode(BUT,INPUT);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
}

void loop() 
{
  RE = digitalRead(BUT);
  if(RE==HIGH)
  {
    C++;  //c+1
   
   if(C == 1)
   {  
    digitalWrite(LED1, HIGH); 
  }
   
    else if (C==2)
  {
  digitalWrite(LED2, HIGH);
    
  }
 else if (C==3)
  {
    digitalWrite(LED3,HIGH); 
  }
  else
  {
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
    C = 0 ;
  }
  
   delay(250);
  }
 

}
