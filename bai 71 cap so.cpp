#include<stdio.h>
int UCLN(int a,int b)
	{
		int UCLN;
		if(a==0&b!=0) UCLN=b;
		if(a!=0&b==0) UCLN=a;
		if(a>0&b>0)
			{
				while(a!=b)
					{
						if(a>b) a=a-b;
						else b=b-a;
					}
				UCLN=a;
			}
		return UCLN;
	}
int main()
	{
		int t;
		scanf("%d",&t);
		for(int i=1;i<=t;i++)
			{
				long long a,b,c,d;
				scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
				if(UCLN(a,b)==UCLN(c,d)) printf("YES\n");
				else printf("NO\n");
			}
	}