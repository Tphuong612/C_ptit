#include <stdio.h>
#include <math.h>
int kiemtrasnt(int n)
	{
		if(n<2) return 0;
		for(int i=2;i<=sqrt(n);i++)
			{
				if (n%i==0) return 0;
			}
		return 1;
	}
int main()
	{
		int n;
		scanf("%d",&n);
		if(kiemtrasnt(n)==1) printf("%d la snt",n);
		else printf("%d khong la snt",n);
	}