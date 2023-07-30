#include <stdio.h>
int a[105];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	for(int i=1;i<=n;i++)
		{
			if(i==1)
				{
					if(a[i]*a[i+1]<0) printf("%d ",a[i]);
				}
			else if(i==n)
				{
					if(a[i]*a[i-1]<0) printf("%d ",a[i]);
				}
			else 
				{
					if(a[i]*a[i+1]<0||a[i-1]*a[i]<0) printf("%d ",a[i]);
				}
		}
}