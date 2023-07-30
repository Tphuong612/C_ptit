#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int socuoi=n%10;
	while(n>9) n=n/10;	
	int sodau=n;	
	printf("%d %d",sodau,socuoi);			
}