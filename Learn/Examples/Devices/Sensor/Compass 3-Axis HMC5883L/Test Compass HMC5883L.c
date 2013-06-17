/*
  Test Compass HMC5883L.c
  
  Test compass with SCL connected to P3 and SDA connected to P2. Display
  measurement results in SimpleIDE Terminal.
  
 learn.parallax.com/propeller-c-simple-devices/sense-direction-compass-hmc5883l
*/
#include "simpletools.h"                      // Include simpletools header
#include "compass3d.h"                        // Include compass3d header

int main()                                    // Main function
{
  int x, y, z;                                // Declare x, y, & z axis variables
  
  i2c bus = i2c_newbus(3, 2);                 // New I2C bus SCL=P3, SDA=P2
  compass_init(bus);                          // Initialize compass on bus.

  while(1)                                    // Repeat indefinitely
  {
    compass_read(bus, &x, &y, &z);            // Compass vals -> variables
    print("%cx=%d, y=%d, z=%d%c\n",           // Display compass variables
           HOME, x, y, z, CLREOL);
    pause(500);                               // Wait 1/2 second
  }
}

