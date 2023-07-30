#include <stdio.h>
#include <math.h>
int a[20];
int main()
	{
		long long n;
		scanf("%lld",&n);
		int dem1=0;
		int s=0;
		while(n!=0)
			{
				dem1++;
				a[dem1]=n%10;
				s=s+a[dem1];
				n=n/10;
			}
		printf("%d\n",s);
		int dem2=0;
		for(int i=1;i<=dem1/2;i++)
			if(a[i]!=a[n-i+1]) dem2++;
		printf("%d\n", dem2);
		int check=0;
		for(int i=1;i<=dem1;i++)
			if(a[i]==6) check=1;
		printf("%d",check);
	}