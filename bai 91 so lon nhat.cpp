#include <stdio.h>
int a[1005];
int main()
	{
		int t;
		scanf("%d",&t);
		for(int i=1;i<=t;i++)
			{
				int n;
				scanf("%d",&n);
				for(int i=0;i<n;i++)
					{
						scanf("%d",&a[i]);
					}
				int max=a[0];
				for(int i=0;i<n;i++)
					{
						if(a[i]>max) max=a[i]; 
					}
				printf("%d\n",max);
				for(int i=0;i<n;i++)
					{
						if(max==a[i]) printf("%d ",i);
					}
				printf("\n");
			}
	}