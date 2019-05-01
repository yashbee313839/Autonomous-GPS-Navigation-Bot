#include <Wire.h>
#include <QMC5883L.h>

int x, y, z;
const float declinationAngle = 0.0404;

QMC5883L compass;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Wire.begin();
  compass.init();
}

void loop() {
  // put your main code here, to run repeatedly:
  compass.read(&x,&y,&z);
  float heading = atan2(y, x);
  heading += declinationAngle;
  if(heading < 0)
    heading += 2*PI;
  if(heading > 2*PI)
    heading -= 2*PI;
  heading = heading * 180/M_PI; 
  Serial.print(F("heading: ")); Serial.println(heading);
}
