#include <stdio.h>
#include <math.h>
int check(int n)
	{
		int s=0;
		int cs;
		while (n!=0)
			{
				if(check(n%10)==0) return 0;
				s=s+n%10;
				n=n/10;	
			}
		if(check(s)==0) return 0;
		return 1;
	}
int main()
	{
		int t;
		scanf("%d",&t);
		while(t--)
			{
				int n;
		scanf("%d",&n);
		if(check(n)==1) printf("1");
		else printf("0");
			}
	}