#include <stdio.h>
int a[1000005];
int KTsokhonggiam(long n)
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
					if (a[i]>=a[i+1]) dem2++;
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
				int n;
				scanf("%d",&n);
				switch(n)
					{
						case 2: for(int i=10;i<=99;i++)
									if(KTsokhonggiam(i)==1) printf("%d ",i);
								break;
						case 3: for(int i=1e2;i<=999;i++)
									if(KTsokhonggiam(i)==1) printf("%d ",i);
								break;
						case 4: for(int i=1e3;i<=9999;i++)
									if(KTsokhonggiam(i)==1) printf("%d ",i);
								break;
						case 5: for(int i=1e4;i<=99999;i++)
									if(KTsokhonggiam(i)==1) printf("%d ",i);
								break;
						case 6: for(int i=1e5;i<=999999;i++)
									if(KTsokhonggiam(i)==1) printf("%d ",i);
								break;	
					}
				printf("\n");
			}
	}