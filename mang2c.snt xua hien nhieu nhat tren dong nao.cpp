#include <stdio.h>
#include <math.h>
int snt(int n)
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
		int n;
		scanf("%d",&n);
		int a[n+5][n+5];
		int b[n+5][n+5];
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
				scanf("%d",&a[i][j]);
		int dong=0, res=0;// res de luu ki luc dem lon nhat
		for(int i=1;i<=n;i++)
			{
				int dem=0;
				for(int j=1;j<=n;j++)
					{
						if(snt(a[i][j])==1) dem++;
					}
				if (dem>=res)// them dau bang thi dong se la dong cuoi cung, bo dau bang thi dong se la dong dau tien, neu in tat ca ra thi phai dung mang 2 chieu
					{
						res=dem;
						dong++;
					}
			}
		printf("%d\n",dong);
		for(int i=1;i<=dong;i++)
			{
				for(int j=1;j<=n;j++)
					{
						if(snt(a[i][j])==1) printf("%d ", a[i][j]);
					}
				printf("\n");
			}
	}
