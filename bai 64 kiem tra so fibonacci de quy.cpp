#include <stdio.h> 
int fb(int n) 
	{ 
		if(n==1||n==0||n==2||n==3) return n;
		return fb(n-2)+fb(n-1); 
	} 
int main() 
	{ 
		long long n, d=0; 
		scanf("%lld", &n); 
		for( long long i=0; i<=n; ++i) 
			if(n==fb(i)) d++; 
		if(d==1) printf("1"); 
		else printf("0"); 
	}