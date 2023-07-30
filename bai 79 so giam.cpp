#include <stdio.h>
int a[1000005];
int KTsogiam(long n)
	{
			long sobandau=n;
			int dem1=0;
			while(n!=0)//tinh so chu so
				{
					n=n/10;
					dem1++;
				}
			int chuso;
			for(int i=1;i<=dem1;i++)//tao mang
				{
					chuso=sobandau%10;
					a[i]=chuso;
					sobandau=sobandau/10;
				}	
			int dem2=0;
			for(int i=1; i<dem1; i++)//dem so lan lon hon so dang truoc
				{ 
					if (a[i]<a[i+1]) dem2++;
				}
			if(dem2==dem1-1) return 1;
			else return 0;
	}
int main()
	{
		int t;
		scanf("%d",&t);
		for(int i=1;i<=t;i++)
			{
				long a,b;
				scanf("%ld%ld",&a,&b);
				int dem=0;
				for(int i=a;i<=b;i++)
					{
						if(KTsogiam(i)==1) dem++;
					}
				printf("%d\n",dem);
			}
	}