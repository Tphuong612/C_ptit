#include <stdio.h>
int a[1005];
int main()
	{
		int t;
		scanf("%d",&t);
		for(int k=1;k<=t;k++)
			{
				int n;
				scanf("%d",&n);
				for(int i=1;i<=n;i++)
					scanf("%d",&a[i]);
				int dem=1, res=0, b[10005];// mang b de luu cac chi so bat dau cua day con
				int soday=0;
				for(int i=2;i<=n;i++)
					{
						if(a[i]>a[i-1]) dem++;
						else dem=1;
						
						if(dem>res) // cho day so dau tien (luon xay ra)
							{
								res=dem;//dem so phan tu cau day con xem cai nao dai nhat
								soday=1;
								b[1]=i-res;
							}
						else if (dem==res)
							{
								soday++;
								b[soday]=i-res;
							}
					}
				printf(" Test %d:\n",k);
				for(int i=1;i<=soday;i++)
					{
						for(int j=1;j<=res;j++)
							printf("%d ",a[b[soday]+j]);
					}
				printf("\n");
				
			}
			
	}