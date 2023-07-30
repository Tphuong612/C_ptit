#include <stdio.h>
int checkTN(int a)
	{
		int sodao=0;
		while(a!=0)
			{
				sodao=sodao*10+a%10;
				a/=10;
			}
		if (sodao==a) return 1;
		else return 0;
	}
int main()
	{
		int t;
		scanf("%d",&t);
		for(int i=1;i<=t;i++)
			{
				long long n;
				scanf("%lld",&n);
				int socuoi=n%10;
				while(n>=10)
					{
						sodau=n%10;
						n=n/10;
					}
				printf("%d",n);
			}
	}