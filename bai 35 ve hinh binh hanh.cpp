#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=2*n-1;j++)// tren 1 hang
				{
					if(j<=n-i) printf("~");
					else if (n-i<j&j<=2*n-i)printf("*");
					else printf(" ");
				}
			printf("\n");
		}
}