#include <stdio.h>
int a[101][101], b[101][101], c[101][101];
int main()
{
	int t;
	scanf("%d",&t);
	for(int z=1;z<=t;z++)
		{
			int n;
			scanf("%d",&n);
			for(int i=1;i<=n;i++)// nhap va tao ma tran don vi
				for(int j=1;j<=i;j++)
					{
						if(j<=i) a[i][j]=j;
						else a[i][j]=0;
					}
			for(int i=1;i<=n;i++)//chuyen vi ma tran
				for(int j=1;j<=n;j++)
					b[i][j]=a[j][i];
			for(int i=1;i<=n;i++)//nhan 2 ma tran voi nhau
				for(int j=1;j<=n;j++)
					{
						c[i][j]=0;
						for(int k=1;k<=n;k++)
							c[i][j]+=a[i][k]*b[k][j];
					}
			printf("Test %d:\n",z);
			for(int i=1;i<=n;i++)//xuat mang
				{
					for(int j=1;j<=n;j++)
						printf("%d ",c[i][j]);
					printf("\n");
				}
		}
}