/* MQ-2 Sensitive for Methane, Butane, LPG, Smoke (MQ-2) [S100] : http://rdiot.tistory.com/113 [RDIoT Demo] */

const int gasPin = A0;
  
void setup()
{
    Serial.begin(9600);
}
 
void loop()
{
    Serial.println(analogRead(gasPin));
    
    if (analogRead(gasPin) > 400)  
    {                                     
        tone(12,2000,1000); 
    }  
    delay(1000);
}
