#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
		{
			int a,b;
			scanf("%d%d",&a,&b);
			int UCLN;
			if(a==0&b!=0) UCLN=b;
			if(a!=0&b==0) UCLN=a;
			if(a>0&b>0)
				{
					while(a!=b)
						{
							if(a>b) a=a-b;
							else b=b-a;
						}
					UCLN=a;
				}
			printf("%d\n",UCLN);
		}
}