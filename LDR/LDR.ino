/*
 * EXAMENSARBETE: REGION ÖSTERGÖTLAND, CMIT/TOI
 * PROJEKT: VERKTYGSLÅDA (LDR, GM5516)
 * DATUM: 15/02-2017
 * DNYAZ ALI AHMET
 * ALI-REZA SHAHMOHAMMADI
 */

/*
 * MED EN LDR KAN VI REGLERA OLIKA OUTPUTS
 * BEROENDE PÅ LJUSETS INPUT (FYSISKA STORHET)
 */
 
//Global definition av LDR I/O
#define ldr A5

void setup() {
  Serial.begin(9600); //Serial monitor för debug syften

  //Definera ldr's input-pinne
  pinMode(ldr, INPUT);
}

void loop() {
  int ldrVal = analogRead(ldr); //Analoga värdet sparas i en variabel 

  Serial.println(ldrVal); //Skriver ut det analoga värdet
  delay(500); //Fördröjning; 500ms
}
