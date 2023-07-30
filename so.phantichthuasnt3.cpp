#include <stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
		{
		
			int n;
			scanf("%d",&n);
			printf("Test %d: ",i);
			int j=2;
			while(n!=1)
				{
					if(n%j!=0) j++;
					else 
						{
							int dem=0;
							while(n%j==0)
								{
									dem++;
									n=n/j;
								}
							printf("%d(%d) ",j,dem);
						}
				}
			if(n==1) printf("\n");
		}
 	return 0;
}
