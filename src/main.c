#include <math.h>

#define SEUIL 26

int main(void)
{
	unsigned char bin[10] = {17, 19, 21, 23, 25, 27, 29, 31, 33, 35};
	char i;
	
	for(i=0; i<SEUIL; i++)
	{
		if(bin[i] < SEUIL)
			bin[i] = 0;
		
		else
			bin[i] = 1;
	}
	
	return 0;
}
