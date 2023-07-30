#include <stdio.h>
#include <string.h>
void xoaXuongDong(char c[])
	{
		size_t len=strlen(c);
		if(c[len-1]='\n') c[len-1]='\0';
	}
int main()
	{
		char c[255];
		fgets(c,sizeof(c),stdin);
		xoaXuongDong(c);
		int dem1=0,dem2=0,dem3=0;
		for(int i=0;i<strlen(c);i++)
			{
				if(c[i]>=48&&c[i]<=57) dem2++;
				else if((c[i]>=65&&c[i]<=90)||(c[i]>=97&&c[i]<=122)) dem1++;
				else dem3++;
			}
		printf("%d %d %d",dem1,dem2,dem3);
	}