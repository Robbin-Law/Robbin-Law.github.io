// Clock-System
// Robbin Law
// 2025-02-25

#define DEF_BUS_CLOCK 8000000

typedef enum ClockDivTypedef
{
    ClockOutDiv1 = 0b00000000,
    ClockOutDiv2 = 0b00000001,
    ClockOutDiv3 = 0b00000010,
    ClockOutDiv4 = 0b00000011
} ClockOutDiv;

void Clock_Set2MHZ(void);
void Clock_Set8MHZ(void);
void Clock_Set20MHZ(void);
void Clock_EnableOutput(ClockOutDiv div);
unsigned long Clock_GetBusSpeed(void);
