#include <stdio.h>
long long a[1005];
int main()
	{
		int t;
		scanf("%d",&t);
		for(int i=1;i<=t;i++)
			{
				int n;
				scanf("%d",&n);	
				a[0]=0;
				a[1]=1;
				for(int i=2;i<=n;i++)
					a[i]=a[i-1]+a[i-2];	
				printf("%lld\n",a[n]);		
			}
	}
