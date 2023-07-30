#include <stdio.h>
int main()
	{
		int n;
		scanf("%d",&n);
		int a[n+5], b[n+5];
		for(int i=1;i<=n;i++)
			{
				scanf("%d",&a[i]);
				b[i]=a[i];
			}
		for(int i=1;i<=n;i++)
			printf("%d ",b[i]);	
	}
