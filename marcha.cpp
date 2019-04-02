#include <iostream>
#include <random>
#include <stdlib.h>

int main()
{
  float x=0;
  float y=0;
  int i;
  float a=0;
  float dy;
  float dx;
    
  srand48(21);

  for (i=0;i<1000;i++)
  {      
      std::cout << x << " " << y << std::endl;
      
      a = (drand48()*2)*3.1416;
      dx = cos(a);
      x = x+dx;
      dy = sin(a);
      y = y + dy;
    
    }
  
  return 0;
}

