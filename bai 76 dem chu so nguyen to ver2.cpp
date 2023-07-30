#include <stdio.h>
#include <math.h>
int a[10005];
int b[10005]={0};//mang danh dau so lan xuat hien cua cac phan tu trong a
int KTsnt(int n)
	{
		if(n<2) return 0;
		for(int i=2;i<=sqrt(n);i++)
			{
				if (n%i==0) return 0;
			}
		return 1;
	}
int main()
	{
		long long n;
		scanf("%lld",&n);
		int dem=0;//dem chu so, tao mang a
		while(n>0)
			{
				dem++;
				a[dem]=n%10;
				n/=10;
			}
		for(int i=1;i<=dem;i++)//dem so lan xuat hien dung mang danh dau
			{
				b[a[i]]++;
			}
		for(int i=dem;i>=1;i--)//output tinh te
			{
				if (b[a[i]]!=0&&KTsnt(a[i])==1)
					{
						printf("%d %d\n",a[i],b[a[i]]);
						b[a[i]]=0;//sau khi xuat ra thi cai so lan xuat hien cua a[i]=0
					}
			}
	}
	