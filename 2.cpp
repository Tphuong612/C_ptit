#include <stdio.h>
int main()
{
	int a=1,b=2;
	if(++a>b--)// sau dong nay thi a=2,b=1 :))
		{
			a=++a;
			printf("%d ",a);
		}
	else 
		{
			b=b--;
			printf("%d ",b);
		}
	printf("%d ",a+b);
	
}