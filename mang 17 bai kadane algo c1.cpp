#include <stdio.h>
long long a[100005];
long long max(long long a,long long b)
	{
		if(a>b) return a;
		else return b;
	}
int main()
{
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
		{
			int n;
			scanf("%d",&n);
			for(int i=1;i<=n;i++)
				scanf("%lld",&a[i]);
			long long s1=0,s2=0;
			for(int i=1;i<=n;i++)
				{
					s1=s1+a[i];
					if(s1<0) s1=0;//tao tong
					s2=max(s1,s2);//s2 co nhiem vu luu ki luc lon nhat
				}
			printf("%lld\n",s2);
		}
}