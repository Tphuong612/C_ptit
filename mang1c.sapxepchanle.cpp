#include <stdio.h>
void sapxep(int a[], int n)// sap xep tang dan theo sap xep chon
	{
		for(int i=1;i<=n-1;i++)
			{
				int min=i;
				for(int j=i+1;j<=n;j++)
					{
						if(a[j]<a[min]) min=j;
					}
				int t=a[i];
				a[i]=a[min];
				a[min]=t;
			}
	}
int main()
	{
		int n;
		scanf("%d",&n);
		int a[1005];
		int b[1005];
		int c[2005];
		int demle=0, demchan=0;
		for(int i=1;i<=n;i++)
			{
				scanf("%d",&c[i]);
				if (c[i]%2==0) 
					{
						demchan++;
						a[demchan]=c[i];
					}
				else 
					{
						demle++;
						b[demle]=c[i];
					}
			}
		sapxep(a,demchan);
		sapxep(b,demle);
		for(int i=1;i<=demchan;i++)
			printf("%d ",a[i]);
		for(int i=1;i<=demle;i++)
			printf("%d ",b[i]);
	}
