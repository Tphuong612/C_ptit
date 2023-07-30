#include <stdio.h>
int a[10000005];
int main()
	{
		int n;
		scanf("%d",&n);
		a[0]=0;
		a[1]=1;
		for(int i=0;i<=1;i++) printf("%d ",i);
		for(int i=2;i<n;i++)
			{
				a[i]=a[i-1]+a[i-2];
				printf("%d ",a[i]) ;
			}
			
	}