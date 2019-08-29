int led=13;

void setup(){
  pinMode (led, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  if(Serial.available()>0){
  char data= Serial.read();
  if (data=='a'){
    digitalWrite (led, HIGH);
  }
  if (data=='b'){
    digitalWrite (led, LOW);
  }
  Serial.println(data);
}
}
