#include<stdio.h>
main(){
	int n;
	unsigned int b;
	scanf("%d",&n);
	int a[n-1][2];
	for(int i=1;i<n;i++){
		scanf("%d %d",&a[i][1],&a[i][2]);
	}
	int dem=0;
	for(int i=1;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i][2]==a[j][2]||a[i][2]==a[j][1]||a[i][1]==a[j][1]||a[i][1]==a[j][2]){
				dem++;
			}
		}
	}
	printf("dem %d \n",dem);
	b=(n-1)*(n-2)/2;
	if (dem==b){
		printf("YES");
	} else printf("NO");

}