#include <stdio.h>
#include <string.h>
int main()
	{
		char c[100000];
		fgets(c,sizeof(c),stdin);
		char *token=strtok(c," ");
		int dem=0;
		while(token!=NULL)
			{
				dem++;
				token=strtok(NULL," ");
			}
		printf("%d",dem);
	}