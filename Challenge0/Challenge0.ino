/*
   Christine Low
   Challenge #0
   Individual Evaluation Assignment
*/
#define LED0 1 // Bit 0 LED
#define LED1 2 // Bit 1 LED
#define LED2 3 // Bit 2 LED
void setup() {
  // set output pins for LEDs
  pinMode(LED0, OUTPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);

  // initialize all LEDs off (display 0)
  digitalWrite(LED0, LOW);
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
}

int bitOneCount = 1;  // count to keep track of toggling bit 1 LED
int bitTwoCount = 1;  // count to keep track of toggling bit 2 LED

void loop() {
  //delay between lighting up LEDs
  delay(1000);

  // Toggle Bit 0 LED
  digitalWrite(LED0, !digitalRead(LED0));

  // Toggle Bit 1 LED
  if ( bitOneCount == 2 ) {
    digitalWrite(LED1, !digitalRead(LED1));
    bitOneCount = 0;
  }

  // Toggle Bit 2 LED
  if ( bitTwoCount == 4 ) {
    digitalWrite(LED2, !digitalRead(LED2));
    bitTwoCount = 0;
  }

  bitOneCount++;
  bitTwoCount++;
}
