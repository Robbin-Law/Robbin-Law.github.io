// Switch and LED library
// Robbin Law 2025-01-26

// enum to describe LED indicator positions
// tag values represent actual bit positions
typedef enum LEDColour 
{
  SWL_RED     = 0b10000000,
  SWL_YELLOW  = 0b01000000,
  SWL_GREEN   = 0b00100000,
  SWL_ALL     = 0b11100000
} SWL_LEDColour;

// enum to describe pushbutton switch positions
// tag values represent actual bit positions
typedef enum SwitchPos
{
  SWL_CTR  = 0b00000001,
  SWL_RIGHT= 0b00000010,
  SWL_DOWN = 0b00000100,
  SWL_LEFT = 0b00001000,
  SWL_UP   = 0b00010000, 
  SWL_ANY = 0b00011111
} SWL_SwitchPos;

// option to add debounce in switch state checks
typedef enum DebounceOption
{
  SWL_DebOff,
  SWL_DebOn
} DebounceOption;

//To model switch states as 4 states
typedef enum SwState
{
  Idle,
  Pressed,
  Held,
  Released,
} SwState;

// init port PT1AD1
void SWL_Init (void);
// LED functions
void SWL_ON (SWL_LEDColour led);
void SWL_OFF (SWL_LEDColour led);
void SWL_TOG (SWL_LEDColour led);
// Is switch/s being pressed
int SWL_Pushed (SWL_SwitchPos pos, DebounceOption deb);
// State of a switch (pos cannot be SWL_ANY)
SwState Sw_State(SwState* state, SWL_SwitchPos pos);
// Debounce blocking delay
void Delay_ms(unsigned int delay);

