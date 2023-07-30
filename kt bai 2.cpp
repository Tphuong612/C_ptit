#include <stdio.h>
int a[1005];
int b[1005];
int main()
	{
		
		int n;
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
			{
				scanf("%d",&a[i]);
			}
		for(int i=1;i<=n;i++)
			{
				b[a[i]]++;
			}
		
		for(int i=1;i<=n;i++)
			{
				if(b[a[i]]>=1)
					{
						printf("%d xuat hien %d lan\n",a[i],b[a[i]]);
						b[a[i]]=0;
					}
			}
			
		
	}
	