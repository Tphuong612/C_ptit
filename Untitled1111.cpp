#include <stdio.h>
main()
{
	int a,b;
	printf("nhap so cac so can phan tich: ");
	scanf("%d",&a);
	while(a--)
	{
		printf("nhap so thu %d can phan tich: ",a);
		scanf("%d",&b);
		int i=2;
		while(b>=1)
			{
				if(b%i==0)
				{
					printf("%d ",i);
					b/=i;
				}
				else i++;
			}
	}
	
}