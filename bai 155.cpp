#include <stdio.h>
int a[1005];
int main()
	{
		int n;
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
			scanf("%d",&a[i]);
		for(int i = 1; i <n; i++)//lap lai n-1 lan
			{
		        for(int j=1;j<=n-i;j++)// sap xep tren hang
		        	{
						if(a[j]>a[j+1]) 
							{
								int k=a[j+1];
								a[j+1]=a[j];
								a[j]=k;
							}
					}
				for( int i=1;i<=n;i++ )
					printf("%d",a[i]);
				printf("\n");
	    	}
	}