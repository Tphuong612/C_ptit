#include <stdio.h>
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	for(int i=1;i<=m;i++)
		{	
			for(int j=1;j<=n;j++)
				{
					if(j<=n+1-i) printf("%d",j+i-1);
				}
			for( int k=i-1;k>=1;k--) 
				{ 
					printf("%d",k); 
				}
			printf("\n");
		}
}