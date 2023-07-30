#include <stdio.h>
long long a[105];
long long fibonacci(long long a[],int n)
	{
		a[0]=0;
		a[1]=1;
		a[2]=1;
		for(int i=3;i<=n;i++)
			{
				a[i]=a[i-1]+a[i-2];
			}
		return a[n];
	}
int main()
	{
		int t;
		scanf("%d",&t);
		while(t--)
			{
				long long n;
				scanf("%lld",&n);
				long long f=fibonacci(a,n);
				printf("%lld\n",f);
			}
	}
