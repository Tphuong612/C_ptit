#include <stdio.h>
long long giaithua(long long n)//tinh giai thua cua 1 so
	{
		int m=1;
		for(int i=1;i<=n;i++) m=m*i;
		return m;	
	}
int main()
	{
		int n;
		scanf("%d",&n);
		int sobandau=n;
		int s=0;
		while(n!=0)//tinh tong giai thua cac chu so
			{
				s=s+giaithua(n%10);//n%10: lan luot ra cac chu so
				n/=10;
			}
		if (sobandau==s) printf("1");
		else printf("0");
	}