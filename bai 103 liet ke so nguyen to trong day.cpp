#include <stdio.h>
#include <math.h>
int a[10005];
int b[10005];
int kiemtrasnt(int n)
	{
		if(n<2) return 0;
		for(int i=2;i<=sqrt(n);i++)
			{
				if (n%i==0) return 0;
			}
		return 1;
	}
int main ()
	{
		int n;
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
			scanf("%d",&a[i]);
		int dem=0;
		for(int i=1;i<=n;i++)
			{
				if(kiemtrasnt(a[i])==1)
					{
						dem++;
						b[dem]=a[i];
					}
			}
		printf ("%d ",dem);
		for(int i=1;i<=dem;i++)
			printf("%d ",b[i]);
		
	}