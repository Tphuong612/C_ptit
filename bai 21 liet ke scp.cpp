#include <stdio.h>
#include <math.h>
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	float b=sqrt(n); int d=(int)sqrt(n);
	float a=sqrt(m); int c=(int)sqrt(m);
	int dem;
	if(a*a==m&&b*b>=n)
		{
			dem=d-c+1;
			printf("%d\n",dem);
			for(int i=c;i<=d;i++) printf("%d\n",i*i);
		}
	if((a*a==m&&b*b<n))
		{
			dem=d-c;
			printf("%d\n",dem);
			for(int i=c;i<=d-1;i++) printf("%d\n",i*i);
		}
	if((a*a<m&&b*b>=n)||(a*a<m&&b*b<n)||(a*a>m&&b*b>=n))
		{
			dem=d-c;
			printf("%d\n",dem);
			for(int i=c+1;i<=d;i++) printf("%d\n",i*i);
		}
	if(a*a>m&&b*b<n)
		{
			dem=d-c;
			printf("%d\n",dem);
			for(int i=c+1;i<=d-1;i++) printf("%d\n",i*i);
		}	
}