#include <stdio.h>
#include <string.h>
int main()
	{
		char c[10000];
		fgets(c,sizeof(c),stdin);
		char b[100];
		scanf("%s",b);
		char *token=strtok(c," ");
		while(token!=NULL)
			{
				if(strcmp(token,b)!=0) printf("%s ",token);
				token=strtok(NULL," ");
			}
	}