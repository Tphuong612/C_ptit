#include <stdio.h>
#include <algorithm>
using namespace std;
int main(){
	int a,b,c,d,e;
	printf("nhap a: "); scanf("%d",&a);
	printf("nhap b: "); scanf("%d",&b);	
	printf("nhap c: "); scanf("%d",&c);
	e=min(a,b);
	printf("min la: %d", min(e,c));
	return 0;
}