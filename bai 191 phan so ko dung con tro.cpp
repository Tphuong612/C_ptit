#include <stdio.h>
struct PS
	{
			int tu;
			int mau;
	};
typedef struct PS PS;

int UCLN(int a, int b)
	{
		while(a!=b)
			{
				if (a>b) a=a-b;
				else b=b-a;
			}
		return a;
	}
long long BCNN(int a, int b)
	{
		return a*b/UCLN(a,b);
	}
PS rutgon(PS a)
	{
		int uc=UCLN(a.tu,a.mau);
		a.tu/=uc;
		a.mau/=uc;
		return a;
	}
void solve(PS p, PS q)
	{	
		p=rutgon(p);
		q=rutgon(q);
		PS c,d;
		c.mau=d.mau=BCNN(p.mau,q.mau);
		c.tu=p.tu*(c.mau/p.mau);
		d.tu=q.tu*(d.mau/q.mau);
		printf("%d/%d %d/%d\n",c.tu,c.mau,d.tu,d.mau);
		
		PS tong;
		tong.tu=c.tu+d.tu;
		tong.mau=c.mau;
		printf("%d/%d\n",tong.tu,tong.mau);
		
		PS thuong;
		thuong.tu=p.tu*q.mau;
		thuong.mau=p.mau*q.tu;
		thuong=rutgon( thuong );
		printf("%d/%d\n",thuong.tu,thuong.mau);
		
	}
int main()
	{
		
		int n;
		scanf("%d",&n);
		PS p,q;
		for(int i=1;i<=n;i++)
			{
				scanf("%d%d%d%d",&p.tu,&p.mau,&q.tu,&q.mau);
				printf("Case #%d:\n",i);
				solve(p,q);
			}
	}