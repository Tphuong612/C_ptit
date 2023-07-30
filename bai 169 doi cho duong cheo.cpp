#include <stdio.h>
int a[55][55];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			scanf("%d",&a[i][j]);
	for(int i=1;i<=n;i++)
		{
			int t=a[i][i];
			a[i][i]=a[i][n-i+1];
			a[i][n-i+1]=t;
		}
	for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
				printf("%d ",a[i][j]);
			printf("\n");
		}
}
