#include <stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    int tongto=0;
    int tongbe=0;
    for(int i=1;i<=t;i++)
    	{
		    int n;
		    scanf("%d", &n);
		    for(int i = 2; i <=sqrt(n); i++)
				{
					while(n % i == 0)
						{
				            tongbe=tongbe+i;
				            n/=i;
						}
				}
			if(n!=1) tongbe=tongbe+n;
			printf("%d",tongbe);
		}
//	printf("%d",tongto+tongbe);
}
    
