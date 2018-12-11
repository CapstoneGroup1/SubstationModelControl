const int LED=7;
const int Analog=1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop() {
  long vol=analogRead(Analog);  //read the analog voltage from divider
  Serial.println(vol);
  delay(5);
  if(high(vol)){  //check if the voltage is too high (means current through load is too high)
    digitalWrite(LED,HIGH);
  }
  else{
    digitalWrite(LED,LOW);
  }
}

bool high(long x){
 if(x>204.8){ //204.8=1V 
             //use voltage divider with potentiometer to determine correlating current through load
  return true; 
 }
 return false;
}
