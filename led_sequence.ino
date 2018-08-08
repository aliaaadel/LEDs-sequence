#define led1 2
#define led2 3
#define led3 4
char state1[]={1,0,0};
char state2[]={0,1,0};
char state3[]={0,0,1};
char state4[]={0,1,0};
int i;
 void setup() {
  // put your setup code here, to run once:
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  
}

void loop() {
  
  // put your main code here, to run repeatedly:
  for ( i = 0 ; i< 4 ; i++){
    digitalWrite(led1,state1[i]);
    digitalWrite(led2,state2[i]);
    digitalWrite(led3,state3[i]);
    digitalWrite(led2,state4[i]);
    delay(1000);
  }
}
