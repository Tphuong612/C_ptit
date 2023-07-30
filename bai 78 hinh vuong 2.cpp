#include <stdio.h>
#include <math.h>
int main()
{
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
		{
			int a,b,c,d;
			scanf("%d%d%d%d",&a,&b,&c,&d);
			double AB=(double)sqrt((c-a)*(c-a)+(d-b)*(d-b));
			if((double)abs(d-b)==(double)AB/sqrt(2)) printf("YES\n");
			else printf ("NO\n");
		}
}