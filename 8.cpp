#include <stdio.h>
int main()
{
	int a=8;
	switch(a%2)// so du =0 :(((((((((( la truong hop cua default: a=a/3;
		{
			case 2: a=a+3; break;
			case 4: a=a-3; break;
			case 6: a=a*3; break;
			default: a=a/3;
		}
	printf("%d ",a);
}