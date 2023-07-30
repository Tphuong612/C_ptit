#include <stdio.h>
int a[1005], b[10005], c[1005];
void sapxep(int a[],int n)//sap xep tang dan
	{
		for(int i=1;i<n;i++)
			{
				for(int j=1;j<=n-i;j++)
					if(a[j]>=a[j+1]) 
					 	{
				 			int k=a[j+1];
							a[j+1]=a[j];
							a[j]=k;	
						}
			}
	}
int main()
	{
		int n;
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
			scanf("%d",&a[i]);
		int dem1=0, dem2=0;
		for(int i=1;i<=n;i++)//tao mang chan, mang le
			{ 
				if(a[i]%2==0) 
					{
						dem1++;
						b[dem1]=a[i];
					}
				else 
					{
						dem2++;
						c[dem2]=a[i];
					}
			}
		sapxep(b,dem1);
		sapxep(c,dem2);
		for(int i=1;i<=dem1;i++)
			printf("%d ",b[i]);
		for(int i=1;i<=dem2;i++)
			printf("%d ",c[i]);
	}