#include <stdio.h>
int a[105];
int main()
{
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
		{
			long long n;
			scanf("%lld",&n);
			long long sobandau=n;
			int dem1=0;
			while(n!=0)
				{
					n=n/10;
					dem1++;
				}
			int chuso;
			for(int i=1;i<=dem1;i++)
				{
					chuso=sobandau%10;
					a[i]=chuso;
					sobandau=sobandau/10;
				}	
			int dem2=0;
			for(int i=1; i<dem1; i++)
				{ 
					if (a[i]>=a[i+1]) dem2++;
				}
			if(dem2==dem1-1) printf ("YES\n");
			else printf("NO\n");
			
		}
}