#include <stdio.h>
int c[10005];
int main()
	{
		int n;
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
			scanf("%d",&c[i]);
		int t;
		scanf("%d",&t);
		while(t--)
			{
				int a,b;
				scanf("%d%d",&a,&b);
				int s=0;
				for(int i=a;i<=b;i++)
					s=s+c[i];
				printf("%d\n",s);
			}
		
		
	}