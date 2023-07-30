#include <stdio.h>
int a[10005];
int KTthuannghich(long long n)
	{
		long long sodao=0;
		long long m=n;
		while(m>=1)
			{
				sodao=sodao*10+m%10;
				m=m/10;
			}
		if(n==sodao) return 1;
		else return 0;
	}
int tongcacchuso(long long n)
	{
		int s=0;
		while(n!=0)
				{
					s=s+n%10;
					n=n/10;	
				}
		return s;	
	}
int cacchusodeule(long long n)
	{
			long long sobandau=n;
			int dem1=0;
			while(n!=0)//tinh so chu so, tao mang
				{
					dem1++;
					a[dem1]=n%10;
					n=n/10;	
				}
			int dem2=0;
			for(int i=1; i<=dem1; i++)
				{ 
					if (a[i]%2==1) dem2++;
				}
			if(dem2==dem1) return 1;
			else return 0;
	}
int main()
	{
		int t;
		scanf("%d",&t);
		for (int i=1;i<=t;i++)
			{
				long long n;
				scanf("%lld",&n);
				if(KTthuannghich(n)==1&&tongcacchuso(n)%2==1&&cacchusodeule(n)==1) printf("YES\n");
				else printf("NO\n");
			}
	}