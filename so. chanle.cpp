#include <stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
		{
			int n;
			scanf("%d",&n);
			if(n%2==1) printf("le\n");
			else printf ("chan\n");
		}
 	return 0;
}
