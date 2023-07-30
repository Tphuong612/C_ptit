#include <stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
		{
			int n;
			scanf("%d",&n);
			printf("%d = ",n);
			int i=2;
			while(n!=1)
				{
					if(n%i!=0) i++;
					else 
						{
							int dem=0;
							while(n%i==0)
								{
									dem++;
									n=n/i;
								}
//							if (n>1) printf("%d^%d * ",i,dem);
//							else printf("%d^%d\n", i, dem);

							if(dem>1) printf("%d^%d",i,dem);
							else printf("%d",i);
							
							if(n>1) printf(" * ");
							else printf("\n");
						}
				}
		}
 	return 0;
}
