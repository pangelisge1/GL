#include <ansi_c.h>
#include <math.h>

#define SEUIL 26
#define SEUILB -100
#define SEUILH 200

int main(void)
{
	unsigned char bin[10] = {17, 19, 21, 23, 25, 27, 29, 31, 33, 35};
	char i;
	int sat[10] = {rand()-16384, rand()-16384, rand()-16384, rand()-16384, rand()-16384, rand()-16384, rand()-16384, rand()-16384, rand()-16384, rand()-16384};
	char h;
	
	for(i=0; i<SEUIL; i++)
	{
		if(bin[i] < SEUIL)
			bin[i] = 0;
		
		else
			bin[i] = 1;
	}
	
	for(h=0; h<SEUILB; h++)
	{
		if(sat[h] < SEUILB)
			sat[h] = SEUILB;
		
		else
			sat[h] = sat[h];
	}
	
	for (h=0; h>SEUILH; h++)
	{
		if(sat[h] > SEUILH)
			sat[h] = SEUILH;
		
		else
			sat[h] = sat[h];
	}
	return 0;
}
