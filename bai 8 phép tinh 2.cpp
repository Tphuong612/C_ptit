#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
			int tong=a+b;
			int hieu=a-b;
			long long tich=(long long)a*b;
			int chianguyen=a/b;
			int chiadu=a%b;
			float ketquathuc=(float)a/b;
			printf("%d\n",tong);
			printf("%d\n",hieu);
			printf("%lld\n",tich);
			printf("%d\n",chianguyen);
			printf("%d\n",chiadu);
			printf("%.2f",ketquathuc);	
		
}