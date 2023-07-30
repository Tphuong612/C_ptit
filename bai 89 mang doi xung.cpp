#include <stdio.h>
int a[100005];
int main()
	{
		int t;
		scanf("%d",&t);
		for(int i=1;i<=t;i++)
			{
				int n;
				scanf("%d",&n);
				for(int i=1;i<=n;i++)
					{
						scanf("%d",&a[i]);
					}
				int dem=0;
				for(int i=1;i<=n;i++)
					if (a[i]==a[n-i+1]) dem++;
				if(dem==n) printf("YES\n");
				else printf("NO\n");
			}
	}