#include <stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
		{
			int n;
			scanf("%d",&n);
			int a[10]={1000,500,200,100,50,20,10,5,2,1};
			int dem=0;
			for(int i=0;i<10;i++)
				{
					dem=dem+n/a[i];
					n=n%a[i];
				}
			printf("%d\n",dem);
		}
}
