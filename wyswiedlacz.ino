#include <LiquidCrystal.h> //Dołączenie bilbioteki
LiquidCrystal lcd(2, 3, 4, 5, 6, 7); //Informacja o podłączeniu nowego wyświetlacza
 
void setup() {
  lcd.begin(16, 2); //Deklaracja typu
  lcd.setCursor(4, 0); //Ustawienie kursora
  lcd.print("Kocham"); //Wyświetlenie tekstu
  lcd.setCursor(5, 1); //Ustawienie kursora
  lcd.print("Cie! <3"); //Wyświetlenie tekstu
  lcd.blink(); //Włącznie kursora
}
 
void loop() {
 // lcd.noCursor(); //Wyłącz kursor
 // delay(250); //Odczekaj
 // lcd.cursor(); //Włącz kursor
 //delay(250); //Odczekaj
  
  lcd.noDisplay(); //Wyłącz i poczekaj
  delay(500);
  lcd.display(); //Włącz i poczekaj
  delay(500);
}
