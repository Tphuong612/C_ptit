#include<stdio.h>
main(){
	int n;
	scanf("%d",&n);
	while(n--){
		long long a,b[100004];
		scanf("%d",&a);
		for(int i=0;i<a;i++){
			scanf("%lld",&b[i]);
		}
		int count=0;
		int c;
		for(int i=0;i<a;i++){
			for(int j=i+1;j<a;j++){
				if(b[i]==b[j]){
					c=b[i];
					count++;
					break;
				}
			}
			if(count){
				break;
			}
		}
		if(count!=0){
			printf("%d",c);
		}else {
			printf("NO");
		}
		printf("\n");
	}
}