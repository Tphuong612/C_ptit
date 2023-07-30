#include <stdio.h>
int a[10005],b[10005];
int main()
	{
		int t;
		scanf("%d",&t);
		for(int i=1;i<=t;i++)
			{
				int n;
				scanf("%d",&n);
				for(int i=1;i<=n;i++)
					scanf("%d",&a[i]);
				int max=-1;
				for(int i=1;i<=n;i++)
					{
						b[a[i]]++;
						if(b[a[i]]>=max) max=b[a[i]];
					}
				for(int i=1;i<=n;i++)
			 		{
			 			if(b[a[i]]==max) 
			 				{
			 					printf("%d ",a[i]);
			 					b[a[i]]=0;
							}
					}
				printf("\n");
				for(int i=1;i<=n;i++)
					b[a[i]]=0;
			}
	}