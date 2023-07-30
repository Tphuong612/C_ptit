#include <stdio.h>
int main()
	{
		int n;
		scanf("%d",&n);
		int a[n+5];
		for(int i=1;i<=n;i++)
			scanf("%d",&a[i]);
		for(int i=1;i<=n-1;i++)
			{
				for(int j=i+1;j<=n;j++)
					{
						if(a[j]<a[i])
							{
								int t=a[j];
								a[j]=a[i];
								a[i]=t;
							}
					}
				printf("Buoc %d: ",i);
				for(int i=1;i<=n;i++)
					printf("%d ",a[i]);
				printf("\n");
			}
	}
