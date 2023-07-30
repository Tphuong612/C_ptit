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
				if(a[i]*a[i-1]<0) dem++;
				else dem=1;
				res=max(res,dem);
			}
		if (res==1) printf("0");// neu res=1 thi la tat ca deu duong
		else printf ("%d",res);
	}