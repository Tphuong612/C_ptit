#include <stdio.h>
#include <string.h>
int main()
	{
		char c[100000];
		fgets(c,sizeof(c),stdin);
		printf("%d",strlen(c)-2);
		return 0;
	}