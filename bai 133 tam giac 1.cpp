#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=2*n-1;j++)
				{
					if(j<=2*i-1) printf("%d",j);
					else printf(" ");
				}
			printf("\n");
		}
}