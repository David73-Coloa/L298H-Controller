#include <L298H.h>
L298H both;

void setup() {
  both.setSpeed(65);
  both.Pinout(8,7,4,3,5,6);
}

void loop() {
   both.goToLeft();
   delay(3000);
   both.Stop();
   delay(5000);
   both.goToFront();
   delay(2000);
   both.Stop();

}
