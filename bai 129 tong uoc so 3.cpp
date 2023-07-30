#include <stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    long long tong=0;
    for(int i=1;i<=t;i++)
    	{
			int n;
			scanf("%d", &n);
		    int tongcon=0;
			for(int i = 2; i <=sqrt(n); i++)
				{
					while(n % i == 0)
						{
				            tongcon=tongcon+i;
				            n/=i;
						}
				}
			if(n!=1) tongcon=tongcon+n;
			tong=tong+tongcon;
		}
	printf("%lld\n",tong);
}