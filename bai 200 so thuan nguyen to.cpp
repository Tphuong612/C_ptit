#include <stdio.h>
#include <math.h>
int checkNT(int n)
	{
		if(n<=1) return 0;
		for(int i=2;i<=sqrt(n);i++)
			{
				if(n%i==0) return 0;
			}
		return 1;
	}
int check(int n)
	{
		int s=0;
		while (n)
			{
				int cs=n%10;
				if(checkNT(cs)==0) return 0;
				n=n/10;
				s=s+cs;	
			}
		if(checkNT(s)==0) return 0;
		return 1;
	}
int main()
	{
		int t;
		scanf("%d",&t);
		while(t--)
			{
				int a,b;
				scanf("%d%d",&a,&b);
				int dem=0;
				for(int i=a;i<=b;i++)
					{
						if(check(i)==1&&checkNT(i)==1) dem++;
					}
				printf("%d\n",dem);
			}
	}