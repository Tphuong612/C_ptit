#include <stdio.h>
#include <math.h>
struct phanso 
	{
		int tu;
		int mau;
	};
typedef struct phanso PS;
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
void rutgon(PS *a)
	{
		int uc=UCLN(a->tu,a->mau);
		a->tu/=uc;
		a->mau/=uc;
	}
void solve(PS *p, PS *q)
	{	
		rutgon(p);
		rutgon(q);
		int mau=BCNN(p->mau,q->mau); // quy dong
		p->tu*=(mau/(p->mau));
		q->tu*=(mau/(q->mau));
		printf("%d/%d %d/%d\n",p->tu,mau,q->tu,mau);
		
		int tu2=p->tu+q->tu;// tong roi rut gon
		int lan=UCLN(tu2,mau);
		printf("%d/%d\n",tu2/lan,mau/lan);
		
		int tu3=p->tu;
		int mau3=q->tu;
		int lan3=UCLN(tu3,mau3);
		printf("%d/%d\n",tu3/lan3, mau3/lan3);	
	}

int main()
{
	PS p, q;
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		{
			scanf("%d%d%d%d",&p.tu,&p.mau,&q.tu,&q.mau);
			printf("Case #%d:\n",i);
			solve(&p,&q);
		}
}
