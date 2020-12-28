#include <Keyboard.h>

// These are used as indices to other arrays
enum {
  //direction (4)
  A,
  W,
  S,
  D,
  //Buttons (8)
  U,
  J,
  I,
  K,
  //start and select (2)
  SELECT,
  START,
  // Number of keys
  NUM_KEYS,
};

// Maps button index to digital pin
const int PINS[] = {
  2,  // A
  3,  // W
  4,  // S
  5,  // D
  14, // U
  10, // J
  16, // I
  15, // K
  9,  // SELECT
  8,  // START
};

// Maps button to keyboard key
const char KEYS[] = {
  'a',   // UP
  'w', // RIGHT
  's',  // DOWN
  'd',  // LEFT
  'u',             // A
  'j',             // Z
  'i',             // X
  'k',             // S
  KEY_RETURN,      // SELECT
  ' ',             // START
};

// Store previous state of keys
bool STATES[NUM_KEYS];

// Left and right LED pins
#define LED0 7
#define LED1 6

// Initialize
void setup() {
  Keyboard.begin();
  for (int i = 0; i < NUM_KEYS; i++) {
    pinMode(PINS[i], INPUT_PULLUP);
    STATES[i] = digitalRead(PINS[i]);
  }
  pinMode(LED0, OUTPUT);
  pinMode(LED1, OUTPUT);
}

// Main loop
void loop() {
  bool state;
  // Flash LEDs
  const unsigned long t = millis();
  digitalWrite(LED0, (t / 1000) % 2 == 0 ? HIGH : LOW);
  digitalWrite(LED1, (t / 1000) % 2 == 0 ? LOW : HIGH);
  // Process each key
  for (int i = 0; i < NUM_KEYS; i++) {
    state = digitalRead(PINS[i]);
    if (STATES[i] != state) {
      if (state == LOW) {
        Keyboard.press(KEYS[i]);
      } else {
        Keyboard.release(KEYS[i]);
      }
      STATES[i] = state;
    }
  }
}
