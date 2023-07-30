#include <stdio.h>
int a[20][20];
int giaithua(int n)
	{
		if(n<=1) return 1;
		return n*giaithua(n-1);
	}
int main()
	{
		int n;
		scanf("%d",&n);
		for(int i=0;i<n;i++)
			{
				for(int k=0;k<=i;k++)
					{
						a[i][k]=giaithua(i)/(giaithua(k)*giaithua(i-k));
						printf("%d ",a[i][k]);	
					}
				printf("\n");
			}
	}