int redPin=7;
int greenPin =6;
int bluePin = 5; // déclaration des Pins

int joyValue1;
int joyValue2;

void setup() {
  pinMode (redPin, OUTPUT);
  pinMode (greenPin, OUTPUT);
  pinMode (greenPin, OUTPUT);

}

void loop() {

joyValue1 = analogRead(A1);
joyValue2 = analogRead(A2);
joyValue1 = map(joyValue1, 0, 1023, 0, 255);
joyValue2 = map(joyValue2, 0, 1023, 0, 255);

mixCouleur (joyValue1,joyValue2,0);
mixCouleur (joyValue1,joyValue2,joyValue1);
  
}

void mixCouleur (int redValue, int greenValue, int blueValue)
{
  analogWrite(redPin, redValue);
  analogWrite(greenPin, greenValue);
  analogWrite(bluePin, blueValue);
}
