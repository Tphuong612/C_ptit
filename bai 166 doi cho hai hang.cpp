#include <stdio.h>
int x[55][55];
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	for(int i=1;i<=m;i++)
		{
			for(int j=1;j<=n;j++)
				scanf("%d",&x[i][j]);
		}
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=1;i<=m;i++)
		{
			for(int j=1;j<=n;j++)
				{
					int t=x[a][j];
					x[a][j]=x[b][j];
					x[b][j]=t;
						
				}
		}
	for(int i=1;i<=m;i++)
		{
			for(int j=1;j<=n;j++)
				printf("%d ",x[i][j]);
			printf("\n");
		}
}