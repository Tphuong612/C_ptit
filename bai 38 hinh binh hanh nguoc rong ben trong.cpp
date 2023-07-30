#include <stdio.h>
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m+n-1;j++)// tren 1 hang
				{
					if(j<=i-1) printf("~");
					else if (m+i<=j&&j<=m+n-1) printf(" ");
					else printf("*");
				}
			printf("\n");
		}
}