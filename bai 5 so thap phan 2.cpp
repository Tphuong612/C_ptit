#include <stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
		{
			long long n;
			scanf("%lld",&n);
			long double k=1.0/n;
			printf("%.15Lf\n",k);	
		}
}