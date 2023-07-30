#include <stdio.h>
int a[10005],b[10005],c[10005];
void tang(int a[],int n)//sap xep tang dan
	{
		for(int i=0;i<n-1;i++)
			{
				for(int j=0;j<=n-i-1;j++)
					if(a[j]>=a[j+1]) 
					 	{
				 			int k=a[j+1];
							a[j+1]=a[j];
							a[j]=k;	
						}
			}
	}
void giam(int a[],int n)//sap xep giam dan
	{
		for(int i=0;i<n-1;i++)
			{
				for(int j=1;j<=n-i-1;j++)
					if(a[j]<=a[j+1]) 
					 	{
				 			int k=a[j+1];
							a[j+1]=a[j];
							a[j]=k;	
						}
			}
	}
int main()
	{
		int t;
		scanf("%d",&t);
		for(int k=1;k<=t;k++)
			{
				int n;
				scanf("%d",&n);
				for(int i=0;i<n;i++)
					scanf("%d",&a[i]);
				for(int i=0;i<n;i++)
					scanf("%d",&b[i]);
				tang(a,n);
				giam(b,n);
				printf("Test %d:\n",k);
				for(int i=0;i<2*n;i++)
					{
						if(i%2==0) 
							{
								c[i]=a[i/2];
								printf("%d ",c[i]);
							}
						else 
							{
								c[i]=b[i/2];
								printf("%d ",c[i]);
							}
					}
				printf("\n");
		}
	}