#include <stdio.h>
#include <math.h>
int main()
{
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
		{
			int n;
			scanf("%d",&n);
			if (n<2) printf("NO\n");
			else 
				{
					int dem=0;
					for(int i=2;i<=sqrt(n);i++)
						{
							if (n%i==0) 
								{ 	
									dem++;
									printf("NO\n");
									break;
								}
						}
					if(dem==0) printf("YES\n");
				}	
		}
}