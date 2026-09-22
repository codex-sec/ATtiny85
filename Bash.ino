#include <DigiKeyboard.h>

void setup() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(3000); // PC connect hone ka wait

  // 1. Win + R dabayein (Run menu ke liye)
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);

  // 2. Chrome aur YouTube link type karein
  DigiKeyboard.print("chrome https://m.youtube.com/watch?v=_87sQk_Ybsk");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void loop() {
  // Loop khali rahega kyunki code sirf ek baar chalna chahiye
}
