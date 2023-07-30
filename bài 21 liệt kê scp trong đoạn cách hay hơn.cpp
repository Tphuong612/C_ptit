#include<stdio.h>
#include<math.h>

int CheckCP(int a)
	{
		float k=sqrt(a);
		if(k==(int)sqrt(a)) return 1;	
	}

int main ()
	{
		int m,n;
		scanf("%d%d", &m, &n);
		if(CheckCP(m)==1)
			{
				printf("%d\n",(int)sqrt(n)-(int)sqrt(m)+1);
				for(int i=(int)sqrt(m);i<=(int)sqrt(n);i++)
					printf("%d\n", i*i);
			} 
		else
			{
				printf("%d\n",(int)sqrt(n)-(int)sqrt(m));
				for(int i=(int)sqrt(m)+1;i<=(int)sqrt(n);i++)
					printf("%d\n", i*i);
			
			}	
	}