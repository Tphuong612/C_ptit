#include <stdio.h>
int b[1000005];//mang chua so lan xuat hien cua cac phan tu
int main()
	{
		int n;
		scanf("%d",&n);
		int a[n+5];
		for(int i=1;i<=n;i++)
			scanf("%d",&a[i]);
		for(int i=1;i<=n;i++)
			{
				b[a[i]]++;
			}
		int dem=0;
		for(int i=1;i<=n;i++)
			{
				if(b[a[i]]>1)
					{
						printf("%d ",a[i]);
						b[a[i]]=0;
					}
				if(b[a[i]]==1) dem++;
			}
		if(dem==n) printf("0");
	}
