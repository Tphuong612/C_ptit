#include <stdio.h>
int main()
{
	int a,b,c,d,e,f;
	scanf("%d%d",&a,&b);
	scanf("%d%d",&c,&d);
	scanf("%d%d",&e,&f);
	if(a+c+e==b+d+f||a+d+e==b+c+f||a+d+f==b+c+e||a+c+f==b+d+e) printf("YES");
	else printf("NO"); 
}