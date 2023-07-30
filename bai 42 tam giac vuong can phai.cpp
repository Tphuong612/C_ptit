#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)//so hang
		{
			for(int j=1;j<=n;j++)// tren 1 hang
				{
					if(j>=n-i+1) printf("*");
					else printf("~");
				}
			printf("\n");
		}
}