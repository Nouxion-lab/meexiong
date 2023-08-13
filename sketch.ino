#define LED1 2
#define LED2 4
#define LED3 5
void setup() {
Serial.begin(115200);
pinMode(LED1, OUTPUT);
pinMode(LED2, OUTPUT);
pinMode(LED3, OUTPUT);
}
void loop() {
   if(Serial.available()){
      String input = Serial.readStringUntil('\n');
      if(input == "red"){
        digitalWrite(LED1, HIGH);
        digitalWrite(LED2,LOW);
        digitalWrite(LED3,LOW);
        Serial.println("ledred is turn on");
      }
      else if(input == "yellow"){
        digitalWrite(LED2, HIGH);
        digitalWrite(LED1,LOW);
        digitalWrite(LED3,LOW);
        Serial.println("ledyellow is turn on");
      }
      else if(input == "green"){
        digitalWrite(LED3,HIGH);
        digitalWrite(LED2,LOW);
        digitalWrite(LED1,LOW);
        Serial.println("LED3 is turn on");
      }
      else if(input == "traffic"){
        digitalWrite(LED3,HIGH);
        delay(3000);
        digitalWrite(LED3,LOW);

        digitalWrite(LED2,HIGH);
        delay(900);
        digitalWrite(LED2,LOW);
        delay(900);
        digitalWrite(LED2,HIGH);
        delay(900);
        digitalWrite(LED2,LOW);
        delay(900);
        digitalWrite(LED2,HIGH);
        delay(900);
        digitalWrite(LED2,LOW);
        delay(900);
        

        digitalWrite(LED1,HIGH);
        Serial.println("Stop please!!!!!!!!");
        delay(5000);
        digitalWrite(LED1,LOW);
        
      }
    }
}