#include <stdio.h>
#include <math.h>
int a[55][55];
int KT(int n)
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
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			scanf("%d",&a[i][j]);
	int s=0;
	for(int i=1;i<=n;i++)
		for(int j=i;j<=n;j++)
			if (KT(a[i][j])==1) s=s+a[i][j];
	printf("%d",s);				
}