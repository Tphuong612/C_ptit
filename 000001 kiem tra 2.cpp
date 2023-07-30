#include <stdio.h>

int check(int a,int col, int n, int b[][105])
{
	int dem=0;
	for(int i=0;i<n;i++)
		{
			if(a==b[i][col]) ++dem;
		}
	if(dem==2) return 1;
	return 0;
}
int main()
{
 	int t;
 	scanf("%d",&t);
 	while(t--)
 		{
 			int n;
 			scanf("%d",&n);
 			int a[105][105];
 			for(int i=0;i<n;i++)
 				{
 					for(int j=0;j<n;j++)
 						{
 							scanf("%d",&a[i][j]);
						 }
				 }
			
			int ts[105][105],
			int r=0,c=0;
			for(int i=0;i<n;i++)
				{
					for(int j=0;j<n;j++)
						{
							if(check(a[j][i],i,n,))
						}
				}
		}
}
