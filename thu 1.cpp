#include <stdio.h>
int main()
	{
		int n;
		scanf("%d",&n);
		int a[30][30];
	
		int h1=1, h2=2*n-1;
		int c1=1, c2=2*n-1;
		int k=n;
		while(h1<=h2&&c1<=c2)
			{
				for(int i=c1;i<=c2;i++)
					a[h1][i]=k;
				
				h1++;
				for(int i=h1;i<=h2;i++)
					a[i][c2]=k;
				
				c2--;
				for(int i=c2;i>=c1;i--)
					a[h2][i]=k;
				
				h2--;
				for(int i=h2;i>=h1;i--)
					a[i][c1]=k;
				
				c1++;	
				k--;
			}
		for(int i=1;i<=2*n-1;i++)
			{
				for(int j=1;j<=2*n-1;j++)
					printf("%d ", a[i][j]);
				printf("\n");
			}
	}
