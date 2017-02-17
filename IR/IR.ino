/*
 * EXAMENSARBETE: REGION ÖSTERGÖTLAND, CMIT/TOI
 * PROJEKT: VERKTYGSLÅDA (INFRARED RECEIVER, 1838T)
 * DATUM: 15/02-2017
 * DNYAZ ALI AHMET
 * ALI-REZA SHAHMOHAMMADI
 */

/*
 * MED EN INFRARÖD MOTTAGARE KAN VI LÄSA AV
 * OLIKA IN-VÄRDEN MED EN INFRARÖD SÄNDARE (FJÄRRKONTROLL)
 */

//Headerfiler med information för avkodning av IR
#include <IRremote.h>
#include <IRremoteInt.h>

//Global definition av IR I/O
#define ir 13

//Funktioner för avkodning & presentering av information
IRrecv irdata(ir);
decode_results results;

void setup() {
  Serial.begin(9600); //Serial monitor för debug syften
  irdata.enableIRIn();  //Starta inläsning av IR-information, sparas i 'irdata'
}

void loop() {
  //Villkor: Om ett värde läses in...
  if(irdata.decode(&results)) {
    Serial.println(results.value, HEX); //Skriver ut IR-datan
    irdata.resume(); //Läs in nästa värde
  }

  /*
   * if(){
   * 
   * }
   */
}
