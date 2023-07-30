#include<stdio.h>
#include<math.h>

int check(int n){
	if(n==0 || n==1) return 0;
	for(int i=2; i<=sqrt(n); i++)
		{
			if(n%i==0) return 0;
		}
	return 1;
}

int main(){
	int n;
	scanf("%d", &n);
	int a[n][n];
	for(int i=0; i<n; i++)
		{
			for(int j=0; j<n; j++)
				{
					scanf("%d ", &a[i][j]);
				}
		}
	int a1[n], k=0,max=0;
	for(int i=0;i<n;i++)
		{
			int s=0;
			for(int j=0;j<n;j++)
				{
					if(check(a[i][j])==1) s++;
				}
			if(s>max) max=s;
			a1[k]=s;
			++k;
		}
	for(int i=0; i<n; i++)
		{
			if(a1[i]==max) printf("%d ", i);
		}
}