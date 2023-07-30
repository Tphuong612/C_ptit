#include <stdio.h>
int a[1005];
int chan[10005];
int le[10005];
int main()
	{
				int n;
				scanf("%d",&n);
				int dem1=0, dem2=0;
				for(int i=1;i<=n;i++)
					{
						scanf("%d",&a[i]);
						if(a[i]%2==0) 
							{
								dem1++;
								chan[dem1]=a[i];
							}
						else 
							{
								dem2++;
								le[dem2]=a[i];
							}
					}
				for(int i=1;i<=dem1;i++)
					printf ("%d ",chan[i]);
				printf("\n");
				for(int i=1;i<=dem2;i++)
					printf ("%d ",le[i]);
	}