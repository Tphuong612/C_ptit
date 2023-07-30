#include <stdio.h>
int KTsokhonggiam(int n, int x)
	{
			// n la so chu so 1<n<7
			// x là so can xet
			int a[n]; 
			for(int i=0;i<n;i++)
				{
					a[n-1-i]=x%10;
					x=x/10;
				}	
			int dem=0;
			for(int i=0; i<n; i++)
				{ 
					if (a[i]<=a[i+1]) dem++;
				}
			if(dem==n-1) return 1;
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
									if(KTsokhonggiam(n,i)==1 && i%10!=0) printf("%d ",i);
								break;
						case 3: for(int i=1e2;i<=999;i++)
									if(KTsokhonggiam(n,i)==1 && i%10!=0) printf("%d ",i);
								break;
						case 4: for(int i=1e3;i<=9999;i++)
									if(KTsokhonggiam(n,i)==1 && i%10!=0) printf("%d ",i);
								break;
						case 5: for(int i=1e4;i<=99999;i++)
									if(KTsokhonggiam(n,i)==1 && i%10!=0) printf("%d ",i);
								break;
						case 6: for(int i=1e5;i<=999999;i++)
									if(KTsokhonggiam(n,i)==1 && i%10!=0) printf("%d ",i);
								break;	
					}
				printf("\n");
			}
	}