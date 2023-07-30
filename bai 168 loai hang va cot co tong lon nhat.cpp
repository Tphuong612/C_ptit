#include <stdio.h>
long long a[55][55];
int main()
{
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
		{
			long long m,n;
			scanf("%lld%lld",&m,&n);
			for(int i=1;i<=m;i++)
				{
					for(int j=1;j<=n;j++)
						scanf("%lld",&a[i][j]);
				}
			int res1=-9999999, res2=-9999999;
			int hang, cot;
			for(int i=1;i<=m;i++)
				{
					long long sum=0;
					for(int j=1;j<=n;j++)
						sum+=a[i][j];
					if(sum>res1) 
						{
							res1=sum;
							hang=i;
						}
				}
			for(int j=1;j<=n;j++)
				{
					long long sum=0;
					for (int i=1;i<=n;i++)
						if(i!=hang) sum=sum+a[i][j];
					if (sum>res2) 
						{
							res2=sum;
							cot=j;
						}
				}
			printf("Test %d:\n",i);
			for(int i=1;i<=m;i++)
				{
					if(i!=hang) 
						{
							for(int j=1;j<=n;j++)
								{
									if(j!=cot) printf("%d ",a[i][j]);
								}
							printf("\n");
						}
				}
		}
}