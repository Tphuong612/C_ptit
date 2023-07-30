#include <stdio.h>
#include <math.h>
long long a[1000005];
int main()
	{
		int t;
		scanf("%d",&t);
		for(int i=1;i<=t;i++)
			{
				long long n;
				scanf("%lld",&n);
				int c;
				scanf("%d",&c);
				int b[4]={1000,2000,3000,5000};
				for(int i=0;i<=c;i++)
					{
						for(int j=0;j<4;j++)
							a[4*i+j+1]=b[j]*pow(10,i);
					}
				int dem=0;
				for (int i=4*(c+1);i>=1;i--)
					{
						dem=dem+n/a[i];
						n=n%a[i];		
					}
				if (n!=0) printf("0\n");
				else printf("%d\n",dem);
			}
	}