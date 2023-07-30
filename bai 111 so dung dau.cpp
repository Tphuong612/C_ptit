#include <stdio.h>
int a[10005];
int b[10005];
int main()
	{
		int t;
		scanf("%d",&t);
		for(int i=1;i<=t;i++)
			{
				int n;
				scanf("%d",&n);
				for(int i=1;i<=n;i++)
					{
						scanf("%d",&a[i]);
					}
				int dem2=0;
				for(int i = 1; i <=n; i++)// kiem tra so dung dau
					{
						int dem1=0;
				        for(int j=i+1;j<=n;j++)
				        	{
				        		if(a[i]>a[j]) dem1++;
							}
						if(dem1==n-i)//cho so dung dau vao mang b
							{
								dem2++;
								b[dem2]=a[i];
							}
			    	}
			    for(int i=1;i<=dem2;i++)//sap xep mang b theo thu tu giam dan
			    	{
			    		for(int j=1;j<=dem2-i;j++)
			    			{
			    				if(b[j]<b[j+1]) 
			    					{
			    						int t=b[j];
			    						b[j+1]=b[j];
			    						b[j]=t;
									}
							}
					}
				for(int i=1;i<=dem2;i++)//dua ra output
					{
						printf("%d ",b[i]);
					}
				printf("\n");
			}
	}