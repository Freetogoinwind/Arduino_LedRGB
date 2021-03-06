//  Accensione del led RGB passando per le varie tonalità

int pinRed = 11; 
int pinGreen = 10; 
int pinBlue = 9; 
void colore (unsigned char Red, unsigned char Green, unsigned char Blue)
{
 analogWrite(pinRed, Red); //attiva il led rosso con l’intensita’ della variabile Red
 analogWrite(pinBlue, Blue); //attiva il led blu con l’intensita’ della variabile Blue
 analogWrite(pinGreen, Green); //attiva il led verde con l’intensita’ della variabile Green
}
void setup()
{
 pinMode(pinRed, OUTPUT); 
 pinMode(pinGreen, OUTPUT); 
 pinMode(pinBlue, OUTPUT); 
}
void loop()
{
 colore(255, 0, 0); // accende il rosso
 delay(500); 
 colore(0,255, 0); // accede il verde
 delay(500); 
 colore(0, 0, 255); // accende il blu
 delay(500);
 colore(237,109,0); // accende l’arancione 
 delay(500);
 colore(255,215,0); // accende il giallo 
 delay(500);
 colore(0,46,90); // accende l’indaco 
 delay(500);
 colore(128,0,128); // accende il viola 
 delay(500);
 colore(0,0,0); // spegne tutto
 delay(500);
}
