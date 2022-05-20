void setup() {
  // put your setup code here, to run once:
pinMode(12,OUTPUT); //connected to yellow wire
pinMode(13,OUTPUT); //connected to white wire
}

int dataFrame[2]={0,0}; //dataframe of size 2 is initialized and assigned a dummy value

void loop() {
digitalWrite(13,HIGH);
delay(50);
digitalWrite(12,dataFrame[0]);
delay(50);
digitalWrite(13,LOW);
delay(50);
digitalWrite(12,dataFrame[1]);
delay(50);
//update dataframe
}
