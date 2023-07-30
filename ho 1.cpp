#include "stdio.h"
#include "math.h"


int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		if(a[i]<2)
		printf("\nNO");
		int count= 0;
		for(int j=2;j<=sqrt(a[i]);j++){
			if(a[i]%j==0){
				count ++;
			}
		}
		if(count==0){
			printf("\nYES");
		}else{printf("\nN0");
			
		}
}
}