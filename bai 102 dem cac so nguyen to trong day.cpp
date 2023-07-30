#include <stdio.h>
#include <math.h>
int a[1005];
int b[1005];

int KTnguyento(int n)
	{
		if(n<2) return 0;
		for(int i=2;i<=sqrt(n);i++)
			{
				if (n%i==0) return 0;
			}
		return 1;
	}
int main()
	{
		int t;
		scanf("%d",&t);
		for(int j=1;j<=t;j++)
			{
				int n;
				scanf("%d",&n);
				for(int i=1;i<=n;i++)
					{
						scanf("%d",&a[i]);
					}
				for(int i = 1; i <n; i++)//lap lai n-1 lan
					{
				        for(int j=1;j<=n-i;j++)// sap xep tren hang
				        	if(a[j]>=a[j+1]) 
								{
									int k=a[j+1];
									a[j+1]=a[j];
									a[j]=k;
								}
			    	}
				for(int i=1;i<=n;i++)
					{
						b[a[i]]++;
					}
				printf("Test %d:\n",j);
				for(int i=1;i<=n;i++)
					{
						if(b[a[i]]>=1&&KTnguyento(a[i])==1)
							{
								printf("%d xuat hien %d lan\n",a[i],b[a[i]]);
								b[a[i]]=0;
							}
					}
			}
		
	}
	