#include <stdio.h>
int a[100005];
#include <math.h>
int kiemtrasnt(int n)
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
		int t;
		scanf("%d",&t);
		for(int i=1;i<=t;i++)
			{
				int n;
				scanf("%d",&n);
				for(int i=1;i<=n;i++)
					{
						scanf("%d",&a[i]);
						if(kiemtrasnt(a[i])==1) printf("%d ",a[i]);
					}
				printf("\n");
			}
	}