#include <stdio.h>
long long x[55][55];
int main()
{
	long long m,n;
	scanf("%lld%lld",&m,&n);
	for(int i=1;i<=m;i++)
		{
			for(int j=1;j<=n;j++)
				scanf("%lld",&x[i][j]);
		}
	long long a,b;
	scanf("%lld%lld",&a,&b);
	for(int j=1;j<=n;j++)
		{
			long long t=x[a][j];
			x[a][j]=x[b][j];
			x[b][j]=t;		
		}	
	for(int i=1;i<=m;i++)
		{
			for(int j=1;j<=n;j++)
				printf("%lld ",x[i][j]);
			printf("\n");
		}
}