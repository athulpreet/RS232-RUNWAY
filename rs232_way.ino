
unsigned char value;
unsigned char data_to_send;
void setup() {
  // put your setup code here, to run once:
 pinMode(LED_BUILTIN, OUTPUT);
 pinMode(9, INPUT);

 digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)

 Serial.begin(9600);
 //Serial.println("start");
}

void loop() {
  // put your main code here, to run repeatedly:

 // Serial.println("start");

if(digitalRead(9)==0)
{

 
if(Serial.available()>0)
{

  value=Serial.read();
  Serial.print((char)value);
}

}

else
{

if(Serial.available()>0)
{

  value=Serial.read();


      if(value==80)
      {
        data_to_send=50;
      }

      else if(value==100)
      {
        data_to_send=80;
      }
      else if(value==120)
      {
        data_to_send=120;
      }


  
  Serial.print((char)data_to_send);
}
  
  
}
delay(1000);
}
