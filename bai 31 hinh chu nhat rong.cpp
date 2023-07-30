#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=1;i<=a;i++) printf("*");
		printf("\n");
	for(int j=1;j<=b-2;j++)
		{
				for(int i=1;i<=a;i++) 
					{
						if(i==1||i==a) printf("*");
						else printf(" ");
					}
				printf("\n");
		}
	for(int i=1;i<=a;i++) printf("*");	
}