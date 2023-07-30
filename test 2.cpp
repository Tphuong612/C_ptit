#include <stdio.h>
#include <string.h>
void xoaXuongDong (char c[])
	{
		size_t len=strlen(c);
		if(c[len-1]='\n') c[len-1]='\0';
	}
int main ()
	{
		char c[255];
		fgets(c,sizeof(c),stdin);
		xoaXuongDong(c);
		size_t len=strlen(c);
		printf("%d\n",len);
		for(int i=0;i<strlen(c);i++)
			{
				if(c[i]!='2'&&c[i]!='3'&&c[i]!='5'&&c[i]!='7') printf("0");break;
			}
		printf("1");
	
	}