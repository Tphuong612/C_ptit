#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
		{
			long long a,b;
			scanf("%lld%lld",&a,&b);
			long long UCLN;
			long long tich=(long long)a*b;
			if(a==0&b!=0) UCLN=b;
			if(a!=0&b==0) UCLN=a;
			if(a>0&b>0)
				{
					while(a!=b)
						{
							if(a>b) a=a-b;
							else b=b-a;
						}
					UCLN=a;
				}
			long long BCNN=tich/UCLN;
			printf("%lld %lld\n",BCNN,UCLN);
		}
}