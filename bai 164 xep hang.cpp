#include <stdio.h>
#include <stdlib.h>
int T[1000005],D[1000005];
void sapxep(int T[], int D[], int n)//sap xep tang dan
	{
		for(int i=0;i<n-1;i++)
			{
				for(int j=0;j<n-i;j++)
					if(T[j]>=T[j+1]) 
					 	{
				 			int k=T[j+1];
							T[j+1]=T[j];
							T[j]=k;	
							
							int p=D[j+1];
							D[j+1]=D[j];
							D[j]=p;
						}
			}
	}
int main()
	{
		int n;
		scanf("%d",&n);
		for(int i=0;i<=n-1;i++)
			scanf("%d%d",&T[i],&D[i]);
		sapxep(T,D,n);
		long long sum=T[0]+D[0];
		for(int i=1;i<=n;i++)
			{
				if (sum<T[i]) sum=T[i]+D[i];
				else sum=sum+D[i];	
			}
		printf("%lld",sum);
	}
