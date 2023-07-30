#include <stdio.h>
int main()
{
	long long n;
	scanf("%lld",&n);
	int tich=1;
	while(n!=0)
		{
			tich=tich*(n%10);
			n=n/10;
		}
	printf("%d",tich);
 	return 0;
}
