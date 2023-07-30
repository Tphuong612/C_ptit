#include <stdio.h>
#include <string.h>
#include <stdbool.h>
char c[20];
bool kt1(char c[])
	{
		if (c[6]<c[7]&&c[7]<c[8]&&c[8]<c[10]&&c[10]<c[11]) return true;
		else return false;
	}
bool kt2(char c[])
	{
		
		if(c[6]==c[7]&&c[7]==c[8]&&c[10]==c[11]) return true;
		else return false;
		
	}
bool kt3(char c[])
	{
		if(c[6]!='6'&&c[6]!='8') return false;
		if(c[7]!='6'&&c[7]!='8') return false;
		if(c[8]!='6'&&c[8]!='8') return false;
		if(c[10]!='6'&&c[10]!='8') return false;
		if(c[11]!='6'&&c[11]!='8') return false;
		return true;
	}
int main()
{
	int t;
	scanf("%d",&t);
	getchar();
	for(int i=1;i<=t;i++)
		{
			gets(c);
			if(kt1(c)||kt2(c)||kt3(c)) printf("YES\n");
			else printf("NO\n");
		}
}