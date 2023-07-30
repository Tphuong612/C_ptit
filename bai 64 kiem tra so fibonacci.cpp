#include <stdio.h>

int main()
	{
		long long n,d=0;
		scanf("%lld",&n);	
		if(n==2||n==3) printf("1");
		else 
			{
				a[0]=0;
				a[1]=1;
				for(int i=2;i<=n;i++)
							a[i]=a[i-1]+a[i-2];	
		
				for(int i=0;i<=n;i++)
					{
						if(n==a[i])
							{
								d++;	
							}
					}
				if(d==1) printf("1");
				else printf("0");
			}
}