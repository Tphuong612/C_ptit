#include <stdio.h>
int a[1005], b[10005], c[1005];
void sapxep(int a[],int n)
	{
		for(int i=1;i<n;i++)
			{
				for(int j=1;j<=n-j;i++)
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
		for(int i=1;i<=n;i++)
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
		for(int i=1;i<=dem1;i++)
			printf("%d ",a[i]);
		for(int i=1;i<=dem2;i++)
			printf("%d ",a[i]);
	}