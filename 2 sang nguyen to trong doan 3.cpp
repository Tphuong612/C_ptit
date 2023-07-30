#include <stdio.h>
#include <math.h>
int prime[100000005];
int max(int a, int b)
	{
		if (a>b) return a;
		else return b;
	}
void sang(int m,int n)
	{
		for(int i=0;i<=n-m+1;i++)//coi tat cac phan tu trong mang la snt
			prime[i]=1;
		for(int i=2;i<=sqrt(n);i++)
			for(int j=max(i*i,(m+i-1)/i*i);j<=n;j=j+i)
				prime[j-m]=0;			
	}
int main()
	{
		long long m,n;
		scanf("%d%d",&m,&n);
		sang(m,n);
		int dem=0;
		for(int i=max(m,2);i<=n;i++)
			if(prime[i-m]) 
				{
					dem++;
					printf("%d ",i);
				}
		printf("%d",dem);
		
	}