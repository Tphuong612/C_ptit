#include <stdio.h>
int a[10005];
int main ()
	{
		int n;
		scanf("%d",&n);
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
		int k;
		scanf("%d",&k);
		for(int i=n-k;i<n;i++)
			printf("%d ",a[i]);
		for(int i=0;i<n-k;i++)
			printf("%d ",a[i]);
		
	}