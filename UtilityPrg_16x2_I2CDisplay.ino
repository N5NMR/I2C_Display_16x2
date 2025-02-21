#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Erstelle ein LCD-Objekt: Adresse 0x27, 20 Zeichen, 4 Zeilen
LiquidCrystal_I2C lcd(0x27, 20, 4);

void setup() {
  // LCD initialisieren
  lcd.begin();
  lcd.backlight(); // Hintergrundbeleuchtung einschalten

  // Begrüßungsnachricht anzeigen
  lcd.setCursor(0, 0); // Cursor auf die erste Zeile setzen
  lcd.print("Wemos D1 Mini Pro");
  lcd.setCursor(0, 1); // Cursor auf die zweite Zeile setzen
  lcd.print("LCD Test Program");

  // Etwas Zeit lassen, um die Nachricht zu lesen
  delay(2000);

  // Anzeige leeren
  lcd.clear();

  // Weitere Zeilen ausfüllen
  lcd.setCursor(0, 0);
  lcd.print("I2C Address: 0x27");
  lcd.setCursor(0, 1);
  lcd.print("20x4 LCD Display");
  lcd.setCursor(0, 2);
  lcd.print("Have Fun!");
}

void loop() 
{
  // Der Loop-Abschnitt bleibt leer, da nichts wiederholt werden muss
}
