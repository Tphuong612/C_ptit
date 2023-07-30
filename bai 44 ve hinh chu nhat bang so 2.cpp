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
							if(j<=n+1-i) printf("%d",j+i-1);
						}
					for( int k=n-1;k>=n-i+1;k--) 
						{ 
							printf("%d",k); 
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
							if(j<=n+1-i) printf("%d",j+i-1);
						}
					for( int k=n-1;k>=n-i+1;k--) 
						{ 
							printf("%d",k); 
						}
					printf("\n");
				}
			for(int i=1;i<=m-n;i++)
				{	
					for( int k=n+i;k>=i+1;k--) 
						{ 
							printf("%d",k); 
						}
				
					printf("\n");
				}
		}
}