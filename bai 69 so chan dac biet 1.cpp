#include <stdio.h>
int a[1000005];
int main()
{
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
		{
			long long n;
			scanf("%lld",&n);
			long long sobandau=n;
			int dem1=0;
			while(n!=0)//tinh so luong cac chu so
				{
					n=n/10;	
					dem1++;
				}
			for(int i=1;i<=dem1;i++)// tao phan tu cho mang tinh tu hang don vi
				{
					a[i]=sobandau%10;
					sobandau/=10;
				}
			int dem2=0;
			for(int i=1;i<=dem1;i++)//tinh so cac chu so chan
					if(a[i]%2==0) dem2++;	
			if(dem2==dem1) printf("YES\n");
			else printf("NO\n");				
		}
}