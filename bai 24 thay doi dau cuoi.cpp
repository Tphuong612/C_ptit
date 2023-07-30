#include <stdio.h>
#include <math.h>
int main()
{
	long n;
	scanf("%ld",&n);
	int socuoi=n%10;
	int sobandau=n;
	int dem;
	while (n!=0)//dem so luong chu so
		{
			n/=10;
			dem++;
		}//den day n=0;
	int sodau=sobandau/pow(10,dem-1);//tim so dau
	int socantim=socuoi*pow(10,dem-1)+(sobandau-sodau*pow(10,dem-1)-socuoi+sodau);
				//dung cho moi truong hop
	printf("%ld",socantim);
}