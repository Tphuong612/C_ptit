#include <stdio.h>
int a[1005];
int main()
	{
		
				int n;
				scanf("%d",&n);
				for(int i=1;i<=n;i++)
					{
						scanf("%d",&a[i]);
					}
				for(int i=n;i>=1;i--)
					{ 
						printf("%d ",a[i]);
					}
			
	}