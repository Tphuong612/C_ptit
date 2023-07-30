#include <stdio.h>
#include <math.h>
int a[1000005];
int b[1000005];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<=n;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<=n;i++)
		b[i]=pow(a[i],i);
	for (int i=0;i<=n;i++)
		printf("%d ",b[i]);
 	return 0;
}
