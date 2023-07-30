#include <stdio.h>
int main()
	{
		int m,n;// m la hang, n la cot
		scanf("%d%d",&m,&n);
		int a[m+5][n+5];
		for(int i=1;i<=m;i++)
			{
				for(int j=1;j<=n;j++)
					scanf("%d",&a[i][j]);
			}
		int x,y;
		scanf("%d%d",&x,&y);
		for(int j=1;j<=n;j++)
			{
				int t=a[x][j];
				a[x][j]=a[y][j];
				a[y][j]=t;
			}
		for(int i=1;i<=m;i++)
			{
				for(int j=1;j<=n;j++)
					printf("%d ",a[i][j]);
				printf("\n");
			}

	}
