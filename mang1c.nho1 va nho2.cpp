#include <stdio.h>

int main()
	{
		int n;
		scanf("%d",&n);
		int a[n+5];
		for(int i=1;i<=n;i++)
			{
				scanf("%d",&a[i]);
			}
		int min1=9999999, min2;
		for(int i=1;i<=n;i++)
			{
				if(a[i]<min1)
					{
						min2=min1;
						min1=a[i];
					}
				else if(min1<a[i]&&a[i]<min2) 
					{
						min2=a[i];
					}
				
			}
		printf("%d %d",min1, min2);
		
	}
