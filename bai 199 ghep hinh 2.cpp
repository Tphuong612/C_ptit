#include <stdio.h>
#include <math.h>
int max(int a, int b, int c)
	{
		int max=a;
		if(b>max&&b>c) max=b;
		else if (c>max&&c>b) max=c;
		return max;
	}
int checkSCP(int n)
	{
		int k=(int)sqrt(n);
		if (k*k==n) return 1;
		else return 0;
	}
int main()
	{
		int a,b,c,d,e,f;
		scanf("%d%d",&a,&b);
		scanf("%d%d",&c,&d);
		scanf("%d%d",&e,&f);
		int dientich=a*b+c*d+e*f;
		if(checkSCP(dientich)==0) printf("NO");
		else 
			{
				if(a+c+e==b+d+f||a+d+e==b+c+f||a+d+f==b+c+e||a+c+f==b+d+e) printf("YES");
				else printf("NO"); 
			}
		
}