#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)//so hang
		{
			for(int j=1;j<=n;j++)// tren 1 hang
				{
					if(j<=i) printf("*");
					else printf(" ");
				}
			printf("\n");
		}
}