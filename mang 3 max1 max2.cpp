#include <stdio.h>
int a[1005];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	int max1=a[1], max2=a[0];
	for(int i=1;i<=n;i++)
		{
			if(a[i]>max1)
				{
					max2=max1;
					max1=a[i];
				}
			else if(a[i]>max2&&max1>a[i]) max2=a[i];
		}
	printf("%d %d", max1,max2);
}