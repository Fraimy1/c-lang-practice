#include <stdio.h>

int main(void)
{
	int x, y, z, zond_checksum, zond_parity_bit;
	scanf("%d %d %d %d %d", &x, &y, &z, &zond_checksum, &zond_parity_bit);

	int checksum = 7*x + 11*y + 14*z;
	int parity_bit = (x + y + z + checksum) % 2 != 0;

	if ((checksum != zond_checksum) && (parity_bit != zond_parity_bit)) 
	{
		printf("DATA_CORRUPTED");
	}else if (checksum != zond_checksum)
	{
		printf("CHECKSUM_ERROR");
	}else if (parity_bit != zond_parity_bit)
	{
        printf("PARITY_ERROR");
	}else 
	{
		printf("TRANSMISSION_OK");
	}
	return 0;
}