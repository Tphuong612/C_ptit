#include <stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
		{
		
			int n;
			scanf("%d",&n);
			int s=0;
			while(n!=0)
				{
					s=s+n%10;
					n=n/10;	
				}
			printf("%d\n",s);
		}
}