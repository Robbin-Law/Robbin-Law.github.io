// Real Time Interrupt
// Robbin Law
// 2025-03-03

// This variable has to be declared as 
// a global variable in rti.c (without the extern keyword)
extern volatile unsigned long rtiMasterCount;

void RTI_Init(void);
void RTI_Delay_ms(unsigned long delay);

