#include <stdio.h>
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	if(m<=n)
		{
			for(int i=1;i<=m;i++)
				{	
					for(int j=n-i+1;j>=1;j--)
						{
							printf("%d",j);
						}
					for( int k=2;k<=i;k++) 
						{ 
							printf("%d",k); 
						}
					printf("\n");
				}
		}
	if(m>n)
		{
			for(int i=1;i<=m-n;i++)
				{	
					for( int k=m-i+1;k>m-i+1-n;k--) 
						{ 
							printf("%d",k); 
						}
				
					printf("\n");
				}
			for(int i=1;i<=n;i++)
				{	
					for(int j=n-i+1;j>=1;j--)
						{
							printf("%d",j);
						}
					for( int k=2;k<=i;k++) 
						{ 
							printf("%d",k); 
						}
					printf("\n");
				}
			
		}
}