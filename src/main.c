#include <ansi_c.h>
#include "my_header.h"

int main(void)
{
	
	char nom[100];
	char prenom[100];
	char ans[100];
	
	
	scanf("%s", nom);
	scanf("%s", prenom);
	 scanf("%s", ans);
	
	printf("%s %s, j'ai %s", nom, prenom, ans);
	
	return 0;
}
