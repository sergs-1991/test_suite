
// SYSCLK = HCLK =  72 ÌÃö.
// PCLK1  =         36 ÌÃö.
// PCLK2  =         72 ÌÃö.

#define MAIN
#include "main.h"

#include "stm32f10x.h"       
extern uint32_t SystemCoreClock;  //SystemCoreClock - current SYSCLK

// entry-point in C/C++ programm
//===============================================================
int main()
{ 
  int a;
  
  while(1)
  {
    a++;
  }

  //return 0;
}
