#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
void xoaXD(char c[])
	{
		size_t len=strlen(c);
		if(c[len-1]=='\n') c[len-1]='\0';	
	}
int main()
	{
		char c[100000];
		fgets(c,100000,stdin);
		xoaXD(c);
		printf("%d",strlen(c)-1);
		
	}