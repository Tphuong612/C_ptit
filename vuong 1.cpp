#include<stdio.h>
#include<math.h>


void nhap(int a[],int n)
{
	scanf("%d",&n);
	for (int i=0;i<n;i++) scanf("%d",&a[i]);
}






void noibot(int a[],int n)
{
	for (int i=0;i<n-1;i++)
	{
		for (int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1]) 
				{
				    int tg = a[j];
				    a[j] = a[j+1];
				    a[j+1] = tg;
				}
		}
	}
}


void xuat(int a[],int n)
{
	for (int i=0;i<n;i++) printf("%d ",a[i]);
}
int main()
{	int a[1005];
	int n;
	scanf("%d",&n);
	nhap(a,n);
	noibot(a,n);
	xuat(a,n);
	
}