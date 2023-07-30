#include <stdio.h>
// in ra ma tran chuyen vi
int main()
	{
		int hang, cot;
		scanf("%d%d",&hang,&cot);
		int a[hang+5][cot+5];
		for(int i=1;i<=hang;i++)
			for(int j=1;j<=cot;j++)
				scanf("%d",&a[i][j]);
		for(int i=1;i<=cot;i++)
			{
				for(int j=1;j<=hang;j++)
					printf("%d ",a[j][i]);
				printf("\n");
			}
		
	}
