#include <stdio.h>
#include <math.h>
int a[1000005];
long long KTnguyento(long long n)
	{
		if(n<2) return 0;
		for(int i=2;i<=sqrt(n);i++)
			{
				if(n%i==0) return 0;
			}
		return 1;
	}
long long uocNTmax(long long n)
	{
		int dem=0;
		    for(int i=1;i<=sqrt(n);i++){
		    	if(n%i==0) {
    				if(KTnguyento(i)==1){
    						dem++;
    						a[dem]=i;
						}
    				if(KTnguyento(n/i)==1){
    						dem++;
    						a[dem]=n/i;
						}
					}
				}
		int max=-100;
		for(int i=1;i<=dem;i++)
		 	if(a[i]>=max) max=a[i];
		return max;
	}
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    	{
		    long long n;
		    scanf("%lld", &n);
		    printf("%lld\n",uocNTmax(n));
		}
}