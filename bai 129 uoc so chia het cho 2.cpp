#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    	{
		    long long n;
		    scanf("%lld", &n);
		    if(n%2==1) printf("0");
		    else
		    	{
		    		int dem2=0, dem=0;
		    		while(n%2==0)
		    			{
		    				dem2++;
		    				n/=2;
						}
					if(n==1) printf("%d",dem2);
					else
						{
							for(int i=1;i<=(int)sqrt(n);i++)
								{
									if (n%i==0) dem++;
								}
							int cantim;
							if((int)sqrt(n)*(int)sqrt(n)==n) cantim=dem2*(dem*2-1);
							else cantim=dem2*dem*2;
							printf ("%d",cantim);
						}
				}
			printf("\n");
		}
}