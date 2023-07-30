#include <stdio.h>
int x[1000005], y[1000005];
int check(int x0, int y0, int x1, int y1, int x2, int y2 )
	{
		if ((x1-x0)*(y2-y0)==(y1-y0)*(x2-x0)) return 1;
		else return 0;
	}
int main()
	{
		int n;
		scanf("%d",&n);
		for(int i=1;i<=n-1;i++)
			{
				scanf("%d%d",&x[i],&y[i]);
			}
		int ok=1;
		for(int i=1;i<=n-1-2;i++)
			{
				if(check(x[i],y[i],x[i+1],y[i+1],x[i+2],y[i+2])==0) 
					{
						ok=0;
						break;
					}
			}
		if(ok==0) printf("No");
		else printf ("Yes");
	}
