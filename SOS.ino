int greenPin = 12;
int redPin = 2;

void setup()
{
  pinMode(greenPin, OUTPUT);
  pinMode(redPin, OUTPUT);
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

void dash(int times){
  blinkRepeat(redPin,600,times);
}

void dot(int times){
  blinkRepeat(greenPin,200,times);
}

void morse(char m){
  switch (m) {
    case 'A':
      dot(1);
      dash(1);
      break;
    case 'B':
      dash(1);
      dot(3);
      break;
    case 'C':
      dash(1);
      dot(1);
      dash(1);
      dot(1);
      break;
    case 'D':
      dash(1);
      dot(2);
      break;
    case 'E':
      dot(1);
      break;
    case 'F':
      dot(2);
      dash(1);
      dot(1);
      break;
    case 'G':
      dash(2);
      dot(1);
      break;
    case 'H':
      dot(4);
      break;
    case 'I':
      dot(2);
      break;
    case 'J':
      dot(1);
      dash(3);
      break;
    case 'K':
      dash(1);
      dot(1);
      dash(1);
      break;
    case 'L':
      dot(1);
      dash(1);
      dot(2);
      break;
    case 'M':
      dash(2);
      break;
    case 'N':
      dash(1);
      dot(1);
      break;
    case 'O':
      dash(3);
      break;
    case 'P':
      dot(1);
      dash(2);
      dot(1);
      break;
    case 'Q':
      dash(2);
      dot(1);
      dash(1);
      break;
    case 'R':
      dot(1);
      dash(1);
      dot(1);
      break;
    case 'S':
      dot(3);
      break;
    case 'T':
      dash(1);
      break;
    case 'U':
      dot(2);
      dash(1);
      break;
    case 'V':
      dot(3);
      dash(1);
      break;
    case 'W':
      dot(1);
      dash(2);
      break;
    case 'X':
      dash(1);
      dot(2);
      dash(1);
      break;
    case 'Y':
      dash(1);
      dot(1);
      dash(2);
      break;
    case 'Z':
      dash(2);
      dot(2);
      break;
  }
}

 
void loop()
{
  morse('S');
  morse('O');
  morse('S');
  delay(1000);
}
