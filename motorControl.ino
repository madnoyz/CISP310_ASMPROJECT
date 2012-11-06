/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
int forward = 13;
int backward = 15;
int left = 14;
int right = 12;
void move(int dir1,int dur,int dir2){
  digitalWrite(dir1, HIGH);
  digitalWrite(dir2, HIGH);
  delay(dur);
  digitalWrite(dir1, LOW);
  digitalWrite(dir2, LOW);
}

void setup() {                
  // initialize the digital pin as an output.
  // Pin 14 has an LED connected on most Arduino boards:
  pinMode(forward, OUTPUT);
  pinMode(backward, OUTPUT); 
  pinMode(left, OUTPUT); 
  pinMode(right, OUTPUT); 
}

void loop() {
  digitalWrite(right, HIGH);
  delay(1000);
  digitalWrite(right, LOW);
  delay(1000);
  digitalWrite(left, HIGH);
  delay(1000);
  digitalWrite(left, LOW);
  //make irdetect bool equal true
  // if button is pressed
  /*
  if(IRdetect){
    move(BACK);
    delay(500);
    turn(left);
    move(forward);
  }
  */
}
