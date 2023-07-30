#include <stdio.h>
int a[100][100];
int main()
	{
		int m,n;//m hang, n cot
		scanf("%d%d",&m,&n);
		for(int i=1;i<=m;i++)
			{
				for(int j=1;j<=n;j++)
					{
						scanf("%d",a[i][j]);
					}
			}
		for(int i=1;i<=n;i++)
			{
				for(int j=1;j<=m;j++)
					{ 
						printf("%d",a[i][j]);
					}
				printf("\n");
			}
	}