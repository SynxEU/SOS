void setup()
{
  pinMode(12, OUTPUT);
  pinMode(2, OUTPUT);
}
 
void blink(int pin, int duration) {
  digitalWrite(pin, HIGH);
  delay(duration);
  digitalWrite(pin, LOW);
  delay(200);
}
 
void blinkRepeat(int pin, int duration, int times){
    for (int i = 0; i < times; i++) {
    blink(pin, duration);
  }
}

void blinkChar(char m){
  if (m == 'S'){
    blinkRepeat(12,200,3);
  }else if (m == 'O'){
    blinkRepeat(2,600,3);
  }
}
 
void loop()
{
  blinkChar('S');
  blinkChar('O');
  blinkChar('S');
  delay(1000);
}