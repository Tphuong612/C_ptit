#include <stdio.h>
long long max(long long a, long long b)
	{
		if(a>b) return a;
		else return b;
	}
	
int main()
	{
		int n;
		scanf("%d",&n);
		long long a[n+5];
		for(int i=1;i<=n;i++)
			scanf("%lld",&a[i]);
		long long s1=0, s2=0;
		for(int i=1;i<=n;i++)
			{
				s1=s1+a[i];// tao tong lien tiep
				if (s1<0) s1=0;
				s2=max(s2,s1);// luu ki luc lon nhat ma tong tung co
//				printf("Buoc %d: %lld %lld\n",i,s1,s2);
			}
		printf("%lld", s2);
	}
