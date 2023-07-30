#include <stdio.h>
// sap xep chon la tim phan tu nho nhat trong cho con lai de sap xep thu tu
int main()
	{
		int n;
		scanf("%d",&n);
		int a[n+5];
		for(int i=1;i<=n;i++)
			scanf("%d",&a[i]);
		for(int i=1;i<=n-1;i++)
			{
				int min=i;
				for(int j=i+1;j<=n;j++)
					{
						if(a[j]<a[min]) min=j;
					}
//				int t=a[min];
//				a[min]=a[i];
//				a[i]=t;
				int t=a[i];
				a[i]=a[min];
				a[min]=t;
				printf("Buoc %d: ",i);
				for(int j=1;j<=n;j++)
					printf("%d ",a[j]);
				printf("\n");
			}
	}
