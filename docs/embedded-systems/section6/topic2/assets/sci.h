// Serial Communications Interface
// Robbin Law
// 2025-03-08

#define BUFFER_SIZE 64

void SCI_Init(void);
void sci0_txByte (unsigned char byte);
void sci0_txStr (unsigned char* strIndex);
unsigned char sci0_rxByte(unsigned char* pRxByte);