#include <stdio.h>
# include <string.h>
#include <stdlib.h>
// chen xau
void xoaXD( char b[])
	{
		size_t len = strlen(b);
		if(b[len-1]=='\n') b[len-1]='\0';
	}
int main()
	{
		char a[35];
		char b[35];
		char c[100];
		fgets(a,35,stdin);
			xoaXD(a);
		fgets(b,35,stdin);
			xoaXD(b);
//		strcpy(c,a);
//		strcat(c,b);
//		printf("%s ",c);
		printf("%s ",a);
		printf("%s",b);
		
	}
