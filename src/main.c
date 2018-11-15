#include <math.h>
#include "stdlib.h"

#define RAND_MAX 32767

int main(void)
{
	int n=1;
	long S1=0;
	
	int a = ((rand())%10)+1;
	int i = 0;
	int sum = 0;
	
	int c = 1;
	int b = 0;
	int dam = 0;

	
	 while(3*n <9876){
		
		S1 = S1 + 3 * n;
		n = n+1;
	}
	
	while (i<12){
		
		sum = sum + a;
		i = i + 1;
		a = ((rand())%10)+1;
	}
	
	while (b<20){
		
		if (c%3==0 || c%7==0){
			dam = dam + c;
			c = c + 1;
			b = b+1;
		}
		else
			c = c+1;
	}
	
	return 0;
}
