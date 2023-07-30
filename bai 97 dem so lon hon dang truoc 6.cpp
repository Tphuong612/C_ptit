#include <stdio.h>
int a[105];

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
				int dem2=1;
				for(int i = 2; i <=n; i++)
					{
						int dem1=0;
				        for(int j=i-1;j>=1;j--)
				        	{
				        		if(a[i]>=a[j]) dem1++;
							}
						if(dem1==i-1) dem2++;
			    	}
			    printf("%d\n",dem2);
			}
	}