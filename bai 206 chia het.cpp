#include <stdio.h>
int main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	int dem=0;
	for(int i=1;i<=n;i++)
		{
			int t=i;
			while(t%2==0) 
				{
					dem++;
					t/=2;
				}
		}
	if(k<=dem) printf("Yes");
	else printf("No");
 	return 0;
}
