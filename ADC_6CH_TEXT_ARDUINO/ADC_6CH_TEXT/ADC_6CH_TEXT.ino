
//HETPRO
//WWW.HETPRO.COM.MX
//CONTACTO@HETPRO.COM.MX
//LICENCIA CREATIVE COMMONS SHARE ALIKE 


int s2,s3,s4,s5,s6,s7;
int sb2,sb3,sb4,sb5,sb6,sb7;
void setup() {
  Serial.begin(9600); 
}

void loop() {
  s2 = analogRead(A0);       
  s3 = analogRead(A1); 
  s4 = analogRead(A2); 
  s5 = analogRead(A3); 
  s6 = analogRead(A4); 
  s7 = analogRead(A5);
  
  sb2 = map(s2, 0, 1023, 0, 255);   
  sb3 = map(s3, 0, 1023, 0, 255);
  sb4 = map(s4, 0, 1023, 0, 255);
  sb5 = map(s5, 0, 1023, 0, 255);
  sb6 = map(s6, 0, 1023, 0, 255);
  sb7 = map(s7, 0, 1023, 0, 255);
  

  Serial.print(" A2=" );                       
  Serial.print(sb2);   
  Serial.print(" A3=" );                       
  Serial.print(sb3); 
  Serial.print(" A4=" );                       
  Serial.print(sb4); 
  Serial.print(" A5=" );                       
  Serial.print(sb5); 
  Serial.print(" A6=" );                       
  Serial.print(sb6);
  Serial.print(" A7=" );                       
  Serial.print(sb7);
  Serial.println("...");   

  delay(100);                     
}
