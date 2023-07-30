#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int j=2;
	while(n>1)//phan tich
		{	
			if(n%j==0) //bao gio het chia cho so j thi 
								// moi bat tang tang j
				{	
					printf("%d",j);
					if(n!=j) printf("x");
					else printf("\n");	
					n/=j;		
				}
			else j++;	
		}
}