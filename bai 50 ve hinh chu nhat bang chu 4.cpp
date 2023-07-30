#include <stdio.h>
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	for(int i=1;i<=m;i++)
		{	
			for(int j=1;j<=n;j++)
				{
					if(j<=n-m+i) printf("%c",64+m+j-i);
					else printf("%c",64+n);
				}
			printf("\n");
		}
	    
}