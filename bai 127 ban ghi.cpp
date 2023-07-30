#include <stdio.h>
#include <math.h>
struct tamgiac{
	int a;
	int b;
	int c;
	int S;
};
typedef struct tamgiac tg;
void nhap(tg t[], int n)
	{
		for(int i=0;i<n;i++)
			scanf("%d%d%d",&t[i].a, &t[i].b,&t[i].c);
	}
double tinhS(tg t)
	{
		double p=(double) 0.5*(t.a+t.b+t.c);
		double S=(double) sqrt(p*(p-t.a)*(p-t.b)*(p-t.c));
		return S;
	}
void xuat(tg t[], int n)
	{
		for(int i=0;i<n;i++)
			{
				for(int j=i+1;j<n;j++)
					{
						if(tinhS(t[i])>tinhS(t[j]))
							{
								tg k=t[i];
								t[i]=t[j];
								t[j]=k;
							}
					}
			}
		for(int i=0;i<n;i++)
			printf("%d %d %d\n", t[i].a, t[i].b, t[i].c);
			
	}
int main()
	{
		int n;
		scanf("%d",&n);
		tg t[n];
		nhap(t,n);
		xuat(t,n);
			
	}
