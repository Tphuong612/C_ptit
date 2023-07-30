#include <stdio.h>
#include <math.h>
int prime[100000005];
void sang(long long n)
	{
		for(int i=0;i<=n;i++)//coi tat ca cac so tu 0 den n deu la snt
			prime[i]=1;
		prime[1]=prime[0]=0;//loai luon 0 voi 1 
		for(int i=2;i<=sqrt(n);i++)
			for(int j=i*i;j<=n;j=j+i)
					prime[j]=0;	
	}
int main()
	{
		long long n;
		scanf("%lld",&n);
		int dem=0;
		sang(n);
		for(int i=0;i<=n;i++)
			if(prime[i]) 
				{
					dem++;
					printf("%d ",i);
				}
		printf("%d ",dem);
		
	}