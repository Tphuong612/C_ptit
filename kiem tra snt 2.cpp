#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n < 2) printf(" khong phai so nguyen to\n");
    int dem = 0;
    for(int i=2; i<=sqrt(n); i++)
		{
	        if(n % i == 0) dem++;
        }
    if(dem == 0) printf("so nguyen to\n");
    else printf("khong phai so nguyen to\n");  
}