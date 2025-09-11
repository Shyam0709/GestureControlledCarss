#include <Wire.h>
#include <MPU6050.h>
#include <VirtualWire.h>

MPU6050 mpu;

void setup() {
  Serial.begin(9600);
  Wire.begin();
  mpu.initialize();
  vw_set_tx_pin(12);  
  vw_setup(2000);     
}

void loop() {
  int16_t ax, ay, az, gx, gy, gz;
  mpu.getMotion6(&ax, &ay, &az, &gx, &gy, &gz);

  char *msg;

  if (ay > 10000) {
    msg = "F";
  } else if (ay < -10000) { 
    msg = "B";
  } else if (ax > 10000) {
    msg = "R";
  } else if (ax < -10000) { 
    msg = "L";
  } else {
    msg = "S"; 
  }

  vw_send((uint8_t *)msg, strlen(msg));
  vw_wait_tx(); 
  delay(100);
}
