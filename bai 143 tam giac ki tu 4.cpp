#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=2*i-1;j++)
				{
					if(j<=i) printf("%c",2*j-1+63);
					else printf("%c",2*2*i-1-2*j+63);
				}
			printf("\n");
		}
}