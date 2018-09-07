const int relay1 = 7;
const int relay2 = 8;

const int An1=3;
const int An2=4;

long line1=0;
long line2=0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
}



void loop() {
  // put your main code here, to run repeatedly:
  line1=analogRead(An1);
  line2=analogRead(An2);
  controlLogic(line1,line2);
}

bool controlLogic(long x,long y){
 return true;
}


