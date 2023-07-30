#include <stdio.h>
#include <math.h>
int a[20];
int KT(int n)
	{
		int dem1=0;
		int s=0;
		while(n!=0)
			{
				dem1++;
				a[dem1]=n%10;
				s=s+a[dem1];
				n=n/10;
			}
		int check=0;
		for(int i=1;i<=dem1;i++)
			if(a[i]==6) check=1;
		if(check==1&&s%10==8) return 1;
		else return 0;	
	}
int check(int n)
	{
		int sodao=0;
		int sobandau=n;
		while(n!=0)
			{
				sodao=sodao*10+n%10;
				n/=10;
			}
		if(sodao==sobandau) return 1;
		else return 0;
	}
int main()
	{
		int a,b;
		scanf("%d%d",&a,&b);
		int dem=0;
		if(a<b)
			{
				for(int i=a;i<=b;i++)
					if(KT(i)==1&&check(i)==1) printf("%d ",i);
			}
		else 
			{
				for(int i=b;i<=a;i++)
					if(KT(i)==1&&check(i)==1) printf("%d ",i);
			}		
	}
	