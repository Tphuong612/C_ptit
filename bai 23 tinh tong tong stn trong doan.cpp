#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	if(a<b) printf("%d",((a+b)*(b-a+1))/2);
	if (a>b)
		{
			printf("%d",((a+b)*(a-b+1))/2);
		}
}