#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
void xoaXD(char c[])
	{
		size_t len=strlen(c);
		for(int i=0;i<len;i++)
			if(c[len-1]=='\n') c[len-1]='\0'; 
	}
void chuanhoa(char c[])
	{
		c[0]=toupper(c[0]);
		for(int i=1;i<strlen(c);i++)
			{
				c[i]=tolower(c[i]);
			}
	}
int main()
	{
		int t;
		scanf("%d",&t);
		getchar();
		while(t--)
			{
				char c[1000],a[30][50];
				fgets(c,1000,stdin);
				xoaXD(c);
				char *token=strtok(c," ");
				int n=0;
				while(token!=NULL)
					{
						strcpy(a[n],token);
						n++;
						token=strtok(NULL," ");
					}
				for(int i=0;i<n;i++)
					{
						chuanhoa(a[i]);
						printf("%s ",a[i]);
					}
				printf("\n");
			
			}
		
	}