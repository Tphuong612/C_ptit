#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n-1;i++)//so hang
		{
			for(int j=1;j<=n;j++)// tren 1 hang
				{
					if(j==1||j==i) printf("*");
					else if(1<j&&j<i) printf(".");
					else printf(" ");
				}
			printf("\n");
		}
	for(int j=1;j<=n;j++) printf("*");//hang cuoi
				
}