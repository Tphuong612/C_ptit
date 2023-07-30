#include <stdio.h>
int a[1005];
int max(int a,int b)
	{
		if (a>b) return a;
		else return b;
	}
int main()
	{
		int n;
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
			scanf("%d",&a[i]);
		int dem=1, res=0, index;
		for(int i=2;i<=n;i++)
			{
				if(a[i]>a[i-1]) dem++;//dem so phan tu trong day tang
				else dem=1;
				if (dem>=res)// day dai nhat (có dau bang in ra day cuoi, khong có in ra day dau)
					{
						res=dem;//luu bien res lon nhat
						index=i-res;	/* danh dau chi so ban dau, bien index khong thay doi 
										do i tang thi res cung tang neu do la day tang lien tiep roi */
					}
			}
		printf ("%d\n",res);
		for(int i=1;i<=res;i++)//lap so lan= so phan tu trong day tang
			printf("%d ",a[index+i]);//
	}