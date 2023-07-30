#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int k=0;
	for(int i=1; i<=n; i++)
		{
			k+=i;
			if(i%2==1)
				{
					for(int j=k-i+1; j<=k; j++)
						printf("%d ", j);
				}
			if(i%2==0)
				{
					for(int j=k; j>=(k-i+1);j--)
					printf("%d ", j);
				}
			printf("\n");
		}
}