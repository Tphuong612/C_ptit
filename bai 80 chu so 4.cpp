#include <stdio.h>
#include <math.h>
int KTthuannghich(int a)
	{
		int sodao=0;
		int sobandau=a;
		while(a!=0)
			{
				sodao=sodao*10+a%10;
				a/=10;
			}
		if(sodao==sobandau) return 1;
		else return 0;
	}
int KTchuso4(int a)
	{
		while(a!=0)
			{
				int chuso=a%10;
				a=a/10;
				if(chuso==4) return 0;
			}
		return 1;
	}
int tongchuso(int a)
	{
		int s=0;
		while(a!=0)
			{
				s=s+a%10;
				a/=10;
			}
		return s;
	}
int main()
	{
		int t;
		scanf("%d",&t);
		for(int i=1;i<=t;i++)
			{
				int n;
				scanf("%d",&n);
				for(int i=pow(10,n-1);i<pow(10,n);i++)
					{
						if(KTchuso4(i)==1&&(tongchuso(i)%10==0)&&KTthuannghich(i)==1) printf("%d ",i);
					}
				printf("\n");
			}
	}