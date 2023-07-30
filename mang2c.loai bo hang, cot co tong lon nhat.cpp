#include <stdio.h>
int main()
	{
		int m,n;
		scanf("%d%d",&m,&n);
		int a[m+5][n+5];
		for(int i=1;i<=m;i++)
			for(int j=1;j<=n;j++)
				scanf("%d",&a[i][j]);
		// tim hang co tong lon nhat va danh dau
		int res1=0, hang;// res1 luu ki luc
		for(int i=1;i<=m;i++)
			{
				int s1=0;
				
				for(int j=1;j<=n;j++)
					s1=s1+a[i][j];
				if(res1<s1)
					{
						res1=s1;
						hang=i;
					}
			}
		// tim cot co tong lon nhat sau khi da loai hang co tong lon nhat va danh dau
		int res2=0, cot;
		for(int j=1;j<=n;j++)
			{	
				int s2=0;
				for(int i=1;i<=m;i++)
					if (i!=hang)s2=s2+a[i][j];
				if(res2<s2)
					{
						res2=s2;
						cot=j;
					}
			
			} 
		// in ra
		for(int i=1;i<=m;i++)
			{
				for(int j=1;j<=n;j++)
					{
						if(i!=hang&&j!=cot) printf("%d ",a[i][j]);
					}
				printf("\n");
			}				
	}


