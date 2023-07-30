#include <stdio.h>
int main()
{
 	int n;
 	scanf("%d",&n);
 	if(n>0)
 		{
 			if(n%2==0)
			 	printf("%d la so nguyen duong chan",n);
			else 
				printf("%d la so nguyen duong le",n);		
		}
	else if(n<0)
		{
			if(n%2==0)
			 	printf("%d la so nguyen am chan",n);
			else 
				printf("%d la so nguyen am le",n);
		}
	else 
		printf("%d la so nguyen chan");
}
