#include <ansi_c.h>
#include <math.h>

#define SEUIL 26
#define SEUILB -100
#define SEUILH 200

int main(void)
{
	char i; 
	
	unsigned char bin[10] = {17, 19, 21, 23, 25, 27, 29, 31, 33, 35};
	
	
	int sat[10] = {rand()-16384, rand()-16384, rand()-16384, rand()-16384, rand()-16384, rand()-16384, rand()-16384, rand()-16384, rand()-16384, rand()-16384};
	
	
	int dist[10] = {rand()-16384, rand()-16384, rand()-16384, rand()-16384, rand()-16384, rand()-16384, rand()-16384, rand()-16384, rand()-16384, rand()-16384};
	
	
	unsigned char N;
	int a[5] = {10,9,7,6,5};
	int b[5];
	
	
	int p = 5;
	int mirror[6] = {0, 2, 4, 6, 8, 10};
	unsigned char N_;
	
	
	
	
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
	
	
	
	
	for(N=0; N<5; N++)
	{
		b[N] = a[4-N];
	}
	
	
	
	
	for(N_=0; N_<5; N_++)
	{
		mirror[N_] = mirror[N_ + p];
		p = p - 2;
	}
	
		return 0;
}
