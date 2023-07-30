#include <stdio.h>
#include <math.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
		{
			long long n;
			scanf("%lld",&n);
			int cuoi=n%10;
			while(n/10!=0)
				{
					n=n/10;
				}
			int dau=n;
			if(dau==cuoi) printf("YES\n");
			else printf("NO\n");
		}
}
