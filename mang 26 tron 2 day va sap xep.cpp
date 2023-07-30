#include <stdio.h>
#include <stdlib.h>
int cmp1(const void *a, const void *b)//tang dan
	{
		return *(int*)a-*(int*)b; 
	}
int cmp2(const void *a, const void *b)//giam dan
	{
		return *(int*)b-*(int*)a; 
	}
//khi dung qsort i se chay tu 0, chay tu 1 bi loi
int main()
	{
		int t;
		scanf("%d",&t);
		for(int k=1;k<=t;k++)
			{
				int n;
				scanf("%d",&n);
				int a[1005],b[1005];
				for(int i=0;i<n;i++)
					scanf("%d",&a[i]);
				for(int i=0;i<n;i++)
					scanf("%d",&b[i]);
				qsort(a,n,sizeof(int),cmp1);//sap xep tang dan mang a
				qsort(b,n,sizeof(int),cmp2);//sap xep giam dan mang a
				printf("Test %d:\n",k);
				for(int i=0;i<n;i++)
					printf("%d %d ",a[i],b[i]);
				printf("\n");
			}
	}
