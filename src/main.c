#include <TP_lib.h>

int main(void){
	
	short int LancerDe (void);
	short res;
	long val=0;
	
	do {
		res = LancerDe();
		
		if (res == 2)
			val= val+2;
		
		else if (res == 4)
			val= val+4;
		
		else if (res == 6)
			val= val+6;
		
		else if (res == 3)
			val= val*2;
		
		else if (res == 5)
			val= val-2;
		
	}while(res!=1);
	
	return 0;
}
