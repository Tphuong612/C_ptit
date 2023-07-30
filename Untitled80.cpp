#include <stdio.h>
#include <string.h>
void xoaXuongDong(char c[])
	{
		size_t len=strlen(c);
		if(c[len-1]='\n') c[len-1]='\0';
	}
int main()
	{
		char s1[255];
		fgets(s1,sizeof(s1),stdin);
		xoaXuongDong(s1);
		char s2[255];
		fgets(s2,sizeof(s2),stdin);
		xoaXuongDong(s2);
		
		
	}