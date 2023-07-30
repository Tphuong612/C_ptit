#include <stdio.h>
#include <math.h>
int kiemtrasnt(int n)
	{
		if(n<2) return 0;
		for(int i=2;i<=sqrt(n);i++)
			{
				if (n%i==0) return 0;
			}
		return 1;
	}
int kiemtrathuannghich(int n)
	{
		int sodao=0;
		int m=n;
		while(m>=1)
			{
				sodao=sodao*10+m%10;
				m=m/10;
			}
		if(n==sodao) return 1;
		else return 0;
	}
int main()
	{
		int t;
		scanf("%d",&t);
		for(int i=1;i<=t;i++)
			{
				int a,b;
				int dem=0;
				scanf("%d%d",&a,&b);
				for(int j=a;j<=b;j++)
					if(kiemtrasnt(j)==1&&kiemtrathuannghich(j)==1) 
						{
							printf("%d ",j);
							dem++;
							if(dem%10==0) printf("\n");
						}
				printf("\n\n");
					
			}
	}