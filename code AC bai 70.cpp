#include <stdio.h>
#include <math.h>
#include <string.h>

int N;
int a[1000] = {};

void Try(int i){
	if(i <= N){
		for(int j = 1;j <= 9;j++){
			if(a[i - 1] <= j){
				a[i] = j;
				if(i == N){
					for(int k = 1;k <= N;k++){
						printf("%d", a[k]);
					}
					printf(" ");
				}
				else{
					Try(i + 1);
				}
			}
		}
	}
}

int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		scanf("%d", &N);
		Try(1);
		printf("\n");
	}
	return 0;
}