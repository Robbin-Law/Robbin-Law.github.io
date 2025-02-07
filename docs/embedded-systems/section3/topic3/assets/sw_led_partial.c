// Robbin Law 2025-01-26

#include "sw_led.h"
#include "derivative.h"

int SWL_Pushed(SWL_SwitchPos pos){
  int doNotUseDebounce = 1;
  // Set the samples to be different so the while
  // loop will be entered into the first time
  // when using the debounce mechanism.
  unsigned char cSample1 = 1; 
  unsigned char cSample2 = 0;
  if(doNotUseDebounce){
    // Sample all switches only once
    cSample1 = PT1AD1 & 0b00011111;
  }
  else{
    // Only when both samples of the switches are equal
    // before and after a short delay then move on.
    // It is at that time when the switch is stable
    // and not bouncing anymore.
    while (cSample1 != cSample2){
      // Sample all switches
      cSample1 = PT1AD1 & SWL_ANY;
      // Blocking delay for 10 ms
      Delay_ms(10);
      // Sample all switches again
      cSample2 = PT1AD1 & SWL_ANY;
    }
  }  
  // Check the switch/s of interest.
  if(cSample1 & pos)
  {
    return 1;
  }
  return 0;
}

SwState Sw_State(SwState* state, SWL_SwitchPos pos){
  // For this state machine to work properly
  // only one switch can be checked so pos 
  // cannot be SWL_ANY.
  if(SWL_Pushed(pos))
  {
    if((*state == Idle)||(*state == Released))
    {
      *state = Pressed;
    }
    else
    {
      *state = Held;
    }
  }
  else
  {
    if((*state == Pressed)||(*state == Held))
    {
      *state = Released;
    }
    else
    {
      *state = Idle;
    }
  }
  return *state;
}

void Delay_ms(unsigned int delay)
{
  unsigned int loopCount;
  // Predecrement the delay variable then check,
  // if it is anything but 0 enter the loop,
  // if it is 0 break out of the while loop.  
  while(--delay){
    // Calculated value for 1 ms via AD2 oscilloscope is 2665 decimal.
    // Value adjusted, after considering JSR cycles and other overhead to 2659 decimal.
    // This value of 2659 is as close to a 1 ms delay as can be measured.
    loopCount = 2659;
    // Predecrement the loopCount variable then check,
    // if it is anything but 0 loop again,
    // if it is 0 break out of the while loop.  
    while(--loopCount);      
  }
}