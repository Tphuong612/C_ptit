#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
char c[100],a[50][50];
void thuong(char c[])
	{
		for(int i=0;i<strlen(c);i++)
			c[i]=tolower(c[i]);
	}
int main()
	{
		gets(c);
		thuong(c);
		char *token=strtok(c," ");
		int n=0;
		while(token!=NULL)//tach tu
			{
				strcpy(a[n],token);
				++n;
				token=strtok(NULL," ");
			}
		for(int i=0;i<n-1;i++)
			printf("%c",a[i][0]);
		printf("%s@ptit.edu.vn",a[n-1]);
	}