#include <stdio.h>
long long fb[100];
void tao()
	{
		fb[0]=0;
		fb[1]=1;
		for(int i=2;i<=94;i++)
			{
				fb[i]=fb[i-1]+fb[i-2];
			}
	}
int main()
	{
		int t;
		scanf("%d",&t);
		for(int i=1;i<=t;i++)
			{
				long long n;
				scanf("%lld",&n);
				tao();
				int check=0;
				for(int i=0;i<=95;i++)
					{ 
						if(n==fb[i]) 
							{
								check=1;break;
							}
					}
				if(check==1) printf("YES\n");
				else printf("NO\n");
			}
	}