#include<stdio.h>

int check(int a[], int b){
	for(int i=1; i<=b; i++)
		{
			if(a[i]==(b-1)) return 1;
		}
	return 0;
}

int main(){
	int n;
	scanf("%d", &n);
	
	int a[n][n];
	for(int i=1; i<n; ++i)
		{
			for(int j=1; j<=2; ++j)
				{
					scanf("%d", &a[i][j]);
				}
		}
	
	int b[n]={0};	
	for(int i=1; i<=2; i++)
		{
			for(int j=1; j<=n; j++)
				{
					++b[a[j][i]];
				}
		}
	
	if(check(b,n)) printf("YES");
	else 
		printf("NO");
}
