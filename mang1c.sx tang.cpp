#include <stdio.h>
void tang(int a[], int n)
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
		int n;
		scanf("%d",&n);
		int a[n+5];
		for(int i=1;i<=n;i++)
			{
				scanf("%d",&a[i]);
			}
		tang(a,n);
		for(int i=1;i<=n;i++)
			printf("%d ",a[i]);
		
	}
	