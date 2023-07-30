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
		int a,b;
		scanf("%d%d",&a,&b);
		if (tongcacchuso(a)>tongcacchuso(b)) printf("%d %d",b,a);
		else if (tongcacchuso(a)<=tongcacchuso(b)) printf("%d %d",a,b);	
	}