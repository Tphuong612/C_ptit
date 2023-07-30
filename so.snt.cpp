#include <stdio.h>
int checkSNT(int n)
	{
		if(n<2) return 0;
		for(int i=2;i<=sqrt(n);i++)
			{
				if (n%i==0) return 0;
			}
		return 1;
	}
int main()
{
	int t;
	scanf("%d",&t);
	while (t--)
		{
			int n;
			scanf("%d",&n);
			if(checkSNT(n)==0) printf("NO\n");
			else printf("YES\n");
		}
 	return 0;
}
