int redPin=7;
int greenPin =6;
int bluePin = 5; // déclaration des Pins

void setup() {
  pinMode (redPin, OUTPUT);
  pinMode (greenPin, OUTPUT);
  pinMode (greenPin, OUTPUT);

}

void loop() {
  mixCouleur(255, 0 ,0);  //couleur rouge
  delay(50);
  mixCouleur(0, 255 ,0);  //couleur verte
  delay(200);
  mixCouleur(0, 0 ,255);  //couleur blue
  delay(200);
  mixCouleur(255, 255 ,255);  //couleur blanche
  delay(200);
  mixCouleur(170, 0 ,255);  //couleur mauve
  delay(200);
  mixCouleur(46, 0, 108);  //couleur indigo
  delay(400);
  mixCouleur(173, 79, 9);  //couleur fauve  
  delay(200);

}

void mixCouleur (int redValue, int greenValue, int blueValue)
{
  analogWrite(redPin, redValue);
  analogWrite(greenPin, greenValue);
  analogWrite(bluePin, blueValue);
}
