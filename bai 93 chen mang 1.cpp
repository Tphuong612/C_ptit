#include <stdio.h>
int a[1005];
int b[1005];
int main()
	{
		int m,n;
		scanf("%d%d",&m,&n);
		for(int i=0;i<m;i++)
			{
				scanf("%d",&a[i]);
			}
		for(int i=0;i<n;i++)
			{
				scanf("%d",&b[i]);
			}
		int k;
		scanf("%d",&k);
		for(int i=0;i<k;i++)
			{
				printf("%d ",a[i]);
			}
		for(int i=0;i<n;i++)
			{
				printf("%d ",b[i]);
			}
		for(int i=k;i<m;i++)
			{
				printf("%d ",a[i]);
			}
	}