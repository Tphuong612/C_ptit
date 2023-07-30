#include <stdio.h>
#include <math.h>
int snt(int n)
	{
		if(n<2) return 0;
		for(int i=2;i<=sqrt(n);i++)
			{
				if (n%i==0) return 0;
			}
		return 1;
	}
int a[35][35];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			scanf("%d",&a[i][j]);
	int dong, res=0;
	for(int i=1;i<=n;i++)
		{
			int dem=0;
			for(int j=1;j<=n;j++)
				if(snt(a[i][j])==1) dem++;
			if(dem>res)
				{
					res=dem;
					dong=i;
				}
				
		}
	int b[105],i=0;
	for(int j=1;j<=n;j++)
		{
			if(snt(a[dong][j])==1)
			{
				
				++i;
				b[i]=a[dong][j];
			}
		}
	printf("%d\n",dong);
	for(int i=1;i<=res;i++)
		printf("%d ",b[i]);			
}