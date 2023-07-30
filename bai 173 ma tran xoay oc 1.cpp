#include <stdio.h>
int main()
	{
		int n;
		scanf("%d",&n);
		int a[101][101], cnt=1;
		int h1=1, h2=n, c1=1, c2=n;
		while(h1<=h2 && c1<=c2)
			{
				for(int i=c1;i<=c2;i++)//xay dung dong tren cung
					{
						a[h1][i]=cnt++;
					}	
				++h1;
				for(int i=h1;i<=h2;i++)//xay dung canh ben phai
					{
						a[i][c2]=cnt++;
					}	
				--c2;
				for(int i=c2;i>=c1;i--)//xay dung canh duoi
					{
						a[h2][i]=cnt++;
					}
					
				--h2;
				for(int i=h2;i>=h1;i--)// xay dung canh ben trai
					{
						a[i][c1]=cnt++;
					}
				++c1;
	
			}
		for(int i=1;i<=n;i++)//in ra
			{
				for(int j=1;j<=n;j++)
					printf("%d ",a[i][j]);
				printf("\n");
			}
	}