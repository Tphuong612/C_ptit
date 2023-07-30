#include <stdio.h>
int main()
	{
		int n;
		scanf("%d",&n);
		int a[n+5][n+5];
		for(int i=1;i<=n;i++)
			{
				int k=1;
				for(int j=1;j<=n;j++)
					{
						if(j<=i) printf("0 ");
						else 
							{
								printf("%d ",k++);
							}	
					}
				printf("\n");
			}
	}
