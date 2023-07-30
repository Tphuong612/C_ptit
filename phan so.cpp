#include <stdio.h>
#include <math.h>
struct phanso 
	{
		int tu;
		int mau;
	};
typedef struct phanso PS;
void nhapPhanso (PS *p, PS *q)
	{
		scanf("%d",&p->tu);
		scanf("%d",&p->mau);
		scanf("%d",&q->tu);
		scanf("%d",&q->mau);	
	}
int UCLN(int a, int b)
	{
		if (a==0||b==0) return a+b;
		
		while(a!=b)
			{
				if (a>b) a=a-b;
				else b=b-a;
			}
		return a;
	}
void solve(PS *p, PS *q)
	{
		int uocCLN1=UCLN(p->mau, q->mau);
		int BCNN=(p->mau)*(q->mau)/uocCLN1;
		p->tu*=(BCNN/(p->mau));
		q->tu*=(BCNN/(q->mau));
		
		int tong=p->tu+q->tu;// tong roi rut gon
		printf("%d/%d %d/%d\n",p->tu,BCNN,q->tu,BCNN);
		
		int uocCLN2=UCLN(tong,BCNN);// quy dong
		printf("%d/%d\n",tong/uocCLN2,BCNN/uocCLN2);
		
		int tu3=p->tu;
		int mau3=q->tu;
		int uocCLN3=UCLN(tu3,mau3);
		printf("%d/%d\n",tu3/uocCLN3, mau3/uocCLN3);	
	}

int main()
{
	PS p, q;
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		{
			nhapPhanso(&p,&q);
			printf("Case #%d:\n",i);
			solve(&p,&q);
		}
}
