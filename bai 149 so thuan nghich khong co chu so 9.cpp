#include <stdio.h>
#include <math.h>
int a[20];
int KT(int n)
	{
		int s=0;
		int dem=0;
		while(n!=0)
			{
				dem++;
				a[dem]=n%10;
				n=n/10;
			}
		for(int i=1;i<=dem;i++)
			if(a[i]==9) return 0;
		return 1;
	}
int check(int n)
	{
		int sodao=0;
		int sobandau=n;
		while(n!=0)
			{
				sodao=sodao*10+n%10;
				n/=10;
			}
		if(sodao==sobandau) return 1;
		else return 0;
	}
int main()
	{
		int n;
		scanf("%d",&n);
		int dem=0;
		for(int i=2;i<n;i++)
			if(KT(i)==1&&check(i)==1) 
				{
					dem++;
					printf("%d ",i);
				}
		printf("\n%d",dem);
	}
	