#include<stdio.h>
int main()
{
			int a,b;
			scanf("%d%d",&a,&b);
			long long tich=(long long)a*b;
			int UCLN;
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
			printf("%lld\n%lld",UCLN,BCNN);
}