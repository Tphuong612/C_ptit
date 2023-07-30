#include <stdio.h>
int a[1005];
int max(int a,int b)
	{
		if (a>b) return a;
		else return b;
	}
int main()
	{
		int n;
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
			scanf("%d",&a[i]);
		int dem=1, res=0;
		for(int i=2;i<=n;i++)
			{
				if(a[i]==a[i-1]) dem++;
				else dem=1;
				res=max(res,dem);
			}
		printf ("%d",res);
	}