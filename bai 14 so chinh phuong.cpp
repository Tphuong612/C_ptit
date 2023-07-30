#include <stdio.h>
#include <math.h>
int main()
{
	int t;
	scanf("%d",&t);
	for (int i=1;i<=t;i++)
		{
			long n;
			scanf("%ld",&n);
			int k=(int)sqrt(n);
			if (k*k==n) printf("YES\n");
			else printf("NO\n");
		}
}