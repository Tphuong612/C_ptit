#include <stdio.h>
int a[10005];
#include <math.h>
int check(int a[],int n)
	{
		for(int i=1;i<=n/2;i++)
			{
				if(a[i]!=a[n-i+1]) return 0;
			}
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
				for(int i=1;i<=n;i++)
					{
						scanf("%d",&a[i]);
					}
				if (check(a,n)==1) printf("YES\n");
				else printf("NO\n");
			}
	}