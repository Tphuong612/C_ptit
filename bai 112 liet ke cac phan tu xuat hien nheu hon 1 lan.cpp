#include <stdio.h>
int a[1005];
int b[1005];//mang so lan xuat hien cua a
int c[1005];//mang phu cua d de xuat ra
int main()
	{
		int n;
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
			scanf("%d",&a[i]);
		for(int i=1;i<=n;i++)
			b[a[i]]++;
		int dem=0;
		for(int i=1;i<=n;i++)
			{
				if (b[a[i]]>1) 
					{
						dem++;
						c[dem]=a[i];
						b[a[i]]=0;
					}
			}
		printf("%d\n",dem);
		for(int i=1;i<=dem;i++)
			{
				printf("%d ",c[i]);
			}
				
	}
