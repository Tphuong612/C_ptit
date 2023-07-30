#include<stdio.h>

int check(int n){
	int sum=0;
	int k=0;
	int a[1000005];
	while(n)
		{
			++k;
			a[k]=n%10;
			sum+=n%10;
			n/=10;
		}
	if(sum%10!=8) return 0;
	else
		{
			int b[11]={0};
			int l=1, r=k;
			while(l<r)
				{
					if(a[l]!=a[r]) return 0;
					l++;
					r--;
					b[a[l]]++;
					b[a[r]]++;
				}
			if(b[6]==0) return 0;
			else return 1;	
		}
	
}
int main(){
	int a, b;
	scanf("%d%d", &a,&b);
	int min=(a<=b)?a:b;
	int max=(a>=b)?a:b;
	int dem=0;
	for(int i=min; i<=max; i++)
		{
			if(check(i)==1) dem++;
		}
	printf("%d", dem);
}