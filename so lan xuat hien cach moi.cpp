#include<stdio.h>
int a[100];
int b[100];

int check(int a[], int n, int x){
	int dem=0;
	for(int i=1; i<=n; i++)
		{
			if(x==a[i]) dem++;
		}
	if(dem>1) return 1;
	else return 0;
}

int check1(int b[], int n, int x){
	for(int i=1; i<=n; i++)
		{
			if(x==b[i]) return 0;
		}
	return 1;
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++)
		{
			scanf("%d", &a[i]);
		}
	int k=1;
	for(int i=1; i<=n; i++)
		{
			
			if (check(a,n,a[i])==1)
				{			
				if(check1(b,k,a[i])==1)
					{
						b[k]=a[i];
						k++;
					}						
				} 
		}
		if(k==1) printf("%d",k-1);
		else
			{
				for(int i=1; i<k; i++)
				{
					printf("%d ", b[i]);
				}			
			}
		
}