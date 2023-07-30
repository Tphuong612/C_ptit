#include <stdio.h>
int a[1005];
int main()
	{
		int n;
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
			scanf("%d",&a[i]);
		int min=999999, max=-999999;
		for(int i=1;i<=n;i++)
			{
				if(i==1)
					{
						printf("%d %d",a[2]-a[1],a[n]-a[1]);
					}
				else if(i==n)
					{
						printf("%d %d",a[n]-a[n-1], a[n]-a[1]);
					}
				else 
					{
						if(a[i+1]-a[i]>=a[i]-a[i-1]) min=a[i]-a[i-1];	
						else min=a[i+1]-a[i];
						
						if(a[i]-a[1]>=a[n]-a[i]) max=a[i]-a[1];
						else max=a[n]-a[i];
						
						printf("%d %d",min,max);
							
					}
				printf("\n");
			}
	}