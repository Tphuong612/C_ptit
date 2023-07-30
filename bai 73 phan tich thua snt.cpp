#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    	{
		    int n;
		    scanf("%d", &n);
		    printf("%d = ",n);
		    int dem;
		    for(int i = 2; i <= n; i++)
				{
			        dem = 0;
			        while(n % i == 0)
						{
				            dem++;
				            n /= i;
				        }
			        if(dem)
						{
				            if(dem >= 1) printf("%d^%d", i, dem);
				            if(n > i)
				                printf(" * ");          
				        }
				}
			printf("\n");
		}
}
    
