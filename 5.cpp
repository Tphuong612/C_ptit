#include <stdio.h>
int main()
{
	int i,j;
	i=j=2;
	while(--i&&j++)
		printf("%d %d ",i,j);
}