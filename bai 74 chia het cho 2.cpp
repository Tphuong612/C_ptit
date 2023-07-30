#include <stdio.h>
int a[1005];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	int max=a[0];
	for(int i=1;i<=n;i++)
		{
			if(a[i]>max) 
			{
				printf("%d",a[i]);
				max=a[i];
			}
		}
}	