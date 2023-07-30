#include <stdio.h>
int a[1000005];
int main()
	{
		int n,check=1;
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
			scanf("%d",&a[i]);
		for(int i=2;i<=n;i++)
			if(a[i]>a[i-1])
				{
					check=0;
					break;
				}	
		if(check==1) printf("YES");
		else printf("NO");
	}
	