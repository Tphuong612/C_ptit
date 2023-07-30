#include <stdio.h>
int main()
	{
		int n;
		scanf("%d",&n);
		int a[n+5];
		for(int i=1;i<=n;i++)
			scanf("%d",&a[i]);
		int max1=-9999999, max2;
		for(int i=1;i<=n;i++)
			{
				if(a[i]>max1) 
					{
						max2=max1;
						max1=a[i];
					}
				else if (max1>a[i]&&a[i]>max2)
					max2=a[i];		
			}
		printf("%d %d",max1,max2);
	}
