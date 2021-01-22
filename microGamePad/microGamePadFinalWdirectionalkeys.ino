//The following code uses the directional keys this is more suited to naviagate in steam
#include <Keyboard.h>
// These are used as indices to other arrays
enum {
  //direction (4)
  RIGHT,
  LEFT,
  UP,
  DOWN,
  //Buttons (6)
  A,
  Z,
  S,
  X,
  D,
  C,
  F,
  V,
  //start and select (2)
  ENTER,
  ESC,
  // Number of keys
  NUM_KEYS,
};

// Maps button index to digital pin
const int PINS[] = {
  2,  // LEFT
  3,  // RIGHT
  4,  // Up
  5,  // Down
  6, // A
  7, // Z
  8, // S
  9, // X
  10, //D
  14, //C
  15, //F
  16, //V
  0,  // ENTER
  1,  // ESC
};

// Maps button to keyboard key
const char KEYS[] = {
  KEY_LEFT_ARROW, // LEFT
  KEY_RIGHT_ARROW,  // RIGHT
  KEY_UP_ARROW,    // UP
  KEY_DOWN_ARROW,  // DOWN
  'a',             // A
  'z',             // Z
  's',             // S
  'x',             // X
  'd',             // D
  'c',             // C
  'f',             // F
  'v',             // V
  KEY_RETURN,      // SELECT
  KEY_ESC,             // START
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
