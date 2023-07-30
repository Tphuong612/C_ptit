#include <stdio.h>
#include <math.h>
int snt(int n)
	{
		if(n<2) return 0;
		for(int i=2;i<=sqrt(n);i++)
			{
				if (n%i==0) return 0;
			}
		return n;
	}
int p[105];
void tao()
	{
		int i=0, dem=1;
		while(dem<=400)
			{
				if (snt(i)) 
					{
						p[dem]=i;
						++dem;
					}
				++i;
			}
		
	}

int main()
	{	
		tao();
		int t;
		scanf("%d",&t);
		for(int z=1;z<=t;z++)
			{
				
				int n;
				scanf("%d",&n);
				
				int a[101][101], cnt=1;
				int h1=1, h2=n, c1=1, c2=n;
				while(h1<=h2 && c1<=c2)
					{
						for(int i=c1;i<=c2;i++)//xay dung dong tren cung
							{
								a[h1][i]=p[cnt];
								++cnt;
							}
						++h1;
						for(int i=h1;i<=h2;i++)//xay dung canh ben phai
							{
								a[i][c2]=p[cnt];
								++cnt;
							}
						--c2;
		
						for(int i=c2;i>=c1;i--)//xay dung canh duoi
							{
								a[h2][i]=p[cnt];
								++cnt;
							}
						--h2;
						for(int i=h2;i>=h1;i--)// xay dung canh ben trai
							{
								a[i][c1]=p[cnt];
								++cnt;
							}
						++c1;
			
					}
				printf("Test %d:\n",z);
				for(int i=1;i<=n;i++)//in ra
					{
						for(int j=1;j<=n;j++)
							printf("%d ",a[i][j]);
						printf("\n");
					}
			}
	}