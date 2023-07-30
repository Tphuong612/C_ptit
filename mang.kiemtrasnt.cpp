#include <stdio.h>
int a[10005];
#include <math.h>
int checkprime(int n)
	{
		if (n<2) return 0;
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
		while(t--)
			{
				int n;
				scanf("%d",&n);
				for(int i=1;i<=n;i++)
					{
						scanf("%d",&a[i]);
						if(checkprime(a[i])==1) printf("%d ",a[i]);
					}
				printf("\n");
			}
	}