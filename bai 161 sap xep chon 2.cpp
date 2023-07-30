#include <stdio.h>
int a[105];
int main()
	{
		int n;
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
		
		for(int i=1;i<n;i++)
			{
				int min=i;
				for(int j=i+1;j<=n;j++)
					{
						if(a[j]<a[min]) min=j;
					}
				int t=a[i];
				a[i]=a[min];
				a[min]=t;
				for(int i=1;i<=n;i++)
					printf("%d ",a[i]);
				printf("\n");
			}
	}