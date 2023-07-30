#include <stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
		{
		
			int n;
			scanf("%d",&n);
			int socuoi=n%10;
			while(n>9) n=n/10;	
			int sodau=n;
			if(sodau==socuoi) printf("YES\n");
			else printf("NO\n");
		}
}