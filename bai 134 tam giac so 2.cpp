#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		{
			if(i%2==1)
				{
					for(int j=1;j<=2*n-1;j=j+2)
						{
							if(j<=2*i-1) printf("%d",j);
							else printf(" ");
						}
				}
			else 
				{
					for(int j=2;j<=2*n;j=j+2)
						{
							if(j<=2*i) printf("%d",j);
							else printf(" ");
						}
				}
			printf("\n");
		}
}