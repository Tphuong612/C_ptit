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
						if(a[i]%2==0) printf("%d ",a[i]);
					}
				printf("\n");
			}
	}