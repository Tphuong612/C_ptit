#include <stdio.h>
int a[1005];
int main()
{
	int n;
	scanf("%d",&n);
	int s=0;
	for(int i=1;i<=n;i++)
		{
			scanf("%d",&a[i]);
			s=s+a[i];
		}
	printf("%.3f",(float)s/n);
}