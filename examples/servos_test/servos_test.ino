#include "esp_servo.h"

static em::EspServo* const g_servos[] = {
    new em::EspServo(25),
    new em::EspServo(26),
    new em::EspServo(32),
};

void setup() {
  Serial.begin(115200);
  printf("setup\n");
  for (auto servo : g_servos) {
    servo->Init();
  }
}

void loop() {
  for (auto servo : g_servos) {
    servo->Write(0);
  }
  printf("write 0\n");
  delay(1000);

  for (auto servo : g_servos) {
    servo->Write(90);
  }
  printf("write 90\n");
  delay(1000);

  for (auto servo : g_servos) {
    servo->Write(180);
  }
  printf("write 180\n");
  delay(1000);

  for (auto servo : g_servos) {
    servo->Write(90);
  }
  printf("write 90\n");
  delay(1000);
}