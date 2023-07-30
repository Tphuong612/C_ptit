#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if (n%10==0) printf("0");
	else
	{
		int tich=1;
		while(n!=0)
			{
				tich=tich*(n%10);
				n=n/10;	
			}
		printf("%d",tich);
	}
}