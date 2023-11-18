#define LED 13
#define SENSOR 8

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(SENSOR, INPUT);

}

void loop() {

  if(digitalRead(SENSOR)==1){ //if there is any motion
    digitalWrite(LED, 1); //led is HIGH
  }
  else{
    digitalWrite(LED, 0);
  }

}
