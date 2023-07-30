#include <stdio.h>
int a[20][20];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=i;j++)
				{
					if (j==1)
						{
							a[i][j]=i;
							printf("%c ",a[i][j]+64);
						}
					else 
						{
							a[i][j]=a[i][j-1]+n-j+1;
							printf("%c ",a[i][j]+64);
						}
				}
			printf("\n");
		}
}