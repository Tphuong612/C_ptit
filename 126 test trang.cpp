#include <stdio.h>
int a[1005];
int main()
{
	int n;
	scanf("%d",&n);
	if(n==0) printf("0");
	int dem=0;
	while(n>0)
		{
			dem++;
			a[dem]=n%2;
			n=n/2;
		}
	for(int i=dem;i>=1;i--) printf("%d",a[i]);
}