/* 
  Array Variables.c  
   
  Declare and initialize an array and display a couple of its slements.
  
  http://learn.parallax.com/propeller-c-start-simple/array-variables
*/

#include "simpletools.h"                      // Include simpletools

int main()                                    // main function
{
  int p[] = {1, 2, 3, 5, 7, 11};              // Initialize the array
  pause(1000);                                // Wait 1 s for host
  print("p[0] = %d\n", p[0]);                 // Display what p[0] stores
  print("p[3] = %d\n", p[3]);                 // display what p[3] stores
}