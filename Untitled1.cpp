#include<stdio.h>

int main(){
	unsigned int a, b;
	scanf("%d%d", &a, &b);
	printf(" %d", a+b);
	printf(" %d", a-b);
	printf(" %d", a*b);
	printf(" %.2f",(float)a/b);
	printf(" %d", a%b);
}