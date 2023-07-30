
#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
		{
			
			int n;
			scanf("%d",&n);
			int tich=1;
			for(int i = 2; i <= n; i++)
				{
				    int dem = 0;
				    while(n % i == 0)
						{
				            dem++;
				            n /= i;
				        }
				    if(dem >= 1) tich=tich*i;
				}
			printf("%d\n",tich);
		}
}