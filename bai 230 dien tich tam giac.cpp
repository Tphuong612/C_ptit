#include <stdio.h>
#include <math.h>
struct point{
	double x;
	double y;
};
typedef struct point p;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
		{
			p a,b,c;
			scanf("%lf%lf%lf%lf%lf%lf",&a.x,&a.y,&b.x,&b.y,&c.x,&c.y);
			double C=sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y)),
			B=sqrt((a.x-c.x)*(a.x-c.x)+(a.y-c.y)*(a.y-c.y)),
			A=sqrt((c.x-b.x)*(c.x-b.x)+(c.y-b.y)*(c.y-b.y));
			
			if(A+B<=C||B+C<=A||C+A<=B) printf("INVALID\n");
			else 
				{
					double p=(A+B+C)/2;
					double dientich=(double) sqrt(p*(p-A)*(p-B)*(p-C));
					printf("%.2lf\n",dientich);
				}
		}
 	return 0;
}
