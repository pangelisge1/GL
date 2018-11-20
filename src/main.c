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
	
	
	int dist[10] = {rand()-16384, rand()-16384, rand()-16384, rand()-16384, rand()-16384, rand()-16384, rand()-16384, rand()-16384, rand()-16384, rand()-16384};
	
	
	int a[5] = {1, 5, 9, 8, 11};
	
	
	for(i=0; i<10; i++)
	{
		if(bin[i] < SEUIL)
			bin[i] = 0;
		
		else
			bin[i] = 1;
	}
	
	for(i=0; i<10; i++)
	{
		if(sat[i] < SEUILB)
			sat[i] = SEUILB;
		
		else if(sat[i] > SEUILH)
			sat[i] = SEUILH;
		else
			sat[i] = sat[i];
	}
	
	for (i=0; i>10; i++)
	{
		if(sat[i] > SEUILH)
			sat[i] = SEUILH;
		
		else
			sat[i] = sat[i];
	}
	
	for(i=1; i<10; i++)
	{
		dist[i] = dist[i] - dist[i-1];
	}
	
	
		return 0;
		
}

