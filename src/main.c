#include <ansi_c.h>
#include <stdint.h>
#include <time.h>
#include "stdlib.h"

int main(void)
{
	
	int a[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int i = ((rand())%10);
	
	int b[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int j = ((rand())%10);
	
	unsigned long long c[10] = {0.01, 0.1, 1, 10, 100, 1000, 10000, 100000, 1000000, 10000000};
	int k = ((rand())%10);

	unsigned long res = 0;
	
	int couleur[noir, marron
	
	/*noir = 0;
	marron = 1;
	rouge = 2;
	orange = 3;
	jaune = 4;
	vert = 5;
	bleu = 6;
	violet = 7;
	gris = 8;
	blanc = 9;
	or = 0.1;*/
	
	
	while(1)
	{
		
		res = (10 * a[i] + b[j]) * c[k];
		
		if(res<1 || res>99000000)
			res = -1;
		else
			res = res;
		
		scanf("%s", i);
		scanf("%s", j);
		scanf("%s", k);
		
		
		
		
		srand (time(NULL));
		i = rand()%9;
		j = rand()%10;
		k = rand()%10;
		
		
	}

}
