#include <stdio.h>
int a[55][55], b[55][55], c[55][55], d[55][55], e[55][55];
void tinh(int a[][55], int m, int n, int p, int b[][55],int e[][55])
	{
		for(int i=1;i<=m;i++)
			for(int j=1;j<=p;j++)
				for(int k=1;k<=n;k++)
					e[i][j]+=a[i][k]*b[k][j];
	}
int main()
	{
		int m,n,p,q;
		scanf("%d%d%d%d",&m,&n,&p,&q);
		for(int i=1;i<=m;i++)
			for(int j=1;j<=n;j++)
				scanf("%d",&a[i][j]);
		for(int i=1;i<=n;i++)
			for(int j=1;j<=p;j++)
				scanf("%d",&b[i][j]);
		for(int i=1;i<=p;i++)
			for(int j=1;j<=q;j++)
				scanf("%d",&c[i][j]);
		tinh(a,m,n,p,b,e);
		tinh(e,m,p,q,c,d);
		for(int i=1;i<=m;i++)
			{
				for(int j=1;j<=q;j++)
					printf("%d ",d[i][j]);
				printf("\n");
			}
	}