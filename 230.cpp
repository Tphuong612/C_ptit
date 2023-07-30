#include <stdio.h>
#include <math.h>
struct point{
	double x;
	double y;
};
typedef struct point p;
double length(double a, double b)
	{
		double t= a*a+b*b;
		return sqrt(t);
	}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
		{
			p a,b,c;
			scanf("%lf%lf%lf%lf%lf%lf",&a.x,&a.y,&b.x,&b.y,&c.x,&c.y);
			double C=length(a.x-b.x,a.y-b.y), A=length(b.x-c.x,b.y-c.y), B=length(a.x-c.x,a.y-c.y);
			if(A+B<=C||B+C<=A||C+A<=B) printf("INVALID\n");
			else 
				{
					double dientich=(double) sqrt((A+B+C)*(A+B-C)*(B+C-A)*(C+A-B))/4;
					printf("%.2lf\n",dientich);
				}
		}
 	return 0;
}
