#include <stdio.h>
int main()
	{
		int n;
		scanf("%d",&n);
		int a[n+5][n+5];
		int h1=1, h2=n;
		int c1=1, c2=n;
		int cout=n*n;
		while (h1<=h2&&c1<=c2)
			{
				for(int i=c1;i<=c2;i++)
					a[h1][i]=cout--;
					
				h1++;
				for(int i=h1;i<=h2;i++)
					a[i][c2]=cout--;
					
				c2--;
				for(int i=c2;i>=c1;i--)
					a[h2][i]=cout--;
				
				h2--;
				for(int i=h2;i>=h1;i--)
					a[i][c1]=cout--;
				
				c1++;
			}
		for(int i=1;i<=n;i++)
			{
				for(int j=1;j<=n;j++)
					printf("%d ", a[i][j]);
				printf("\n");
			}
	}
