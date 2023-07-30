#include<stdio.h>
#include<math.h>
main(){
	int n;
	scanf("%d",&n);
	for(int k=1;k<=n;k++){
		int a;
		scanf("%d",&a);
		int b[105],c[105];
		for(int i=1;i<=a;i++){
			scanf("%d",&b[i]);
		}
		int count=0;
		int max=0;
		for(int i=1;i<=a;i++){
			if(b[i]<b[i+1]){
				count++;
			}
			if(count>max){
				max=count;
				}
			if(b[i]>=b[i+1]){
				count=0;
			}	
		}
		printf("Test %d:\n",k);
		printf("%d\n",max+1);
		int count1=0;
		for(int i=1;i<=a;i++){
			if(b[i]<b[i+1]){
				count1++;
			}
			if(count1==max){
				for(int j=i-max+1;j<=i+1;j++){
					printf("%d ",b[j]);
				}
				printf("\n");
				count1=0;
			}
			if(b[i]>=b[i+1]){
				count1=0;
			}
		}
		printf("\n");
	}

}