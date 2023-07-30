#include <stdio.h>
int a[1005];
int main()
	{
		int t;
		scanf("%d",&t);
		for(int k=1;k<=t;k++)
			{
				int n;
				scanf("%d",&n);
				for(int i=1;i<=n;i++)
					scanf("%d",&a[i]);
				int dem=0;
				for(int i=2;i<=n;i++)
					{
						if(a[i]==a[i-1]) dem++;
					}
				printf("%d",dem);
				
			}
			
	}