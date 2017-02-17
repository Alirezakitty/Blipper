#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,10,9,8,7,6,5,4,3,2);

void setup(){
  lcd.begin(16,2); // set up the LCD's number of columns and rows:
}

void loop() {
  lcd.setCursor(0,0); // set the cursor to column 0, line 0
  lcd.print("Student:"); // Print a message to the LCD.
  lcd.setCursor(0,2); // set the cursor to column 0, line 2
  lcd.print("Dnyaz Ali Ahmet"); //Print a message to the LCD.
  delay(3000);
  lcd.clear();
  /* * * * * */
  lcd.setCursor(0,0); // set the cursor to column 0, line 0
  lcd.print("Student:"); // Print a message to the LCD.
  lcd.setCursor(0,2); // set the cursor to column 0, line 2
  lcd.print("Ali-Reza Shahmohammadi"); //Print a message to the LCD.
  delay(3000);
  lcd.clear();
  /* * * * * */
  lcd.setCursor(0,0); // set the cursor to column 0, line 0
  lcd.print("Test&Innovation"); // Print a message to the LCD.
  lcd.setCursor(0,2); // set the cursor to column 0, line 2
  lcd.print("CMIT"); //Print a message to the LCD.
  delay(3000);
  lcd.clear();
  /* * * * * */
  int i, j;
  for(i = 0; i <= 16; i++){
   for(j = 0; j<= 2; j++){
     lcd.setCursor(i,j);
     lcd.print("~");
     delay(25);
   }
  }
  lcd.clear();
}
