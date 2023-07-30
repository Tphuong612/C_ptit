#include <stdio.h>
main (){
	int a,b,c,d;
	printf("nhap so cap can xet: ");
	scanf("%d",&a);
	while(a--){
		printf("nhap cap phan tu thu %d: ",a);
		scanf("%d%d",&b,&c);
		for(int i=1;i<=b;i++){
			if (b%i==0&&c%i==0){
				d=i;
			}
		}
		printf("uoc chung lon nhat la: %d\n",d);
	}
	return 0;
}