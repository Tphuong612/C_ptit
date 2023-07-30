#include<stdio.h>

int main() 
{
	int b;
	scanf("%d",&b);
	int x=1;
	while(x<=b)
	{
		int m,n;
		scanf("%d%d",&n,&m);
		long long c[105][105];
		long long a[105][105];
		long long e[105][105];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				scanf("%lld",&c[i][j]);
				a[j][i]=c[i][j];
			}
		}
		printf("Test %d:\n",x);
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				e[i][j]=0;
				for(int k=0;k<m;k++)
				{
					e[i][j]+=c[i][k]*a[k][j];
				}
				printf("%lld ",e[i][j]);
			}
			printf("\n");
		}
	x++;
	}
}