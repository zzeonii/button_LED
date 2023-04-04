const int buttonPin=7;
const int ledPin[3]={6,9,10};

int buttonState=0;

void setup() {
  for (int x=0;x<3;x++){
    pinMode(ledPin[x],OUTPUT);
    }
  pinMode(buttonPin,INPUT);
}

void loop() {

  buttonState=digitalRead(buttonPin);
  if(buttonState==HIGH){
    for (int x=0;x<3;x++){
    digitalWrite(ledPin[x],HIGH);
    delay(500);
    }
  }
  else {
    for (int x=0;x<3;x++){
    digitalWrite(ledPin[x],LOW); 
    }
  }
}
