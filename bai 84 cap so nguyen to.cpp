#include <stdio.h>
#include <math.h>
int KTsnt(int n)
	{
		if(n<2) return 0;
		for(int i=2;i<=sqrt(n);i++)
			{
				if(n%i==0) return 0;
			}
		return 1;
	}
int main()
	{
		int t;
		scanf("%d",&t);
		for(int i=1;i<=t;i++)
			{
				int n;
				scanf("%d",&n);
				for(int i=1;i<=n/2;i++)
					{
						if(KTsnt(i)==1&&KTsnt(n-i)==1) printf("%d %d ",i,n-i);
					}
				printf("\n");
			}
		
	}