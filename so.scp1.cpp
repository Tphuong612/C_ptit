#include <stdio.h>
#include <math.h>
long long checkscp(long long n)
	{
		int k=(int)sqrt(n);
		if(k*k==n) return 1;
		else return 0;
	}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
		{
			long long n;
			scanf("%lld",&n);
			if(checkscp(n)==1) printf("YES\n");
			else printf("NO\n");
		}
 	return 0;
}
