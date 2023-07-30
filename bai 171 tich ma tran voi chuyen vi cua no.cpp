#include <stdio.h>
int a[100][100], b[100][100],c[100][100];
int n,m;
void tich(int a[][100], int b[][100], int c[][100], int n, int m)
	{
		for(int i=0;i<n;i++)//lap so hang
			{
				for(int j=0;j<n;j++)//lap so cot
					{
						c[i][j]=0;
						for(int l=0;l<m;l++)
							{
								c[i][j]+=a[i][l]*b[l][j];
							}
					}
			}
	}
int main()
{
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{
		
		scanf("%d%d",&n,&m);

		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
				scanf("%d",&a[i][j]);
		
		for(int i=0;i<m;i++)//chuyen vi ma tran
			for(int j=0;j<n;j++)
				b[i][j]=a[j][i];
						
		tich(a,b,c,n,m);
		
		printf("Test %d:\n",i);
		for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
					printf("%d ",c[i][j]);
				printf("\n");
			}
	}
}
