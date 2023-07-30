#include <stdio.h>
#include <conio.h>
int main (){
	int a;
	int sum=0;
	scanf("%d",&a);
	if (a<=10e9&&a>=0){
		for(;a!=0;){
			a/=10;
			sum+=a%10;
			printf("%d",sum);
		}
	}
	else {
		printf ("khong thoa man");
	}
	return 0;
}