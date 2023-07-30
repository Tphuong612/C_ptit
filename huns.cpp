#include <stdio.h>
void function(int a, int b, long long c[10005][10005]){
	for(int i=1;i<=a;i++){
		for(int j=1;j<=b;j++){
			c[i][j]++;
		}
	}
}
long long z[10005][10005];
int main()
{
	int x;
	scanf("%d",&x);
	int y[103][2];
	int c=0,d=0;
	for(int i=0;i<x;i++){
		scanf("%d%d",&y[i][1],&y[i][2]);
		if(y[i][1]>c){
			c=y[i][1];
		}
		if(y[i][2]>d){
			d=y[i][2];
		}
	}
//	long long z[105][105];
	for(int i=c;i>0;i--){
		for(int j=d;j>0;j--){
			z[i][j]=0;
		}
	}
	for(int i=0;i<x;i++){
		function(y[i][1],y[i][2],z);
	}
	int count=0,max=z[1][1];
	for(int i=1;i<=c;i++){
		for(int j=1;j<=d;j++){
//			if(max<z[i][j]){
//				count=0;
//				max=z[i][j];
//				count++;
//			}
			if(max==z[i][j]){
				count++;
			}
		} 
	}
	printf("%d",count);
 	return 0;
}
