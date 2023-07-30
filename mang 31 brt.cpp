#include <stdio.h>
#include <stdlib.h>
int a[100005];
int cmp(const void *a,const void *b)//tang dan
	{
		return *(int*)a-*(int*)b;
	}
int main()
{
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
		{
			int n;
			scanf("%d",&n);
			for(int i=0;i<n;i++)
				scanf("%d",&a[i]);
			qsort(a,n,sizeof(int),cmp);
			long long min=999999999999, res=0;
			for(int i=1;i<n;i++)
				{
					res=a[i]-a[i-1];
					if(res<min) min=res;
				}
			long long dem=0;
			for(int i=1;i<n;i++)
				{
					res=a[i]-a[i-1];
					if(res==min) dem++;
				}
			printf("%lld %lld\n",min,dem);
			
		}
}
