#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>


int check(long long n){
	int a[12];
	int sum=0,
		cnt=0;
	while(n!=0)
		{
			a[cnt]=n%10;
			sum+=n%10;
			++cnt;
			n/=10;
		}
	if(sum%10!=0)
		return 0;
	else
		{
			for(int i=0;i<cnt/2;i++)
				if(a[i]!=a[cnt-i-1]) return 0;
		}
	return 1;
}

int main(){
	int t, n;
	scanf("%d", &t);
	while(t--)
		{
			scanf("%d", &n);
			int k=0;
			long long min=pow(10,n-1),
						max=pow(10,n);
			for(long long i=min; i<max; i++)
				{
					if(check(i)==1) ++k;
				}
		
	printf("%d\n",k);
		}
}