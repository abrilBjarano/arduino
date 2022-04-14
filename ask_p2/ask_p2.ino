int led = 10;
int i, j;

void setup(){

  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop(){

  for(i=0;i<6;i++){
    
    Serial.println("bip");
    analogWrite(led, 30);
    delay(400);
    digitalWrite(led, LOW);
    delay(100);
    

    if(i==2){ // if "i" was equal to 3, the led would be lighting 4 times already

      for(j=0;j<3;j++){

        Serial.println("bop");
        digitalWrite(led, HIGH);
        delay(400);
        digitalWrite(led, LOW);
        delay(100);
      }
    }
  }

  delay(5000);
}
