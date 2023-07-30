#include <stdio.h>
#include <math.h>
int prime[100000005];
long long max(long long a, long long b)
	{
		if (a>b) return a;
		else return b;
	}
void sang(long long m,long long n)
	{
		for(int i=0;i<=n-m+1;i++)//coi tat ca cac so tu 0 den n deu la snt
			prime[i]=1;
		for(int i=2;i<=sqrt(n);i++)
			if(prime[i])
				for(int j=max(i*i,(m+i-1)/i*i));j<=n;j=j+i)
					prime[j]=0;	
	}
int main()
	{
		long long m,n;
		scanf("%lld%lld",&m,&n);
		int dem=0;
		sang(m,n);
		for(int i=m;i<=n;i++)
			if(prime[i]) dem++;
		printf("%d ",dem);
	}