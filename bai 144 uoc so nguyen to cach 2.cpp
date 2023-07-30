#include <stdio.h>
#include <math.h>
long long tim(long long n)//kiem tra va tim uoc nguyen to
	{
		int res;
		for(int i=2;i<=sqrt(n);i++)
			{
				while(n%i==0)//theo kieu phan tich thua so nguyen to
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
			{
				long long n;
				scanf("%lld",&n);
				printf("%lld\n",tim(n));
			}
	}