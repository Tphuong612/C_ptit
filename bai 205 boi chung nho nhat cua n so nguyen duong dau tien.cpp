#include <stdio.h>
long long UCLN(long long a, long long b)
	{	
	    long long tmp;
	    while(b != 0)// khi so du bang 0 thi dung vong lap
			{
		        tmp = a % b;// ucln cua 2 so chinh la ucln cua so chia(so nho hon) va so du khi lay so lon hon chia cho so nho hon
		        a = b;
		        b = tmp;
		    }
	    return a;
	}
long long BCNN(long long a, long long b)
	{
		return a*b/UCLN(a,b);
	}
int main()
	{
		long long t;
		scanf("%lld",&t);
		for(int i=1;i<=t;i++)
			{
				long long n;
				scanf("%lld",&n);	
				long long bcnn=1;// tinh bcnn cua 2 so 1 va 2
				for(int i=2;i<=n;i++)
					{ 
						bcnn=BCNN(bcnn,i);
					}
				printf("%lld\n",bcnn);	
			}
	 	return 0;
	}
