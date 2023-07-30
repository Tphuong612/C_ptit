#include<stdio.h>
int UCLN(int a,int b)
	{
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
		return UCLN;
	}
int main()
	{
		
		int a,b;
		scanf("%d%d",&a,&b);
		for(int i=a;i<=b;i++)
			{
				for(int j=a;j<=b;j++)
					if(i<j&&UCLN(i,j)==1) printf("(%d,%d)\n",i,j);
			}
			
	}