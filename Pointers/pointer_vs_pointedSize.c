#include<stdio.h>
#include<string.h>
#include<stdint.h>			//for uint8_t and uint32_t data types

int main()
{
	uint8_t data1[] = {0x10, 0x20, 0x30, 0x40};
	uint8_t *pTxBuffer = data1;

	// Access individual bytes via the pointer
	printf("%x\n", *pTxBuffer);   // Outputs: 0x10
	pTxBuffer++;                  // Moves to the next byte - 1 step of incement due to uint8_t type pointer
	printf("%x\n", *pTxBuffer);   // Outputs: 0x20

	printf("\n\n");

	// Access of data using uint32_t data pointer
	uint32_t data2[] = {0x10, 0x20, 0x30, 0x40};
	uint32_t *pDataBuffer = data2;
	printf("%x\n", *pDataBuffer);   // Outputs: 0x10
	pDataBuffer++;                  // Moves to the next byte - 1 step of incement due to uint8_t type pointer
	printf("%x\n", *pDataBuffer);   // Outputs: 0x20

	return 0;

} //eo main::
