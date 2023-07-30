#include <stdio.h>
#include <math.h>
int checkSNT(long long n)// scp cua snt co 3 uoc
	{
		if(n<2) return 0;
		for(int i=2;i<=sqrt(n);i++)
			if(n%i==0) return 0;
		return 1;
	}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
		{
			long long a,b;
			scanf("%lld%lld",&a,&b);
			long long dem=0;
			int m=(int) sqrt(a);
			int n=(int) sqrt(b);
			for(int i=m;i<=n;i++)
				{
					if(checkSNT(i)==1) dem++;
				}
			printf("%lld\n",dem);
		}
}