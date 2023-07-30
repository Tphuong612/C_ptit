#include <stdio.h>
#include <string.h>
void xoaXuongDong (char c[])
	{
		size_t len=strlen(c);
		if(c[len-1]='\n') c[len-1]='\0';
	}
int KTthuannghich (char c[])
	{
		for(int i=0;i<strlen(c)/2;i++)
			{
				if(c[i]!=c[strlen(c)-i-1]) return 0;
			}
		return 1;
	}
int KTchan (char c[])
	{
		for(int i=0;i<strlen(c);i++)
			{
				if(c[i]%2==1) return 0;
			}
		return 1;
	}
int main()
	{
		int t;
		scanf("%d",&t);
		getchar();
		for(int i=1;i<=t;i++)
			{
				char c[505];
				fgets(c,sizeof(c),stdin);
				xoaXuongDong(c);
				if(KTthuannghich(c)==1&&KTchan(c)==1) printf("YES\n");
				else printf("NO\n");
			}
	}