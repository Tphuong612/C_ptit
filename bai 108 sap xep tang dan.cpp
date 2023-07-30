#include <stdio.h>
int a[10005];
int main ()
	{
		int n;
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
			scanf("%d",&a[i]);
		for(int i=1;i<n;i++)
			{
				for(int j=1;j<=n-i;j++)
					{
						if(a[j]>a[j+1]) 
							{
								int t=a[j];
								a[j]=a[j+1];
								a[j+1]=t;
							}
					}
			}
		for(int i=1;i<=n;i++)
			{
				printf("%d ",a[i]);
			}
		
	}