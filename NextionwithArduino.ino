void setup() 
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  digitalWrite(13,LOW);
}

void loop()
{
  String Data_From_Display = "";
   if(Serial.available())
 {
 String Data_From_Display = "";
  delay(100);
  while(Serial.available())
  {
    Data_From_Display += char(Serial.read());
  }
    if( Data_From_Display == "ON")
     { digitalWrite(13,HIGH);}
    else if( Data_From_Display == "OFF")
     { digitalWrite(13,LOW); }
    else
    { 
       
       Serial.print("page0.t0.txt=" + String('"') + Data_From_Display + String('"'));       
       Serial.write(0xff);
       Serial.write(0xff);
       Serial.write(0xff);
    }
 }
}
