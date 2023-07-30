#include <stdio.h>
#include <math.h>
int KTsohoanhao(int n)
	{	
		int s=0;
		if((int)sqrt(n)*(int)sqrt(n)!=n)
			{
				for(int i=1;i<=(int)sqrt(n);i++)
					{
						if(n%i==0) s=s+i+n/i;
					}
				s=s-n;
			}
		else 
			{
				for(int i=1;i<=(int)sqrt(n);i++)
					{
						if(n%i==0) s=s+i+(n/i);
					}
				s=s-n/(int)sqrt(n)-n;
			}
		if(s==n) return 1;
		else return 0;
	}
int main()
	{
		int a,b;
		scanf("%d%d",&a,&b);
		if(a<b)
			{
				for(int i=a;i<=b;i++)
					{
						if(KTsohoanhao(i)==1) printf("%d ",i);
					}
			}
		else
			{
				for(int i=b;i<=a;i++)
					{
						if(KTsohoanhao(i)==1) printf("%d ",i);
					}
			}
	}
