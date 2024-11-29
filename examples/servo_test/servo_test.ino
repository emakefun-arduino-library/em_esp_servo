#include "esp_servo.h"

static em::EspServo g_servo(25);

void setup() {
  Serial.begin(115200);
  printf("setup\n");
  g_servo.Init();
}

void loop() {
  g_servo.Write(0);
  printf("write 0\n");
  delay(1000);

  g_servo.Write(90);
  printf("write 90\n");
  delay(1000);

  g_servo.Write(180);
  printf("write 180\n");
  delay(1000);

  g_servo.Write(90);
  printf("write 90\n");
  delay(1000);
}