#include <stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while (t--)
		{
			long long n;
			scanf("%lld",&n);
			int s=0;
			while(n!=0)
				{
					s=s+n%10;
					n=n/10;
				}
			printf("%d\n",s);	
		}
 	return 0;
}
