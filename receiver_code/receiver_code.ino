void setup() {
  // put your setup code here, to run once:
  pinMode(12,INPUT); //connected to white wire
  pinMode(13,INPUT); //connected to yellow wire
}
int len=2;
int dataFrame[len];
int Y=1;
void loop() {
  int i=0,j=0;
  while(Y==1){
    if(i==0){
      dataFrame[0]=digitalRead(13);
      i++;
    }
    else{}
    Y=digitalRead(12);
    }
  while(Y==0){
    if(j==0){
      dataFrame[1]=digitalRead(13);
      j++;
    }
    else{}
    Y=digitalRead(12);
    }
 }
