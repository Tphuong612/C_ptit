#include <stdio.h>
int a[10005];
int b[10005];
int main()
	{
		int n;
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
			scanf("%d",&a[i]);
		for(int i=1;i<=n;i++)
			b[a[i]]++;
		for(int i=1;i<=n;i++)
			{
				if(b[a[i]]!=0)
					{
						printf("%d ",a[i]);
						b[a[i]]=0;
					}
			}
	}
