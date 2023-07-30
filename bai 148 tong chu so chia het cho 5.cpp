#include <stdio.h>
#include <math.h>
int Snt(int n)
	{
		if(n<2) return 0;
		for(int i=2;i<=sqrt(n);i++)
			if(n%i==0) return 0;
		return 1;
	}
int chia5(int n)
	{
		int s=0;
		while(n!=0)
			{
				s=s+n%10;
				n=n/10;
			}
		if(s%5==0) return 1;
		else return 0;	
	}
int main()
	{
		int n;
		scanf("%d",&n);
		int dem=0;
		for(int i=2;i<=n;i++)
			if(chia5(i)==1&&Snt(i)==1) {
					dem++;
					printf("%d ",i);
				}
		printf("\n%d", dem);		
	}