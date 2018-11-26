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
	
	
	int output_dist[10] = {rand()-16384, rand()-16384, rand()-16384, rand()-16384, rand()-16384, rand()-16384, rand()-16384, rand()-16384, rand()-16384, rand()-16384};
	
	
	unsigned char n;
	int a[5] = {10,9,7,6,5};
	int b[5];
	
	
	int p = 5;
	int mirror[6] = {0, 2, 4, 6, 8, 10};
	unsigned char n_;
	
	
	
	
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
	
	
	
	
	for(i=1; i<10; i++)
	{
		output_dist[i] = dist[i] - dist[i-1];
	}
	
	
	
	
	for(n=0; n<5; n++)
	{
		b[n] = a[4-n];
	}
	
	
	
	
	for(n_=0; n_< 6/2; n_++)
	{
		mirror[N_] = mirror[p]; p = p - 1;
	}
	
		return 0;
}
