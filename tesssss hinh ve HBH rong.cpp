#include <stdio.h>
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	for(int i=1;i<=m;i++)
		{
			if(i==1)
				{
					for(int i=1;i<=m+n-1;i++)
						{
							if (i<m) printf("~");
							else printf("*");
						}
				}
			else if (i==m)
				{
					for(int i=1;i<=m+n-1;i++)
						{
							if (i<=n) printf("*");
							else printf("~");
						}
				}
		    else for(int j=1;j<=m+n-1;j++)
				{
					if(j<m-i+1) printf("~");
					else if(j==m-i+1||j==m+n-i) printf("*");
					else if(j>m-i+1&&j<m+n-i) printf(" ");
					else printf("~");
				}
			printf("\n");
		}
}