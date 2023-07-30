
#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
		{
			int n;
			scanf("%d",&n);
			int j=2;
			while(n>1)
				{	
					if(n%j==0) 
						{	
							printf("%d ",j);
							n/=j;	
						}
					else j++;
				}
		}
}