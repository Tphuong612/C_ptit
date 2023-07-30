#include <stdio.h>
struct thisinh
	{
		int id;
		char ten[1005];
		char ngaysinh[1005];
		float mon1;
		float mon2;
		float mon3;
		float tong;
	};

typedef struct thisinh ts;
void solve(ts a[], int n)
	{
		float max=-10;
		for(int i=1;i<=n;i++)
			{
				if (a[i].tong>max) max=a[i].tong;
			}
		for(int i=1;i<=n;i++)
			{
				if(a[i].tong>=max) printf("%d %s %s %.1f\n", a[i].id, a[i].ten, a[i].ngaysinh, a[i].tong);
			}
	}
int main()
	{
	 	int n;
	 	scanf("%d",&n);
	 	getchar();
	 	ts a[n+1];
	 	for(int i=1;i<=n;i++)
	 		{
	 			a[i].id=i;
	 			gets(a[i].ten);
	 			gets(a[i].ngaysinh);
	 			scanf("%f%f%f",&a[i].mon1,&a[i].mon2,&a[i].mon3);
	 			getchar();
	 			a[i].tong=a[i].mon1+a[i].mon2+a[i].mon3;
			}
		solve(a,n);
		return 0;
	}
