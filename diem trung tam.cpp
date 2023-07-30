#include<stdio.h>
int DiemTrungTam(int n){
	int a[n-1][2];
	for(int i=1;i<=n-1;i){
		scanf("%d %d",&a[i][1],&a[i][2]);
	}
	int dem=0;
	for(int j=1;j<=n-1;j++){
		
		if(a[j][1]==a[j+1][2]||a[j][1]==a[j+1][2]||a[j][2]==a[j+1][2]||a[j][2]==a[j+1][1]){
			dem++;
		}
	}
	if(dem==n-1){
		printf("YES");
	}else{printf("NO");
	}
}
main(){
	int n;
	scanf("%d",&n);
	DiemTrungTam(n);
}