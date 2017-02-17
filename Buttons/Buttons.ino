/*
 * EXAMENSARBETE: REGION ÖSTERGÖTLAND, CMIT/TOI
 * PROJEKT: VERKTYGSLÅDA (BUTTONS)
 * DATUM: 14/02-2017
 * DNYAZ ALI AHMET
 * ALI-REZA SHAHMOHAMMADI
 */

/*
 * MED TRE KNAPPAR KAN VI FÅ UT 7 OUTPUTS
 * -- 3 INPUT [AND/&&] OPERATION --
 *    0 0 0   = 0
 *    0 0 1   = 1
 *    0 1 0   = 2
 *    0 1 1   = 3
 *    1 0 0   = 4
 *    1 0 1   = 5
 *    1 1 0   = 6
 *    1 1 1   = 7
 */

//Globala definitioner av knapparnas I/O
#define btn1 2
#define btn2 3
#define btn3 4

void setup() {
  Serial.begin(9600); //Serial monitor för debug syften
  
  //Definera knapparnas input-pinnar med pull-upp resistorer 
  pinMode(btn1, INPUT_PULLUP);
  pinMode(btn2, INPUT_PULLUP);
  pinMode(btn3, INPUT_PULLUP);
}

void loop() {
  //Initialisera den digitala inläsningen
  int btn1State = digitalRead(btn1);
  int btn2State = digitalRead(btn2);
  int btn3State = digitalRead(btn3);


  //Villkorssats(er) för knapparnas OUTPUT
  // 0 0 1 = OUTPUT1
  if(btn3State != LOW && btn2State != LOW && btn1State != HIGH){
    Serial.println("Button 1 pressed!");
  }
  // 0 1 0 = OUTPUT2
  else if(btn3State != LOW && btn2State != HIGH && btn1State != LOW){
    Serial.println("Button 2 pressed!");
  }
  // 0 1 1 = OUTPUT3
  else if(btn3State != LOW && btn2State != HIGH && btn1State != HIGH){
    Serial.println("Button 1, 2 pressed!");
  }
  // 1 0 0 = OUTPUT4
  else if(btn3State != HIGH && btn2State != LOW && btn1State != LOW){
    Serial.println("Button 3 pressed!");
  }
  // 1 0 1 = OUTPUT5
  else if(btn3State != HIGH && btn2State != LOW && btn1State != HIGH){
    Serial.println("Button 1, 3 pressed!");
  }
  // 1 1 0 = OUTPUT6
  else if(btn3State != HIGH && btn2State != HIGH && btn1State != LOW){
    Serial.println("Button 2, 3 pressed!");
  }
  // 1 1 1 = OUTPUT7
  else if(btn1State != HIGH && btn2State != HIGH && btn3State != HIGH){
    Serial.println("Button 1, 2, 3 pressed!");
  }
  /*
  // 0 0 0
  else {
    Serial.println("No button pressed...");
  }*/
}
