// BOHICA_Bear geocache
// GCxxxxxxx
#include <Adafruit_LiquidCrystal.h>

int seconds = 0;

Adafruit_LiquidCrystal lcd_1(0);

void setup()
{
  lcd_1.begin(16, 2);

  lcd_1.setCursor(0, 0);
  lcd_1.print("BOHICA_Bear");
  lcd_1.setCursor(0, 1);
  lcd_1.print("Geocache   "); 
  delay(7000);
  
  }

void loop()
{
  lcd_1.setCursor(0, 0);
  lcd_1.print("GCx2345     "); 
  lcd_1.setCursor(0, 1);
  lcd_1.print("            ");
  delay(1000); 
  
  
  lcd_1.setCursor(0, 0);
  lcd_1.print("Final Coords    "); 
  lcd_1.setCursor(0, 1);
  lcd_1.print("Are as follows: ");   
  delay(1500); 
  
  lcd_1.setCursor(0, 0);
  lcd_1.print("N 39 ab.cde       "); 
  lcd_1.setCursor(0, 1);
  lcd_1.print("W 76 fg.hij       ");  
  delay(3500); 
  
  
  lcd_1.setCursor(0, 0);
  lcd_1.print("Please remove your"); 
  lcd_1.setCursor(0, 1);
  lcd_1.print("battery when done ");  
  delay(1000); 
  
}