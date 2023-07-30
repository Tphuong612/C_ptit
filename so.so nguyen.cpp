#include <stdio.h>
#include <math.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
		{
			double n;
			scanf("%lf",&n);
			if(round(n)==n) printf("so nguyen\n");
			else printf("khong phai so nguyen\n");
		}
 	return 0;
}
