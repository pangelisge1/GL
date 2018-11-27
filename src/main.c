#include <stdlib.h>
#include "TP_lib_suite.h"

int main(void)
{
	unsigned char joueur[6] = {30, 12, 2, 21, 5, 16};
	unsigned char gagnant[6] = {27, 18, 7, 3, 41, 13};
	unsigned char i, j;
	int g=0;
    
	for (j=0; j<N; j++)
	{
		for (i=0; i<N; i++)
		{
			if (gagnante[j] == joueur[i])
				g++;
	
		}					  
	}
	
    return 0;
}
