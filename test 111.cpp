#include <stdio.h>
#include<math.h>
int prime[2000001]={0};
void sang(int n)
	{
		for(int i=0;i<=)
		prime[1]=prime[0]=1;//loai luon 0 voi 1 
		for(int i=2;i<=1415;i++)
			for(int j=i*i;j<=2000001;j=j+i)
					prime[j]=1;	
	}
int main()
	{
		int n;
		scanf("%d",&n);
		for(int i=0;i<=n;i++)
			{
				if(prime[i]==0) printf("%d ",i);
			}
	}