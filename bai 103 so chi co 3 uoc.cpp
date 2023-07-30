#include <stdio.h>
#include <math.h>
int a[1005]={0}, b[1005]={0};
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
		{
			int n;
			scanf("%d",&n);
			int BCNN=1;
			for(int i=2;i<=n;i++);
				{
					int k=i;
					int count=0;
					for(int j=2;j<=k;j++)
						{
							int dem=0;
							while(k%j==0)
								{
									dem++;
									k/=j;
									
								}
						}
				}
		}
}