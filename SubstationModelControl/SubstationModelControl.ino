const int LED=7;
const int Analog=3;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
 // pinMode(relay2, OUTPUT);
  //pinMode
}

void loop() {
  long vol=analogRead(Analog);  //read the analog voltage from divider
  delay(5);
  if(high(vol)){  //check if the voltage is too high (means current through load is too high)
    digitalWrite(LED,HIGH);
  }
  else{
    digitalWrite(LED,LOW);
  }
  delay(5); 
}

bool high(long x){
 if(x>307){ //306=~1.5V 
            //use voltage divider with pot to determine correlating current through load
  return true; 
 }
 return false;
}


