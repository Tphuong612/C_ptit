#include <stdio.h>
int a[10005],b[10005]={0};
int main()
	{
		int n;
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
			scanf("%d",&a[i]);
		for(int i=1;i<=n;i++)
			{
				b[a[i]]++;
				if(b[a[i]]!=1) 
					{
						printf("%d",a[i]);
						break;
					}
				else 
					{
						printf("-1");
						break;
					}
			}
		
	}