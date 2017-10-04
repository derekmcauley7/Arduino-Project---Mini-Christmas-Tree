

#define LED 13
#define LED2 12
#define LED3 11
#define LED4 10
#define LED5 9
#define LED6 8

void setup()                      
{
 pinMode(LED, OUTPUT);
 pinMode(LED2, OUTPUT);
 pinMode(LED3, OUTPUT);
 pinMode(LED4, OUTPUT);
 pinMode(LED5, OUTPUT);
 pinMode(LED6, OUTPUT);
}

void loop()                       // run over and over again
{

   digitalWrite(LED2, HIGH);   
   delay(1000);                
   digitalWrite(LED2, LOW);    
   delay(50);  
   
   digitalWrite(LED, HIGH);   // sets the LED on
   delay(800);               
   digitalWrite(LED, LOW);    // sets the LED off
   delay(100);               
           

   digitalWrite(LED3, HIGH);   
   delay(600);                
   digitalWrite(LED3, LOW);  
   delay(100); 

   digitalWrite(LED6, HIGH);   
   delay(900);                
   digitalWrite(LED6, LOW);  
   delay(100); 
 

   digitalWrite(LED4, HIGH);   
   delay(600);                
   digitalWrite(LED4, LOW);  
   delay(100); 

   digitalWrite(LED5, HIGH);   
   delay(600);                
   digitalWrite(LED5, LOW);  
   delay(100); 
 
   
}
