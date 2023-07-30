#include <stdio.h>
int tongcacchuso(int n)
	{
		int s=0;
		while(n!=0)
				{
					s=s+n%10;
					n=n/10;	
				}
		return s;	
	}
int main()
	{
		long n;
		scanf("%ld",&n);
		long sobandau=n;
		int j=2,s=0;
		while(n>1)//phan tich
			{	
				if(n%j==0) 
					{	s=s+tongcacchuso(j);
						n/=j;	
					}
				else j++;
			}
//		printf("%d",s);
		if(s==tongcacchuso(sobandau)) printf("YES\n");
		else printf("NO\n");
	}