int sensor1=2;
int sensor2=3;
int sensor1_a=HIGH;
int sensor2_b=HIGH;
int motorPin1 = 6;
int motorPin2 = 7;


void setup() {
  // put your setup code here, to run once:
pinMode(sensor1,INPUT);
pinMode(sensor2,INPUT);
Serial.begin(9600);
pinMode(motorPin1, OUTPUT);
 pinMode(motorPin2, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
   sensor1_a=digitalRead(sensor1);
   sensor2_b=digitalRead(sensor2);
   if(sensor1_a==LOW && sensor2_b==LOW){
    Serial.println("Train not Coming");
   }

   else if (sensor1_a==LOW)
   {
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, HIGH);
    Serial.println("Train Coming. Gate will be closed");
    delay(50);
    digitalWrite(motorPin1, HIGH);
    digitalWrite(motorPin2, HIGH);
    
   }

  else if(sensor2_b==LOW){
    digitalWrite(motorPin1, HIGH);
    digitalWrite(motorPin2, LOW);
    Serial.println("Train Going. Gate will open");
    delay(50);
    digitalWrite(motorPin1, HIGH);
    digitalWrite(motorPin2, HIGH);
  }
   
}
