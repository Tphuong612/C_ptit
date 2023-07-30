#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=2*n-1;i++)//tren hang 1
		{
			if(i<=n-1) printf("~");
			else printf("*");
		}
		printf("\n");
	for(int i=1;i<=n-2;i++)// nhung hang o giua
		{
			for (int j=1;j<=2*n-1;j++)// tren 1 hang
				{
					if(j<n-i) printf("~");
					else if (j==n-i||j==2*n-i-1)printf("*");
					else if (j>n-i&&j<2*n-i-1)printf(".");
					else printf(" ");
				}
			printf("\n");			
		}
	for(int i=1;i<=n;i++) printf("*");// hang cuoi
}