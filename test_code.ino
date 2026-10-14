// Each segment is a bar on the display
const int top_bar = 7;
const int top_right_bar = 6;
const int bottom_right_bar = 5;
const int bottom_bar = 11;
const int bottom_left_bar = 10;
const int top_left_bar = 8;
const int middle_bar = 9;

// Turns on each bar or segment based on the respected number.
void digital_0() {
  turnOffAllSegments();
  digitalWrite(top_bar, HIGH);
  digitalWrite(top_right_bar, HIGH);
  digitalWrite(bottom_right_bar, HIGH);
  digitalWrite(bottom_bar, HIGH);
  digitalWrite(bottom_left_bar, HIGH);
  digitalWrite(top_left_bar, HIGH);
}

void digital_1() {
  turnOffAllSegments();
  digitalWrite(top_right_bar, HIGH);
  digitalWrite(bottom_right_bar, HIGH);
}

void digital_2()  
{
  turnOffAllSegments();
  digitalWrite(top_bar, HIGH);
  digitalWrite(top_right_bar, HIGH);
  digitalWrite(middle_bar, HIGH);
  digitalWrite(bottom_left_bar, HIGH);
  digitalWrite(bottom_bar, HIGH);
}

// Turn off all segments of the 7-seg display
void turnOffAllSegments() {
  for (int thisPin = 5; thisPin <= 11; thisPin++) {
    digitalWrite(thisPin, LOW);
  }
}

void setup() {
int i;
for (i=5; i <=11; i++) {
  pinMode(i,OUTPUT);
}
}

// loop that cycles and displays the numbers 0,1, and 2
void loop() {
turnOffAllSegments();

digital_0(); 
delay(2000); 

      
digital_1(); 
delay(2000); 


digital_2();
delay(2000); 


}
