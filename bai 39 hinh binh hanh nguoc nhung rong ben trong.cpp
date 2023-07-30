#include <stdio.h>
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	for(int i=1;i<=n+m-1;i++)//tren hang 1
		{
			if(i<=n) printf("*");
			else printf(" ");
		}
		printf("\n");
	for(int j=2;j<=m-1;j++)// nhung hang o giua
		{
			for (int i=1;i<=n+m-1;i++)// tren 1 hang
				{
				
					if(i==j||i==n-1+j) printf("*");
					else if(i<j) printf("~");
					else if(i>j&&i<n-1+j) printf (".");
					else printf (" ");
				}
			printf("\n");			
		}
	for(int i=1;i<=n+m-1;i++) 
		{	
			if(i<=m-1) printf("~");
			else printf("*");
		}
}