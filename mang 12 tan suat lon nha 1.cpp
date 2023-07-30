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
		int max=0,res=99999;
		for(int i=1;i<=n;i++)
			{
				if(b[a[i]]>max) 
					{
						max=b[a[i]];
					}
			}
		for(int i=1;i<=n;i++)
			{
				if(max==b[a[i]])
					{
						if(res>a[i]) res=a[i]; 
					}				
			}
		printf("%d %d",res,max);
		
	}
