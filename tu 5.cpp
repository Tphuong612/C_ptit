#include<stdio.h>
#include<math.h>

int check(long long a,int n){
	int sum=0;
	while(a/10 !=0)
	{
		int l=a/pow(10,n-1);
		int r=a%10;
		if(l!=r) return 0;
		sum+=l+r;
		a=(a-( l* pow(10,n-1) ) )/10;
		n-=2;		
	}
	sum+=a;
	if(sum%10!=0) return 0;
	else return 1;
}
int main(){
	int t, n;
	scanf("%d", &t);
	while(t--)
		{
			scanf("%d", &n);
			int k=0;
			for(long long i=pow(10,n-1); i<pow(10,n); i++)
				{
					if(check(i,n)==1) 
					{
						++k;
						printf("%d ",i);
				}
				}
			printf("%d\n",k);
		}
}