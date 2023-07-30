#include <stdio.h>
long long UCLN(long long a, long long b)
	{
		long long tmp;
		while(b!=0)// khi so du bang 0 thi dung vong lap
			{
				tmp=a%b;
				a=b;
				b=tmp;
			}
		return a;
	}
long long BCNN(long long a, long long b)
	{
		return a*b/UCLN(a,b);
	}
int main()
	{
		int t;
		scanf("%d",&t);
		while(t--)
			{
				long long n,m;
				scanf("%lld%lld",&n,&m);
				long long bcnn=1;
				for(int i=n;i<=m;i++)
					{
						bcnn=BCNN(bcnn,i);
					}
				printf("%lld\n", bcnn);
			}
	 	return 0;
	}
