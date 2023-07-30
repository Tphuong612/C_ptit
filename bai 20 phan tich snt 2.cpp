
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
			while(n>1)//phan tich
				{	
					if(n%j==0) //bao gio het chia cho so j thi 
								// moi bat tang tang j
						{	
							printf("%d ",j);
							n/=j;	
						}
					else j++;
				}
			if(n==1) printf("\n");
		}
}