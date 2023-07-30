#include<stdio.h>
int a[100];

int main() {
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++) {
		scanf("%d", &a[i]); 
	}
	int max=0;
	for(int i=1; i<n; i++) {

		if(a[i]>=max) max=a[i];/*Tim so lon nhat trong mang*/
		}
	for(int i=0; i<=max; i+=2) {
		for(int j=1; j<=n; j++) {
			if(a[j]==i) printf("%d ", a[j]); /*tu 0 den max, neu co so chan nao giong trong mang thi in ra*/
		}
	}
	for(int i=1; i<=max; i+=2) {
		for(int j=1; j<=n; j++) {
			if(a[j]==i) printf("%d ", a[j]);/*tu 0 den max, neu co so le nao giong trong mang thi in ra*/
		}
	}
}