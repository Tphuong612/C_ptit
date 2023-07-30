#include <stdio.h>
int a[1005];
int main()
	{
		int n;
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
			scanf("%d",&a[i]);
		for(int i=1;i<=n;i++)
			{
				int j=i-1;
				int t=a[i];
				while(t<a[j]&&j>=1)
					{
						a[j+1]=a[j];
						j--;
					}
				a[j+1]=t;
				printf("Buoc %d: ",i-1);
				for(int j=1;j<=i;j++)
					printf("%d ",a[j]);
				printf("\n");
			}
	}