#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void xoaXD(char b[])
	{
		size_t len=strlen(b);
		if(b[len-1]=='\n') b[len-1]='\0';
	}
int main()
	{
		int t;
		scanf("%d",&t);
		getchar();
		char s[1000005];
		while(t--)
			{
				fgets(s,sizeof(s),stdin);
					xoaXD(s);
				char *token=strtok(s," ");
				int dem=0;
				while (token!=NULL)
					{
						dem++;
						token=strtok(NULL," ");
					}
				printf("%d\n",dem);
			}
		
	}
