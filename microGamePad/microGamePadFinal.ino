//The following keyboard registers a total of 14 keys. 
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
  O,
  L,
  P,
  semi,
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
  6, // U
  7, // J
  8, // I
  9, // K
  10, //O
  14, //L
  15, //P
  16, //;
  0,  // SELECT
  1,  // START
};

// Maps button to keyboard key
const char KEYS[] = {
  'a',   // UP
  'w', // RIGHT
  's',  // DOWN
  'd',  // LEFT
  'u',             // U
  'j',             // J
  'i',             // I
  'k',             // K
  'o',             // O
  'l',             // L
  'p',             // P
  ';',             //;
  KEY_RETURN,      // SELECT
  ' ',             // START
};

// Store previous state of keys
bool STATES[NUM_KEYS];


// Initialize
void setup() {
  Keyboard.begin();
  for (int i = 0; i < NUM_KEYS; i++) {
    pinMode(PINS[i], INPUT_PULLUP);
    STATES[i] = digitalRead(PINS[i]);
  }
}

// Main loop
void loop() {
  bool state;
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
