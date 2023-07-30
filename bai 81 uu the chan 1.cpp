#include <stdio.h>
int a[1000005];
int main()
	{
		int t;
		scanf("%d",&t);
		for(int i=1;i<=t;i++)
			{
				long long n;
				scanf("%lld",&n);
				int sobandau=n;
				int dem=0;
				while(n!=0)//tinh so luong cac chu so
						{
							dem++;
							a[dem]=n%10;
							n=n/10;		
						}
				int dem1=0,dem2=0;
				for(int i=1;i<=dem;i++)
						{
							if(a[i]%2==0) dem1++;
							else dem2++;
						}	
				if(sobandau%2==0&&dem1>dem2) printf("YES\n");
				else printf("NO\n");	
			}
	}