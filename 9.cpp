#include <stdio.h>
int main()
{
	int a=1;
	switch(a)
		{
			case 1: a=a+2; break;
			case 2: a=a-2; break;
			default: a=a*2;
		}
	printf("%d ",a);
}