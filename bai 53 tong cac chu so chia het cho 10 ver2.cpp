#include <stdio.h>
int tinhtongcacchuso(int n)
	{
		int s=0;
		while(n!=0)
			{
				s=s+n%10;
				n/=10;	
			}
		return s;
	}
int main()
	{
		int t;
		scanf("%d",&t);
		for(int i=1;i<=t;i++)
		{
			int n;
			scanf("%d",&n);
			if(tinhtongcacchuso(n)%10==0) printf("YES\n");
			else printf("NO\n");
		}
	}