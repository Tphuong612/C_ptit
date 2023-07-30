#include <stdio.h>
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	for(int i=1;i<=m;i++)
		{	
			for(int j=1;j<=n;j++)
				{
					if(j<=n+1-i) printf("%c",63+j+i-1);
					else printf("%c",63+n);
				}
			printf("\n");
		}	
}