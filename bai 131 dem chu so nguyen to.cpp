#include <stdio.h>
#include <math.h>
int a[1005];
int b[1005];
int KTsnt(int n)
	{
		if(n<2) return 0;
		for(int i=2;i<=sqrt(n);i++)
			{
				if (n%i==0) return 0;
			}
		return 1;
	}
int main()
	{
		long long n;
		scanf("%lld",&n);
		int dem=0;
		while(n>0)
			{
				dem++;
				a[dem]=n%10;
				n/=10;
			}
		for(int i=1;i<=dem;i++)
			b[a[i]]++;
		for(int i=dem;i>=1;i--)
			{
				if(KTsnt(a[i])==1&&b[a[i]]>=1)
					{
						printf("%d %d\n",a[i],b[a[i]]);
						b[a[i]]=0;
					}
			}
				
	}