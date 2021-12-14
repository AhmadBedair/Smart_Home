int temp_altera = 9; //pin to send temp signal to altera
int tempPin = 1; //Temperature sensor connected to Arduino A1 pin
int motionSensorPin = 4; //pin to connect motions sensor signal to arduino
int motion_altera = 11; //pin to send motion signal from arduino to altera

int val; //variable to store temperature sensor value



void setup()
{
  Serial.begin(9600); //to use serial monitor to see values
  pinMode(temp_altera,OUTPUT); //Set pin 9 output
  pinMode(motionSensorPin,INPUT); //Set pin 4 input
  pinMode(motion_altera,OUTPUT); //Set pin 11 output
}
void loop()
{
  if(digitalRead(motionSensorPin)==HIGH) //if pin 4 HIGH (Motion detected)
  {
    digitalWrite(motion_altera,HIGH); //Send HIGH on Arduino's pin 11 to Altera
    Serial.println("Motion"); //print Motion on Serial monitor
   
  }
  else //If there is no motion detected
  {
    digitalWrite(motion_altera,LOW); //send Low on Arduino's pin 11 to Altera
  }
  val = analogRead(tempPin);
  float mv = ( val/1024.0)*5000; //convert analog reading to voltage
  float cel = mv/10; //convert voltage to cel
  if(cel >= 30) //if temperature > 30
  {
    digitalWrite(temp_altera,HIGH); //send HIGH on Arduino's pin 9 to Altera
  }
  else
  {
    digitalWrite(temp_altera,LOW); //send Low on Arduino's pin 9 to Altera
  }
    Serial.print("TEMPRATURE = "); //print "TEMPRATURE =" on serial monitor
    Serial.print(cel); //print temperature on serial monitor
    Serial.println("*C"); //print " C" on serial monitor
}
