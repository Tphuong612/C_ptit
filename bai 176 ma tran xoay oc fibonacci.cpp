#include <stdio.h>
#include <math.h>

long long f[101];
void tao()
	{
		f[0]=0;
		f[1]=1;
		for(int i=2;i<=100;i++)
			{
				f[i]=f[i-1]+f[i-2];
			}
	}

int main()
	{	
		tao();
		
		int n;
		scanf("%d",&n);
		
		long long a[101][101], cnt=0;
		int h1=1, h2=n, c1=1, c2=n;
		while(h1<=h2 && c1<=c2)
			{
				for(int i=c1;i<=c2;i++)//xay dung dong tren cung
					{
						a[h1][i]=f[cnt];
						++cnt;
					}
				++h1;
				for(int i=h1;i<=h2;i++)//xay dung canh ben phai
					{
						a[i][c2]=f[cnt];
						++cnt;
					}
				--c2;

				for(int i=c2;i>=c1;i--)//xay dung canh duoi
					{
						a[h2][i]=f[cnt];
						++cnt;
					}
				--h2;
				for(int i=h2;i>=h1;i--)// xay dung canh ben trai
					{
						a[i][c1]=f[cnt];
						++cnt;
					}
				++c1;
	
			}
	
		for(int i=1;i<=n;i++)//in ra
			{
				for(int j=1;j<=n;j++)
					printf("%lld ",a[i][j]);
				printf("\n");
			}
	
	}