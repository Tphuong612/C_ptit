#include <stdio.h>
int a[10005];
#include <math.h>
int main()
	{
		int t;
		scanf("%d",&t);
		while(t--)
			{
				int n;
				scanf("%d",&n);
				for(int i=0;i<=n-1;i++)
					{
						scanf("%d",&a[i]);
					}
				int max=a[0];
				for(int i=0;i<=n-1;i++)
					{
						if(a[i]>max) max=a[i];
					}
				printf("%d\n",max);
				for(int i=0;i<=n-1;i++)
					{
						if(a[i]==max) printf("%d ",i);
					}
			}
	}