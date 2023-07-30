#include <stdio.h>
int check(int a[], int i, int n)
	{
		for(int j=i+1;j<=n;j++)
			{
				if(a[i]<=a[j]) return 0;
			}
		return 1;
	}
void giam(int a[], int n)
	{
		for(int i=2;i<=n;i++)
			{
				for(int j=1;j<i;j++)
					{
						if(a[i]>a[j])
							{
								int t=a[i];
								a[i]=a[j];
								a[j]=t;
							}
					}
			}
	}
int main()
	{
		int t;
		scanf("%d",&t);
		while(t--)
			{
				int n;
				scanf("%d",&n);
				int a[n+5];
				int b[n+5];
				for(int i=1;i<=n;i++)
					{
						scanf("%d",&a[i]);
					}
				int dem=0;
				for(int i=1;i<=n;i++)
					if(check(a,i,n)==1) 
						{
							dem++;
							b[dem]=a[i];
						}
				giam(b,dem);
				for(int i=1;i<=dem;i++)
					{
						printf("%d ",b[i]);
					}
				printf("\n");
			}
		
		
	}
	