#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

#define db double
struct size {
	db x,y;
};

typedef struct size SZ;

db len(db a, db  b){
	db tmp=pow(a,2)+pow(b,2);
	return sqrt(tmp);// tinh do dai 1 canh
}


int main(){
	int n;
	scanf("%d",&n);
	while(n--)
		{
			SZ a,b,c;
			scanf("%lf%lf%lf%lf%lf%lf",&a.x,&a.y,&b.x,&b.y,&c.x,&c.y);
			float A=len(b.x-a.x,b.y-a.y),
			B=len(c.x-b.x,c.y-b.y),
			C=len(c.x-a.x,c.y-a.y);
			if( A+B> C && A+C >B && B+C >A)
				{
					db s =(db) sqrt((A+B+C)*(-A+B+C)*(A-B+C)*(A+B-C))/4;
					printf("%.2lf\n",s);
				}
			
			else 
				printf("INVALID\n");
		}
}