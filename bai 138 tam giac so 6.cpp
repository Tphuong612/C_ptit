#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		{
			
			for(int j=1;j<=n+i-1;j++)
				{
					if(j<=n-i) printf("~");
					else if(j>n-i&&j<=n) printf("%d",2*(i-(n-j)));
					else printf("%d",2*(i+n-j));
				}
			printf("\n");
		}
}