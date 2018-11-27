#include "TP_lib_suite.h" 

int main(void)
{
     	 initialiserTirage();
	 unsigned char j, i, nc = 0, t = 0, score = 0;
	 unsigned char tirage[6];
	 unsigned char joueur[6];
	 
	 for(j=0; j<6; j++)
	 {
		user[j] = tirerNumero();	 
	 }
	 
	 for(t=0; t<100; t++) 
	 {
		 nc = 0;
	 	initialiserTirage();
		
		for(i=0; i<6; i++)
	 	{
			tirage[i] = tirerNumero();	 
		}
	 	
		
		for(j=0; j<6; j++)
	 	{
	   		for (i=0; i<6; i++)  
	  		{	   
	   			if (user[j] == tirage[i])
				{
			  		nc++;
				}	
	   		}
	 	}
		if (nc > score)
		{
			score = nc;	
		}	
	}
	return 0;
}
