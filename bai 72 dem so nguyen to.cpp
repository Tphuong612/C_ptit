#include <stdio.h>

#include <math.h>
int m[1005];
int KTsonguyento(int n)
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
		int t;
		scanf("%d",&t);
		for(int i=1;i<=t;i++)
			{
				int a,b;
				scanf("%d%d",&a,&b);
				int dem=0;
				for(int i=a;i<=b;i++)
					{
						int dem1=0;
						int sobandau=i;
						while(sobandau!=0)//tinh so chu so, tao mang
							{
								dem1++;
								m[dem1]=sobandau%10;
								sobandau=sobandau/10;	
							}
						int dem2=0;
						for(int j=1; j<=dem1; j++)//tinh so chu so la snt
							{ 
								if (KTsonguyento(m[j])==1) dem2++;
							}
						if(dem2==dem1&&KTsonguyento(i)==1) dem++;
					}
				printf("%d\n",dem);
			}
	}
