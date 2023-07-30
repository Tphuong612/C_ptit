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
int KTso8 (char c[])
	{
		size_t len=strlen(c);
		if(c[0]==8&&c[len-1]==8) return 1;
		return  0;
	}
int KTchia10 (char c[])
	{
		int s=0;
		for(int i=0;i<strlen(c);i++)
			s=s+c[i];
		s=s-48*strlen(c);
		if(s%10==0) return 1;
		else return 0;
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
				if(KTthuannghich(c)==1&&KTso8(c)==1&&KTchia10(c)==1) printf("YES\n");
				else printf("NO\n");
			}
	}