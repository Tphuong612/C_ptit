#include <stdio.h>
#include <string.h>
#include <conio.h>
void xoaXuongdong(char c[90])
	{
		size_t len=strlen(c);
		if(c[len-1]=='\n') c[len-1]='\0';
	}
void vietthuong(char c[90])
	{
		for(int i=0;i<strlen(c);i++)
			{
				if(c[i]>=65&&c[i]<=90) c[i]=c[i]+32;
			}
	}
int main()
{
//	int t;
//	scanf("%d",&t);
//	getchar();
//	for(int i=1;i<=t;i++)
//		{
			char c[90];
			fgets(c,90,stdin);
			xoaXuongdong(c);
			vietthuong(c);
			printf("%s",c);
//		}
			
}