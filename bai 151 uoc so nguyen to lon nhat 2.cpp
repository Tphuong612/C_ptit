#include <stdio.h>
#include <math.h>
int a[105];
long long tim(long long n)
	{
		long long res;
		for(int i=2;i<=sqrt(n);i++)
			{
				while(n%i==0) 
					{
						res=i;
						n/=i;
					}		
			}
		if (n!=1) res=n;
		return res;		
	}
int main()
	{
		int t;
		scanf("%d",&t);
		for(int i=1;i<=t;i++)
			scanf("%lld",&a[i]);
		for(int i=1;i<=t;i++)		
			printf("%lld\n",tim(a[i]));
		
	}