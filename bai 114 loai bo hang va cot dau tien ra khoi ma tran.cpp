#include <stdio.h>
int a[100][100];
int main()
	{
		int t;
		scanf("%d",&t);
		for(int k=1;k<=t;k++)
			{
				
				int m,n;//m hang, n cot
				scanf("%d%d",&m,&n);
				for(int i=1;i<=m;i++)
					{
						for(int j=1;j<=n;j++)
							{
								scanf("%d",&a[i][j]);
							}
					}
				printf("Test %d:\n",k);
				for(int i=2;i<=m;i++)
					{
						for(int j=2;j<=n;j++)
							{
								printf("%d ",a[i][j]);
							}
						printf("\n");
					}
			}
	}