#include <stdio.h>
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	if(m<=n)
		{
			for(int i=1;i<=m;i++)
				{	
					for(int j=1;j<=n;j++)
						{
							if(1<=j&&j<=i)printf("%c",96+n-j+1);
							else printf("%c",96+n-i+1);
						}
					printf("\n");
				}
		}
	if(m>n)
		{
			for(int i=1;i<=n;i++)
				{	
					for(int j=1;j<=n;j++)
						{
							if(1<=j&&j<=i)printf("%c",96+m-j+1);
							else printf("%c",96+m-i+1);
						}
					printf("\n");
				}
			for(int i=1;i<=m-n;i++)
				{	
					for(int j=1;j<=n;j++)
						{
							printf("%c",96+m-j+1);
						}
					printf("\n");
				}
			
		}
}