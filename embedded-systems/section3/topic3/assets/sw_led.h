// Switch and LED library
// Robbin Law 2025-01-26

// enum to describe LED indicator positions
// tag values represent actual bit positions
typedef enum LEDColourTypedef__ 
{
  SWL_RED     = 0b10000000,
  SWL_YELLOW  = 0b01000000,
  SWL_GREEN   = 0b00100000,
  SWL_ALL     = 0b11100000
} SWL_LEDColour;

// enum to describe pushbutton switch positions
// tag values represent actual bit positions
typedef enum SwitchPosTypedef__ 
{
  SWL_CTR  = 0b00000001,
  SWL_RIGHT= 0b00000010,
  SWL_DOWN = 0b00000100,
  SWL_LEFT = 0b00001000,
  SWL_UP   = 0b00010000, 
  SWL_ANY = 0b00011111
} SWL_SwitchPos;

//To model switch states as 4 states
typedef enum SwStateTypedef__
{
  Idle,
  Pressed,
  Held,
  Released,
} SwState;

// init port PT1AD1
void SWL_Init (void);

///////////////////////////////////////////////////////////////
// LED functions
void SWL_ON (SWL_LEDColour led);
void SWL_OFF (SWL_LEDColour led);
void SWL_TOG (SWL_LEDColour led);
///////////////////////////////////////////////////////////////
// switch functions

// is a specific switch being pressed
int SWL_Pushed (SWL_SwitchPos pos);

// is any switch being pressed
int SWL_Any (void);

// State of a switch in PT1AD1
SwState Sw_State(SwState* state, SWL_SwitchPos pos);

// Debounce the switch that is pressed or released.
void Delay_ms(unsigned int delay);
int SWL_Pushed_Debounced(SWL_SwitchPos pos);
SwState Sw_State_Debounced(SwState* state, SWL_SwitchPos pos); 

