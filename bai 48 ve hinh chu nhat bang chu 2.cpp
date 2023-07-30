#include <stdio.h>
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	if(m<=n)
		{
			for(int i=1;i<=m;i++)
				
		}
	if(m>n)
		{
			for(int i=1;i<=n;i++)
				{	
					for(int j=1;j<=n;j++)
						{
							if(j<=n+1-i) printf("%c",64+j+i-1);
						}
					for( int k=i-1;k>=1;k--) 
						{ 
							printf("%c",64+k); 
						}
					printf("\n");
				}
			for(int i=1;i<=m-n;i++)
				{	
					printf("%c",64+n);
					for( int k=n-1;k>=1;k--) 
						{ 
							printf("%c",64+k); 
						}
				
					printf("\n");
				}
		}
}