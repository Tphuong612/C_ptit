#include <stdio.h>
#include <math.h>
int KTsonguyento(int n)
	{
		if(n<2) return 0;
		for(int i=2;i<=sqrt(n);i++)
			{
				if (n%i==0) return 0;
			}
		return 1;
	}
int a[1000005];
int KTsofibonacci(int n)
	{
		int d=0;
		if(n==2||n==3) return 1;
		else 
			{
				a[0]=0;
				a[1]=1;
				for(int i=2;i<=n;i++)
							a[i]=a[i-1]+a[i-2];	
				for(int i=0;i<=n;i++)
					{
						if(n==a[i])
							{
								d++;	
							}
					}
				if(d==1) return 1;
				else return 0;
			}
	}
int tongcacchuso(int n)
	{
		int s=0;
		while(n!=0)
			{
				s=s+n%10;
				n=n/10;	
			}
		return s;
	}
int main()
	{
		int a,b;
		scanf("%d%d",&a,&b);
		if(a<b)
			{
				for(int i=a+1;i<b;i++)
					if(KTsonguyento(i)==1&&KTsofibonacci(tongcacchuso(i))==1) printf("%d ",i);
			}
		else 
			{
				for(int i=b+1;i<a;i++)
					if(KTsonguyento(i)==1&&KTsofibonacci(tongcacchuso(i))==1) printf("%d ",i);
			}
	}