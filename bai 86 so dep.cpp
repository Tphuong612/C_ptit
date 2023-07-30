#include <stdio.h>
#include <math.h>
long long KTthuannghich(long long a)
	{
		long long sodao=0;
		long long sobandau=a;
		while(a!=0)
			{
				sodao=sodao*10+a%10;
				a/=10;
			}
		if(sodao==sobandau) return 1;
		else return 0;
	}
long long KTdaucuoi(long long n)
	{
			int socuoi=n%10;
			while (n>=10) n=n/10;
			int sodau=n;
			if (socuoi==2*sodau||socuoi==sodau/2) return 1;
			else return 0;
	}
int main()
	{ 
		int t;
		scanf("%d",&t);
		for(int i=1;i<=t;i++)
			{
				long long n;
				scanf("%lld",&n);
				long long sobandau=n;
				int dem=0;
				int socuoi=n%10;
				while (n>=10) 
					{
						dem++;
						n=n/10;
					}		
				int sodau=n;
				long long sogiua=(sobandau-sodau*pow(10,dem))/10;
				if(KTthuannghich(sogiua)==1&&KTdaucuoi(sobandau)==1) printf("YES\n");
				else printf ("NO\n");
				
			}
	}
