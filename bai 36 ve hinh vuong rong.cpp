#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	for(int i=1;i<=a;i++) printf("*");//dong dau
		printf("\n");
	for(int j=1;j<=a-2;j++)//may dong giua
		{
				for(int i=1;i<=a;i++)//tren 1 hang
					{
						if(i==1||i==a) printf("*");
						else printf(".");
					}
				printf("\n");
		}
	for(int i=1;i<=a;i++) printf("*");//dong cuoi
}