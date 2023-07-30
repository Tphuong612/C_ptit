#include<stdio.h>
int check(int a[], int i)
	{
		for(int j=1;j<i;j++)
			{
				if(a[i]<a[j]) return 0;
			}
		return 1;
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
			for(int i=1;i<=n;i++)
				scanf("%d",&a[i]);
			int dem=1;
			for(int i=2;i<=n;i++)
				{
					if(check(a,i)==1) dem++;
				}
			printf("%d\n",dem);
		}
}