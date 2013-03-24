/*
  Floating Point Calculations.c
  
  Calculate and display circumference of a circle of radius = 1.0.
  
  http://learn.parallax.com/propeller-c-start-simple/floating-point-math
*/

#include "simpletools.h"                      // Include simpletools header

const float PI = 3.141592653589793;           // Approximate value of pi

int main()                                    // Main function
{
  pause(1000);                                // Wait 1 s for host computer
  float r = 1.0;                              // Set radius to 1.0
  float c = 2.0 * PI * r;                     // Calculate circumference
  printf("circumference = %f \n", c);         // Display circumference
}
