
// SYSCLK = HCLK =  72 ���.
// PCLK1  =         36 ���.
// PCLK2  =         72 ���.

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
