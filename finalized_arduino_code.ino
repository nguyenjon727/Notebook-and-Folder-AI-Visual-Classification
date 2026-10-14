
// Each segment is a bar on the display
const int top_bar = 7;
const int top_right_bar = 6;
const int bottom_right_bar = 5;
const int bottom_bar = 11;
const int bottom_left_bar = 10;
const int top_left_bar = 8;
const int middle_bar = 9;


void setup() {
  for (int pinNum = 5; pinNum <=11; pinNum++) {
    pinMode(pinNum, OUTPUT);
  }

  Serial.begin(9600);
  
}

void loop() {
// Message obtained from image model
 if (Serial.available()) {
    String message = Serial.readStringUntil('\n');
    message.trim();

  // Number shown on 7-seg display depends on the message from model
  if(message == "0") {
    digital_0();
    
  }
  else if(message == "1") {
    digital_1();
    
  }
  else {
    digital_2();
  }
 }
}

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
