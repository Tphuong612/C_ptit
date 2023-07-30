#include <stdio.h>
struct ChungLoai{
	char ten[1005];
	int can;
	int co;
	int soluong;	
};
typedef struct ChungLoai cl;
int solve (int n, int a)
	{
		int soluong=0;
		while(n/a!=0)
			{
				soluong+=n/a;
				n=n%a+2*(n/a);
			}
		return soluong;
	}
int main()
{
	int n;
	scanf("%d",&n);
	getchar();
	cl a[n+1];
	for(int i=1;i<=n;i++)// nhap va xu li so luong con tien hoa
		{
			gets(a[i].ten);
			scanf("%d%d",&a[i].can,&a[i].co);
			getchar();
			a[i].soluong=solve(a[i].co, a[i].can);
		}
	int tong=0;
	for(int i=1;i<=n;i++)// tim tat ca cac con duoc tien hoa
		{
			tong+= a[i].soluong;
		}
	printf("%d\n", tong);
	int max=-100;
	for(int i=1;i<=n;i++)
		{
			if(a[i].soluong>max) max=a[i].soluong;
		}
	for(int i=1;i<=n;i++)
		{
			if(a[i].soluong==max) 
				{
					printf("%s",a[i].ten);
					break;
				}
		}
 	return 0;
}
