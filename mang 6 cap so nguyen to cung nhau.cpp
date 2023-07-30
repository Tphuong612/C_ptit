#include <stdio.h>
int a[1005];
int UCLN(int a, int b)
	{
		if(a==0&&b!=0) return b;
		else if(a!=0&&b==0) return a;
		else if(a*b!=0)
			{
				while(a!=b)
					{
						if (a>b) a=a-b;
						else b=b-a;
					}
				return a;
			}
	}
int main()
	{
		int n;
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
			scanf("%d",&a[i]);
		int dem=0;
		for(int i=1;i<=n;i++)
			{
				for(int j=i+1;j<=n;j++)
					if(UCLN(a[i],a[j])==1) dem++;		
			}
		printf("%d",dem);	
	}