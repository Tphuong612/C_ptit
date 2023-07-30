#include <stdio.h>
int a[1000005];
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
		{
			int n,p;
			scanf("%d%d",&n,&p);
			int dem=0;
			for(int i=p;i<=n;i=i+p)//dua tat nhung so chia het cho p vao 1 mang
				{
					++dem;
					a[dem]=i;
				}
			int count=0;
			for(int i=1;i<=dem;i++)// dem so lan xuat hien cua p khi tach cac boi so cua p ra thua so nguyen to
				{
					a[i]=a[i]/p;
					while(a[i]%p==0) 
						{
							++count;
							a[i]/=p;
						}
				}
			printf("%d\n",dem+count);
		}
}